# SRConnect via MLink

This document provides an overview of the SRConnect system developed for responding to Auctions via SpiderRock's MLink API. Our system leverages specific message types to enable auction responders to interact with the auction process.

# Table of Contents
- [System Overview](#system-overview)
- [Understanding MLink's Role](#understanding-mlink's-role-in-the-srcconnect-workflow)
  - [Key Components](#key-components)
    - [Filtering](#filtering)
    - [MLink Server](#mlink-server)
    - [Client Auction Responder](#client-auction-responder)
  - [Workflow Overview](#workflow-overview)
  - [Key Features](#key-features)
  - [Message Types](#message-types)
- [Integration with MLink API](#integration-with-mlink-api)
  - [Authentication](#authentication)
  - [Connection Types](#connection-types)
- [Auction Message Structures](#auction-message-structures)
  - [Message Types](#message-types)
    - [UserAuctionFilter](#userauctionfilter)
    - [AuctionNotice](#auctionnotice)
    - [NoticeResponse](#noticeresponse)
    - [NoticeExecReport](#noticeexecreport)
    - [NoticeCancel](#noticecancel)
    - [Auction Print](#auction-print)
    - [AuctionNotice RevCon](#auctionnotice-revcon)
    - [AuctionNotice BoxSprd](#auctionnotice-boxsprd)

## System Overview

The SRConnect Auction System integrates with SpiderRock's MLink API to facilitate Auction reponses. It utilizes a set of predefined message types to manage auction notices and responses. This system is designed to work with the FIX financial protocol and SpiderRock's Trade Tool alongside the MLink API.

# Understanding MLink's Role in the SRCconnect Workflow

MLink is a central component of the SRCconnect trading system. It facilitates the efficient handling of auction notices, responses, and cancellations, using a sophisticated filtering system to ensure that clients receive pertinent auction opportunities in real-time.

## Key Components

### Filtering
- **Purpose**: Allows clients to specify filters for the auctions of interest.
- **Functionality**: Utilizes `UserAuctionFilter` messages to streamline the delivery of `AuctionNotice` messages, enhancing relevance and efficiency.

### MLink Server
- Processes and routes all auction-related messages within the system.
- **Messages Processed**:
  - `UserAuctionFilter`: Message used to filter Notices received by client (to be sent by client to MLink Server).
  - `AuctionNotice`: Alerts clients of relevant auctions based on established filters.
  - `AuctionNoticeBoxSprd`: Alerts clients of relevant Box Sprd auctions based on established filters.
  - `AuctionNoticeSynthetic`: Alerts clients of relevant Synthetic auctions based on established filters.
  - `NoticeResponse`: Message used to participate/respond to Auction Notices.
  - `NoticeExecReport`: Sends confirmation/reporting of the action taken on `NoticeResponse`.
  - `NoticeCancel`: Processes clients' requests to cancel their responses to auctions.
  - `AuctionPrint`: Message details auction transaction prints (trades).

### Client Auction Responder
- **Automated Decision-Making**: Analyzes incoming `AuctionNotice` messages and determines the appropriate action based on positions, theoretical models, and risk rules to respond to auctions.
- **Documentation**: Clients are advised to consult the SR MLink Auction Responder Documentation for in-depth understanding and setup instructions.

## Workflow Overview

The MLink API's integration into the SRCconnect workflow can be summarized in the following steps:

1. **Auction Notice Generation**: The MLink Server publishes an `AuctionNotice` when a new auction is available that matches the client's predefined filters.
2. **Client Decision Process**: The Client Auction Responder receives the `AuctionNotice` and uses the client's strategy and risk profile to decide whether to participate in an auction.
3. **Response Handling**: The client's `NoticeResponse` is sent to the MLink Server, which then processes it and returns a `NoticeExecReport`.
4. **Cancellation Option**: Clients retain the ability to send a `NoticeCancel` message if they choose to withdraw from an auction.

The process ensures that clients engage with auctions that are most relevant to them, maintaining a high level of market responsiveness and strategic participation.

Through MLink, SRCconnect provides a robust platform for auction-based trading, enabling clients to filter, respond to, and manage auction participation with precision and agility. MLink's API and server act as the cornerstone of this process, ensuring real-time data streaming and interactive trading capabilities.


### Key Features

- **Auction Filtering**: Participants can filter auctions of interest with `UserAuctionFilter` messages, enhancing the relevance of AuctionNotice messages.
- **Auction Notice Publication**: Notices are consolidated into a feed called `AuctionNotice`, which streams auctions in real-time.
- **Auction Responses**: Participants can respond to auctions directly using `NoticeResponse` messages.
- **Auction Notice Execution Report**: Participants can monitor their `NoticeResponse`.
- **Auction Cancel**: Participants can cancel their NoticeResponse directly using `NoticeCancel` messages.

### Message Types

1. **UserAuctionFilter**: Allows responders to specify filters for the auctions they wish to receive notifications from `AuctionNotice`.
2. **AuctionNotice**: A real-time feed of ongoing auctions available for clients to stream.
3. **NoticeResponse**: Used by responders to participate in an auction.
4. **NoticeExecReport**: Allows responders to get a execution report following their `NoticeResponse`.
5. **NoticeCancel**: Allows responders to cancel their `NoticeResponse`.

## Integration with MLink API

Our Auction System utilizes the MLink API for message transmission, leveraging its support for multiple message delivery protocols, including JSON, Framed JSON, and Google Protocol Buffers. The API supports both RESTful queries and WebSocket streaming, accommodating a wide range of application requirements.

### Authentication

Access to the MLink API requires authentication via an API Key or SessionKey, ensuring secure interactions with the auction system. Detailed instructions on authentication methods are available in the MLink API documentation.

### Connection Types

Depending on your application's needs, you can choose between REST API and WebSocket API connections. The REST API is suitable for applications requiring occasional data queries, while the WebSocket API is designed for applications needing live data subscriptions.

## Auction Message Structures

Below are placeholders for the message structures used in our Auction System. Detailed specifications will be provided based on the specific requirements of each message type.

### UserAuctionFilter

#### UserAuctionFilter Message Schema

The `UserAuctionFilter` message is vital for participants to set their preferences and filters for the auctions they are interested in from `AuctionNotice`. Below is the detailed schema outlining all fields associated with this message type, including data types, enum sets (where applicable), and descriptions for each field.

- **Message Type**: `UserAuctionFilter`
- **Message Number**: 1915
- **MLink Token**: SRConnect

## Field Descriptions

| Field Name          | Data Type | Enum Set                                                  | Description                                                                                                       | In Repeater      |
|---------------------|-----------|-----------------------------------------------------------|-------------------------------------------------------------------------------------------------------------------|------------------|
| userName            | String    |                                                           | The user name associated with this filter.                                                                        |                  |
| filterName          | String    |                                                           | The name of the filter.                                                                                           |                  |
| clientFirm          | String    |                                                           | Identifies the SR Client Firm.                                                                                    |                  |
| disabled             | Enum      | None, Yes, No                                              | Indicates if the filter is enabled.                                                                               |                  |
| includeCovered      | Enum      | None, Yes, No                                              | Whether to include covered auctions in the filter.                                                                |                  |
| includeETFs         | Enum      | None, Yes, No                                              | Whether to include ETFs in the filter.                                                                            |                  |
| includeADRs         | Enum      | None, Yes, No                                              | Whether to include ADRs in the filter.                                                                            |                  |
| includeIndexes      | Enum      | None, Yes, No                                              | Whether to include indexes in the filter.                                                                         |                  |
| minUPrc             | Float     |                                                           | Minimum underlier price for auctions to be included.                                                              |                  |
| hasUAvgDailyVlmFilter| Enum     | None, Yes, No                                              | Whether the filter includes a minimum average daily volume for the underlier.                                     |                  |
| minUAvgDailyVlm     | Float     |                                                           | Minimum underlier average daily volume (in $1mm increments) for inclusion.                                        |                  |
| maxUAvgDailyVlm     | Float     |                                                           | Maximum underlier average daily volume (in $1mm increments) for inclusion.                                        |                  |
| minSize             | Float     |                                                           | Minimum size for auctions to be included.                                                                         |                  |
| minAbsVega             | Float     |                                                           | Minimum vega for auctions to be included.                                                                         |                  |
| hasAbsDeltaFilter   | Enum      | None, Yes, No                                              | Whether the filter includes a minimum absolute delta.                                                            |                  |
| minAbsDelta         | Float     |                                                           | Minimum absolute delta for auctions to be included.                                                               |                  |
| maxAbsDelta         | Float     |                                                           | Maximum absolute delta for auctions to be included.                                                               |                  |
| hasXDeltaFilter     | Enum      | None, Yes, No                                              | Whether the filter includes a minimum x delta.                                                                    |                  |
| minXDelta           | Float     |                                                           | Minimum x delta for auctions to be included.                                                                      |                  |
| maxXDelta           | Float     |                                                           | Maximum x delta for auctions to be included.                                                                      |                  |
| hasAtmSVolFilter    | Enum      | None, Yes, No                                              | Whether the filter includes a minimum ATM surface volatility.                                                     |                  |
| minAtmSVol          | Float     |                                                           | Minimum ATM surface volatility for auctions to be included.                                                       |                  |
| maxAtmSVol          | Float     |                                                           | Maximum ATM surface volatility for auctions to be included.                                                       |                  |
| hasAtmSDivFilter    | Enum      | None, Yes, No                                              | Whether the filter includes a minimum ATM surface dividend yield.                                                 |                  |
| minAtmSDiv          | Float     |                                                           | Minimum ATM surface dividend yield for auctions to be included.                                                   |                  |
| maxAtmSDiv          | Float     |                                                           | Maximum ATM surface dividend yield for auctions to be included.                                                   |                  |
| hasExpiryDays       | Enum      | None, Yes, No                                              | Whether the filter includes a minimum number of expiry days.                                                      |                  |
| minExpiryDays       | Int       |                                                           | Minimum number of expiry days for auctions to be included.                                                        |                  |
| maxExpiryDays       | Int       |                                                           | Maximum number of expiry days for auctions to be included.                                                        |                  |
| includeZDte         | Enum      | None, Yes, No                                              | Whether to include auctions with zero days to expiry, if applicable.                                              |                  |
| includeDaily        | Enum      | None, Yes, No                                              | Whether to include auctions with daily expiries.                                                                  |                  |
| includeWeekly       | Enum      | None, Yes, No                                              | Whether to include auctions with weekly expiries.                                                                 |                  |
| includeRegular      | Enum      | None, Yes, No                                              | Whether to include auctions with regular expiries.                                                                |                  |
| includeQuarterly    | Enum      | None, Yes, No                                              | Whether to include auctions with quarterly expiries.                                                              |                  |
| includeOtherExp    | Enum      | None, Yes, No                                              | Whether to include auctions with other expiries.                                                              |                  |
| includeFlex         | Enum      | None, Yes, No                                              | Whether to include auctions with flex expiries.                                                                   |                  |
| includeCommPaying   | Enum      | None, Yes, No                                              | Whether to include auctions where commission is being paid.                                                       |                  |
| direction           | Enum      | None, Buy, Sell                                            | Direction of interest in the auction (Buy = Buy Regular or Sell Flipped).                                         |                  |
| netVegaDirection       | Enum      | None, Buy, Sell                                            | Vega direction of interest in the auction.                                                                        |                  |
| modifiedBy          | String    |                                                           | User who last modified the filter.                                                                                |                   |
| modifiedIn          | Enum      | None, Neptune, Pluto, etc.                                 | Indicates where the filter was last modified.                                                                     |                   |
| timestamp           | DateTime  |                                                           | Timestamp of the last modification.                                                                               |                   |
| AuctionSources      | Repeater  |                                                           | Repeater field for specifying auction sources.                                                                     |                   |
| auctionSource       | Enum      | SRC, AMEX, BOX, etc.                                       | Specifies the auction source within `AuctionSources` repeater.                                                    | AuctionSources    |
| AuctionTypes        | Repeater  |                                                           | Repeater field for specifying auction types.                                                                       |                   |
| auctionType         | Enum      | Exposure, Improvement, etc.                                | Specifies the auction type within `AuctionTypes` repeater.                                                        | AuctionTypes      |
| ExcludeTicker       | Repeater  |                                                           | Repeater field for specifying tickers to exclude.                                                                  |                   |
| ticker              | TickerKey |                                                           | Specifies a ticker to exclude within `ExcludeTicker` repeater.                                                    | ExcludeTicker    |
| IncludeTicker       | Repeater  |                                                           | Repeater field for specifying tickers to include.                                                                 |                   |
| ticker            | TickerKey |                                                           | Specifies a ticker to include within `IncludeTicker` repeater.                                                    | IncludeTicker     |
| Industry            | Repeater  |                                                           | Repeater field for specifying industries.                                                                         |                   |
| industry          | String    |                                                           | Industry string prefix (must match left edge) for inclusion in the filter.                                         | Industry          |
| SpreadClass         | Repeater  |                                                           | Repeater field for specifying spread classes.                                                                     |                   |
| spreadClass       | Enum      | None, Stk, Fut, Call, Put, Synth, RevCon, Box, JRoll, Roll, Straddle, Strangle, CSpread, PSpread, VStrip, VSpread, HStrip, HSpread, BFly, RiskRev, Mixed | Specifies the spread class within `SpreadClass` repeater. | SpreadClass       |

The `UserAuctionFilter` JSON Body sent back to an MLink Server should repsect the following structure (Sample):

```json
{
    "header": {
        "mTyp": "UserAuctionFilter"
    },
    "message": {
        "pkey": {
            "userName": "your username",
            "filterName": "Testing"
        },
        "clientFirm": "YourClientFirm",
        "disabled": "No",
        "minUPrc": 10.0,
        "minSize": 10,
        "minAbsVega": 1.0,
        "hasAbsDeltaFilter": "Yes",
        "minAbsDelta": 0,
        "maxAbsDelta": 1,
        "hasXDeltaFilter": "Yes",
        "minXDelta": -0.5,
        "maxXDelta": 0.5,
        "hasExpiryDays": "Yes",
        "minExpiryDays": 1,
        "maxExpiryDays": 365
    }
}
```

### AuctionNotice

#### AuctionNotice Message Schema

The `AuctionNotice` message is a stream of Auction Notices available. Below is the detailed schema outlining all fields associated with this message type, including data types, enum sets (where applicable), and descriptions for each field.

- **Message Type**: `AuctionNotice`
- **Message Number**: 2465
- **MLink Token**: SRConnect


| Field Name           | Data Type  | Enum Set                                                                                                                    | Description                                                                                          |
|----------------------|------------|------------------------------------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------------------|
| noticeNumber         | Long       |                                                                                                                              | Unique identifier for the notice.                                                                    |
| ticker          | tickerKey       |                                  | underlier ticker key                                                                     |
| tradeDate         | DateKey       |                                                                                                      | Date of AUction                                                                  |
| auctionType          | Enum       | None, Exposure, Improvement, Facilitation, Solicitation, Opening, Closing, RFQ, Block, Flash                                 | Type of auction being initiated.                                                                     |
| auctionEvent         | Enum       | None, Start, Update, End                                                                                                     | Current event state of the auction.                                                                  |
| auctionSource        | Enum       | None, SRC, AMEX, BOX, CBOE, ISE, NYSE, PHLX, NSDQ, BATS, C2, NQBX, MIAX, GMNI, EDGO, MCRY, MPRL, EMLD, MEMX, CME, CBOT, etc. | Source of the auction notice (e.g., SRC, MIAX, etc.).                                                |
| isTestAuction        | Enum       | None, Yes, No                                                                                                                | Indicates if the auction is a test (not live).                                                       |
| shortCode            | String     |                                                                                                                              | 8-letter auction short code, unique per day (block auctions only). Can be used to find auctions.    |
| industry             | Text1      |                                                                                                                              | Industry string.                                                                                     |
| symbolType           | Enum       | None, Equity, ADR, ETF, etc.                                                                                                 | Type of the symbol involved in the auction.                                                          |
| uAvgDailyVlm         | Float      |                                                                                                                              | Underlier's average daily trading volume.                                                            |
| custSide             | Enum       | None, Buy, Sell                                                                                                              | Indicates the customer's side in the transaction.                                                    |
| custQty              | Int        |                                                                                                                              |                                                                                                      |
| custPrc              | Double     |                                                                                                                              | Public customer price.                                                                               |
| hasCustPrc           | Enum       | None, Yes, No                                                                                                                |                                                                                                      |
| custFirmType           | Enum       |                                                                                                                 |     Cust Firm Type if Disclosed                                                                                                 |
| custAgentMPID           | string 6       |                                                                                                                 |     cust agent exchange member initiating the auction (if disclosed)                                       |
| custClientFirm       | String     |                                                                                                                              | Customer client firm (if disclosed).                                                                 |
| commEnhancement      | Float      |                                                                                                                              | Additional commission (if any) paid by the responder.                                                |
| custCommPaying       | Enum       | None, Yes, No                                                                                                                | Indicates if the client is commission-paying (to the responder).                                     |
| custQtyCond          | Enum       | None, UpToQty, AllOrNone, QtyOrMore                                                                                          | Specifies the condition on the quantity: UpToQty, AllOrNone, QtyOrMore.                              |
| auctionDuration      | Int        |                                                                                                                              | Expected auction duration (in milliseconds).                                                         |
| numOptLegs           | Byte       |                                                                                                                              |                                                                                                      |
| spreadClass          | Enum       | None, Stk, Fut, Call, etc.                                                                                                   |                                                                                                      |
| spreadFlavor         | Enum       | None, Normal, MLEG only Flipped                                                                                                        |                                                                                                      |
| containsHedge        | Enum       | None, Yes, No                                                                                                                |                                                                                                      |
| uBid                 | Double     |                                                                                                                              |                                                                                                      |
| uAsk                 | Double     |                                                                                                                              |                                                                                                      |
| timestamp         | Long       |                                                                                                                              |   from ats / exchange net timestamp if possible                                                                                                   |
| netVega              | Float      |                                                                                                                              |                                                                                                      |
| netDelta             | Float      |                                                                                                                              |                                                                                                      |
| netGamma             | Float      |                                                                                                                              |                                                                                                      |
| netSurfPrc           | Float      |                                                                                                                              | SR Surface Price (entire package).                                                                   |
| includeSRNetwork     | Enum       | None, Include, Exclude, Disclose                                                                                             |                                                                                                      |
| DirectedCounterParty | Repeater   |                                                                                                                              | Indicates the start of `DirectedCounterParty` repeater fields.                                      |
| clientFirm           | String     |                                                                                                                              | (In `DirectedCounterParty`) Name of the client firm.                                                 |
| inclExcl             | Enum       | None, Include, Exclude, Disclose                                                                                             | (In `DirectedCounterParty`) Include or exclude specific counter parties.                             |
| isCommPaying         | Enum       | None, Yes, No                                                                                                                | (In `DirectedCounterParty`) If the client is paying commission.                                      |
| OrderLegs            | Repeater   |                                                                                                                              | Indicates the start of `OrderLegs` repeater fields.                                                  |
| secKey               | OptionKey  |                                                                                                                              | (In `OrderLegs`) Security key for the leg.                                                           |
| secType              | Enum       | None, Stock, Future, Option, MLeg                                                                                            | (In `OrderLegs`) Security type of the leg.                                                           |
| side                 | Enum       | None, Buy, Sell                                                                                                              | (In `OrderLegs`) Side of the leg.                                                                    |
| ratio                | UShort     |                                                                                                                              | (In `OrderLegs`) Ratio of the leg.                                                                   |
| undPerCn             | Int        |                                                                                                                              | (In `OrderLegs`)                                                                                    |
| pointValue           | Float      |                                                                                                                              | (In `OrderLegs`)                                                                                    |
| expType              | Enum       | None, ZDte, Daily, etc.                                                                                                      | (In `OrderLegs`)                                                                                    |
| years                | Float      |                                                                                                                              | (In `OrderLegs`) SR volatility years to expiry.                                                      |
| rate                 | Float      |                                                                                                                              | (In `OrderLegs`) SR global (discount) rate to expiry.                                                |
| atmVol               | Float      |                                                                                                                              | (In `OrderLegs`) ATM (forward price) SR surface volatility.                                          |
| ddivPv               | Float      |                                                                                                                              | (In `OrderLegs`) SR present value of dividend stream.                                                |
| tVol                 | Float      |                                                                                                                              | (In `OrderLegs`) Client theoretical surface volatility (if client surfaces uploaded to SR).         |
| sVol                 | Float      |                                                                                                                              | (In `OrderLegs`) SR Surface Volatility.                                                              |
| sDiv                 | Float      |                                                                                                                              | (In `OrderLegs`) SR Surface Dividend.                                                                |
| sPrc                 | Float      |                                                                                                                              | (In `OrderLegs`) SR Surface Price.                                                                   |
| de                   | Float      |                                                                                                                              | (In `OrderLegs`) Delta exposure of the option leg.                                             |
| ga                   | Float      |                                                                                                                              | (In `OrderLegs`) Gamma exposure of the option leg.                                             |
| th                   | Float      |                                                                                                                              | (In `OrderLegs`) Theta decay of the option leg.                                                |
| ve                   | Float      |                                                                                                                              | (In `OrderLegs`) Vega exposure of the option leg.                                              |
| sVolOk                   | enum      |         YesNo                                                                                                                     | Yes if live market and sVol are tracking as expected.                                              |
| oBid                 | Float      |                                                                                                                              | (In `OrderLegs`) NBBO bid price.                                                               |
| oBidSz               | Int        |                                                                                                                              | (In `OrderLegs`) Cumulative NBBO bid size.                                                     |
| oBidMask             | UInt       |                                                                                                                              | (In `OrderLegs`) Bit-mask of participating NBBO exchanges.                                     |
| oAsk                 | Float      |                                                                                                                              | (In `OrderLegs`) NBBO ask price.                                                               | 
| oAskSz               | Int        |                                                                                                                              | (In `OrderLegs`) Cumulative NBBO ask size.                                                     |
| oAskMask             | UInt       |                                                                                                                              | (In `OrderLegs`) Bit-mask of participating NBBO exchanges.                                     |

The `AuctionNotice` JSON Body received from an MLink Server will be structured in the following way (Sample):

```json
{
        "header": {
            "mTyp": "AuctionNotice"
        },
        "message": {
            "pkey": {
                "noticeNumber": "1F41-3364-7800-D7C1"
            },
            "ticker": {
                "at": "EQT",
                "ts": "NMS",
                "tk": "IWM"
            },
            "tradeDate": "2024-04-10",
            "auctionType": "Exposure",
            "auctionEvent": "Start",
            "auctionSource": "NYSE",
            "isTestAuction": "No",
            "industry": "Financials",
            "custSide": "Buy",
            "custQty": 1,
            "custPrc": 0.0073,
            "hasCustPrc": "Yes",
            "containsHedge": "No",
            "uBid": 200.5,
            "uAsk": 200.5099945068,
            "timestamp": "2024-04-10 13:30:37.462731",
            "netVega": 2.2605,
            "netDelta": 7.9345,
            "netGamma": 0.2836,
            "netSurfPrc": -1.4956,
            "OrderLegs": [
                {
                    "secKey": {
                        "at": "EQT",
                        "ts": "NMS",
                        "tk": "IWM",
                        "dt": "2024-05-17",
                        "xx": 206,
                        "cp": "Put"
                    },
                    "secType": "Option",
                    "side": "Buy",
                    "ratio": 1,
                    "undPerCn": 100,
                    "pointValue": 100,
                    "expType": "Regular",
                    "years": 0.1078,
                    "rate": 0.0563,
                    "atmVol": 0,
                    "ddivPv": 0,
                    "tVol": 0,
                    "sVol": 0.15,
                    "sDiv": 0,
                    "sPrc": 6.7045,
                    "de": -0.6948,
                    "ga": 0.0423,
                    "th": -0.0433,
                    "ve": 0.2423,
                    "sVolOk": "No",
                    "oBid": 7.72,
                    "oBidSz": 268,
                    "oBidMask": 21893119,
                    "oAsk": 7.98,
                    "oAskSz": 25,
                    "oAskMask": 17304279
                },
                {
                    "secKey": {
                        "at": "EQT",
                        "ts": "NMS",
                        "tk": "IWM",
                        "dt": "2024-05-17",
                        "xx": 208,
                        "cp": "Put"
                    },
                    "secType": "Option",
                    "side": "Sell",
                    "ratio": 1,
                    "undPerCn": 100,
                    "pointValue": 100,
                    "expType": "Regular",
                    "years": 0.1078,
                    "rate": 0.0563,
                    "atmVol": 0,
                    "ddivPv": 0,
                    "tVol": 0,
                    "sVol": 0.15,
                    "sDiv": 0,
                    "sPrc": 8.2,
                    "de": -0.7741,
                    "ga": 0.0394,
                    "th": -0.0343,
                    "ve": 0.2197,
                    "sVolOk": "No",
                    "oBid": 9.05,
                    "oBidSz": 99,
                    "oBidMask": 21892823,
                    "oAsk": 9.34,
                    "oAskSz": 48,
                    "oAskMask": 17302231
                }
            ]
        }
    }
```

### NoticeResponse

#### NoticeResponse Message Schema

The `NoticeResponse` message is crucial for participants responding to auction notices. Below is the detailed schema outlining all fields associated with this message type, including data types, enum sets (where applicable), and descriptions for each field.

- **Message Type**: `NoticeResponse`
- **Message Number**: 2470
- **MLink Token**: SRConnect


| Field Name    | Data Type | Enum Set                                                  | Description                                                                                                          | In Repeater |
|---------------|-----------|-----------------------------------------------------------|----------------------------------------------------------------------------------------------------------------------|-------------|
| noticeNumber  | Long      |                                                           | Primary Key - (required) AuctionNotice.noticeNumber                                                                                |             |
| accnt         | String    |                                                           | Primary Key - (required) SR Accnt                                                                                                  |             |
| clientFirm    | String    |                                                           | Primary Key - (optional) SR ClientFirm                                                                                             |             |
| ticker        | tickerKey    |                                                                    | underlier ticker                                                                                                                              |               |
| tradeDate        | DateKey    |                                                                    | Date of Trade                                                                                                                             |               |
| responseId    | String    |                                                           | (required) client ResponseId of this response; reflected back on NoticeExecReport messages                           |             |
| stageType     | Enum      | None, ModifyAny, ModifyAlgo                                | (optional) (default is None/Live) can only be supplied on the initial notice response in a cancel/replace chain     |             |
| respSide      | Enum      | None, Buy, Sell                                           |                                                                                                                      |             |
| respSize      | Int       |                                                           |                                                                                                                      |             |
| respPrice     | Double    |                                                           |                                                                                                                      |             |
| refUPrc       | Double    |                                                           |                                                                                                                      |             |
| refDe         | Float     |                                                           |                                                                                                                      |             |
| refGa         | Float     |                                                           |                                                                                                                      |             |
| minUBid       | Float     |                                                           |                                                                                                                      |             |
| maxUAsk       | Float     |                                                           |                                                                                                                      |             |
| riskGroupId   | Long      |                                                           | (optional) any auction response is associated with this riskGroupID (and SpdrRiskGroupControl)                       |             |
| strategy      | String    |                                                           | (optional) user strategy field (visible on SR tools)                                                                  |             |
| userData1     | Text1     |                                                           | (optional) user data field (free text) (reflected on NoticeResponse)                                                  |             |
| timestamp     | DateTime  |                                                           |                                                                                                                      |             |
| OrderLegs     | Repeater  |                                                           | Indicates the start of `OrderLegs` repeater fields                                                                    |             |
| secKey        | OptionKey |                                                           | (In `OrderLegs`) Security key for the leg                                                                            | OrderLegs   |
| secType       | Enum      | None, Stock, Future, Option, MLeg                         | (In `OrderLegs`) Security type of the leg                                                                            | OrderLegs   |
| side          | Enum      | None, Buy, Sell                                           | (In `OrderLegs`) Side of the leg                                                                                     | OrderLegs   |
| positionType  | Enum      | None, Auto, Open, Close, Long, Short, SellShort, Exempt, Cover | (In `OrderLegs`) Specifies the position type of the order leg                                                        | OrderLegs   |

The `NoticeResponse` JSON Body sent back to an MLink Server should repsect the following structure (Sample):

```json
{
    "header": {
        "mTyp": "NoticeResponse"
    },
    "message": {
        "pkey": {
            "noticeNumber": "AuctionNotice.NoticeNumber",
            "accnt": "SR Accnt",
            "clientFirm": "SR ClientFirm"
        },
        "ticker": "AAPL-NMS-EQT",
        "tradeDate": "2024-04-09",
        "responseId": "Response123456789",
        "stageType": "None, ModifyAny, ModifyAlgo ",
        "respSide": "Sell",
        "respSize": 3,
        "respPrice": -0.0047,
        "refUPrc": 170,
        "refDe": 20.9031,
        "refGa": 0.6098,
        "minUBid": 169.2,
        "maxUAsk": 169.7,
        "riskGroupId": 9876543210,
        "timestamp": "2024-04-09 14:42:30.374222",
        "OrderLegs": [
            {
                "secKey": {
                    "at": "EQT",
                    "ts": "NMS",
                    "tk": "AAPL",
                    "dt": "2024-04-12",
                    "xx": 160,
                    "cp": "Put"
                },
                "secType": "Option",
                "side": "Buy",
                "positionType" : "Auto"
            },
            {
                "secKey": {
                    "at": "EQT",
                    "ts": "NMS",
                    "tk": "AAPL",
                    "dt": "2024-04-12",
                    "xx": 175,
                    "cp": "Put"
                },
                "secType": "Option",
                "side": "Sell",
                "positionType": "Auto"
            },
            {
                "secKey": {
                    "at": "EQT",
                    "ts": "NMS",
                    "tk": "AAPL",
                    "dt": "2024-04-26",
                    "xx": 155,
                    "cp": "Put"
                },
                "secType": "Option",
                "side": "Sell",
                "positionType": "Auto"
            },
            {
                "secKey": {
                    "at": "EQT",
                    "ts": "NMS",
                    "tk": "AAPL",
                    "dt": "2024-04-26",
                    "xx": 175,
                    "cp": "Put"
                },
                "secType": "Option",
                "side": "Buy",
                "positionType": "Auto"
            }
        ]
    }
}
```
### NoticeExecReport

#### NoticeExecReport Message Schema

The `NoticeExecReport` message type is integral for reporting the execution results of `NoticeResponse` within the SpiderRock trading system. Below is the detailed schema outlining all fields associated with this message type, including data types, enum sets (where applicable), and descriptions for each field.

- **Message Type**: `NoticeExecReport`
- **Message Number**: 2475
- **MLink Token**: `SRConnect`


| Field Name        | Data Type | Enum Set                                                           | Description                                                                                                                                | In Repeater   |
|-------------------|-----------|--------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------|---------------|
| noticeNumber      | Long      |                                                                    | pkey AuctionNotice.noticeNumber                                                                                                                 |               |
| accnt             | String    |                                                                    | pkey SR Accnt                                                                                                                                   |               |
| clientFirm        | String    |                                                                    | pkey SR ClientFirm                                                                                                                              |               |
| ticker        | tickerKey    |                                                                    | underlier ticker                                                                                                                              |               |
| tradeDate        | DateKey    |                                                                    | Date of Trade                                                                                                                             |               |
| responseId        | String    |                                                                    | from NoticeResponse.responseId (most recently processed response to noticeNumber for this accnt/clientFirm pair)                           |               |
| stageType         | Enum      | None, ModifyAny, ModifyAlgo                                        |                                                                                                                                            |               |
| respDttm         | DateTime      | response arrival dttm                                        |                                                                                                                                            |               |
| respSide          | Enum      | None, Buy, Sell                                                    |                                                                                                                                            |               |
| respSize          | Int       |                                                                    |                                                                                                                                            |               |
| respActiveSize    | Int       |                                                                    | active response order size (zero for ActiveHold)                                                                                          |               |
| respPrice         | Double    |                                                                    |                                                                                                                                            |               |
| refUPrc           | Double    |                                                                    |                                                                                                                                            |               |
| refDe             | Float     |                                                                    |                                                                                                                                            |               |
| refGa             | Float     |                                                                    |                                                                                                                                            |               |
| riskGroupId       | Long      |                                                                    | any auction response is associated with this riskGroupID (and SpdrRiskGroupControl)                                                        |               |
| roundRule       | enum      |      Exact (100%) or Fuzzy (90%) [default is Exact] (block auctions only)                                                              |                                                         |               |
| stepUpIncr       | double      |                                                                    | additional price increment (best price) (typically only used if auction is competitive)                                                        |               |
| strategy          | String    |                                                                    | user strategy field (visible on SR tools)                                                                                                  |               |
| userData1         | Text1     |                                                                    | user data field (free text) (from NoticeResponse)                                                                                          |               |
| respStatus        | Enum      | PendNew, New, PendClose, Closed, Rejected, SendReject               |                                                                                                                                            |               |
| respDetail        | Text1     |                                                                    |                                                                                                                                            |               |
| cumFillQty     | Int       |                                                                    |   pkg cumFillQty if MLeg                                                                                                                                         |               |
| avgFillPrice   | Double    |                                                                    |   pkg avgFillPrice if MLeg                                                                                                                                         |               |
| timestamp         | DateTime  |                                                                    |                                                                                                                                            |               |
| OrderLegs         | Repeater  |                                                                    | Details about the individual legs of the order.                                                                                            |               |
| secKey            | OptionKey |                                                                    | Security key for each leg.                                                                                                                 | OrderLegs      |
| secType           | Enum      | None, Stock, Future, Option, MLeg                                  | Type of security for each leg.                                                                                                             | OrderLegs      |
| side              | Enum      | None, Buy, Sell                                                    | Side of each leg.                                                                                                                          | OrderLegs      |
| ratio             | Int       |                                                                    | Ratio of each leg in the order.                                                                                                            | OrderLegs      |
| positionType      | Enum      | None, Auto, Open, Close, Long, Short, SellShort, Exempt, Cover     | Position type for each leg.                                                                                                                | OrderLegs      |
| legCumFillQty     | Int       |                                                                    | Cumulative fill quantity for each leg.                                                                                                     | OrderLegs      |
| legAvgFillPrice   | Double    |                                                                    | Average fill price for each leg.                                                                                                           | OrderLegs      |
| responseResult          | enum       |  NoticeResult:None=0,FullSize=1,AllocSize=2,PriceMiss=3,TooLate=4,OtherMiss=5,DidNotTrade=6,Pending=7                                                                  |                                                                                                                                            |               |
| responseTime    | short       |                                                                    | notice response arrival time (milliseconds since auction start)                                                                                          |               |
| prtPrice         | Double    |                                                                    | reported OPRA print price (pkgPrice if MLeg)                                                                                                                                           |               |
| prtSize           | Int    |                                                                    | reported OPRA print size (pgkSize if MLeg)                                                                                                                                           |               |
| prtTime             | DateTime     |                                                                    | reported OPRA print time (1st print if MLeg)                                                                                                                                           |               |
| prtUBid             | Float     |                                                                    | best estimate of uBid @ auction print time                                                                                                                                           |               |
| prtUAsk       | FLoat      |                                                                    | best estimate of uAsk @ auction print time                                                        |               |

The `NoticeExecReport` JSON Body received from an MLink Server will be structured in the following way (Sample):

```json
{
    "header": {
        "mTyp": "NoticeExecReport"
    },
    "message": {    
    "pkey":{    
        "noticeNumber": "AuctionNotice.NoticeNumber",
        "accnt": "SampleAccount",
        "clientFirm": "SampleFirm"
        },
        "ticker": "tickerKey",
        "tradeDate": "DateKey",
        "responseId": "Response987654321",
        "stageType": "ModifyAny",
        "respDttm": "DateTime",
        "respSide": "Buy",
        "respSize": 100,
        "respActiveSize": 90,
        "respPrice": 10.50,
        "refUPrc": 150.00,
        "refDe": 0.50,
        "refGa": 0.10,
        "roundRule": "Exact",
        "stepUpIncr": 12,
        "riskGroupId": 123123123,
        "strategy": "SampleStrategy",
        "userData1": "Additional info",
        "respStatus": "New",
        "respDetail": "Detailing text",
        "cumFillQty": 50,
        "avgFillPrice": 10.75,
        "timestamp": "2024-04-10T10:00:00Z",
        "OrderLegs": [
            {
                "secKey": {
                    "at": "EQT",
                    "ts": "NMS",
                    "tk": "AAPL",
                    "dt": "2024-04-17",
                    "xx": 150,
                    "cp": "Call"
                },
                "secType": "Option",
                "side": "Buy",
                "ratio": 1,
                "positionType": "Open",
                "legCumFillQty": 25,
                "legAvgFillPrice": 10.50
            },
            {
                "secKey": {
                    "at": "EQT",
                    "ts": "NMS",
                    "tk": "AAPL",
                    "dt": "2024-04-24",
                    "xx": 155,
                    "cp": "Call"
                },
                "secType": "Option",
                "side": "Sell",
                "ratio": 1,
                "positionType": "Close",
                "legCumFillQty": 25,
                "legAvgFillPrice": 10.75
            }
        ],
        "responseResult": "FullSize",
        "responseTime": 60,
        "prtPrice": 100,
        "prtSize": 150,
        "prtTime": "2024-04-10T10:00:00Z",
        "prtUBid": 175.67,
        "prtUAsk": 176.81
    }
}
```

### NoticeCancel

#### NoticeCancel Message Schema

The `NoticeCancel` message type is utilized for canceling previously issued `NoticeResponse` messages auction notices within the SpiderRock system. Below is the detailed schema outlining all fields associated with this message type, including data types, enum sets (where applicable), and descriptions for each field.

- **Message Type**: `NoticeCancel`
- **Message Number**: 2480
- **MLink Token**: `SRConnect`


| Field Name    | Data Type | Description                                                    |
|---------------|-----------|----------------------------------------------------------------|
| noticeNumber  | Long      | pkey (Required) Corresponds to the `AuctionNotice.noticeNumber`.    |
| accnt         | String    | pkey (Required) Identifies the SpiderRock account.                  |
| clientFirm    | String    | pkey (Optional) Specifies the client firm.                         |
| ticker     | tickerKey  | (filled in on server) underlier ticker |
| tradeDate     | DateKey  | (filled in on server) |
| timestamp     | DateTime  | Timestamp marking when the cancellation request was initiated. |

The `NoticeCancel` JSON Body sent back to an MLink Server should repsect the following structure (Sample):

```json
{
    "header": {
        "mTyp": "NoticeCancel"
    },
    "message": {
    "pkey":{
        "noticeNumber": "AuctionNotice.NoticeNumber",
        "accnt": "SampleAccount",
        "clientFirm": "SampleFirm"
    },
        "ticker": "tickerKey",
        "tradeDate": "DateKey",
        "timestamp": "2024-04-10T10:00:00Z"
    }
}
```

### Auction Print

#### AuctionPrint Message Schema

The `AuctionPrint` message details auction transaction prints. It encompasses a wide range of fields related to auction specifics, trading volumes, and pricing information. Below is a structured schema of the `AuctionPrint` message fields, including data types, enum sets where applicable, and detailed descriptions.

- **Message Type**: `AuctionPrint`
- **Message Number**: 2485
- **MLink Token**: `SRConnect`


| Field Name             | Data Type   | Enum Set                                                        | Description                                                                                                         | In Repeater |
|------------------------|-------------|-----------------------------------------------------------------|---------------------------------------------------------------------------------------------------------------------|-------------|
| noticeNumber           | NoticeNumber|                                                                 | primary key AuctionNotice.noticeNumber                                                                                          |             |
| ticker                 | TickerKey   |                                                                 | Underlier ticker                                                                                                    |             |
| tradeDate              | DateKey     |                                                                 | Date of Trade                                                                                                       |             |
| noticeTime             | DateTime    |                                                                 | Notice create timestamp (high precision)                                                                            |             |
| auctionType            | Enum        | Block, Flash, Improvement, Facilitation, etc.                    | Type of auction being initiated                                                                                     |             |
| auctionSource          | Enum        | SRC, MIAX, etc.                                                 | Source of the auction notice                                                                                        |             |
| numOptLegs             | Byte        |                                                                 | Number of option legs (MLEG Only)                                                                                   |             |
| spreadClass            | Enum        | ToolSpreadClass                                                 |                                                                                                                     |             |
| spreadFlavor           | Enum        | SpreadFlavor                                                    | Type of spread (MLEG Only)                                                                                          |             |
| containsHedge          | Enum        | Yes, No                                                         | Whether the auction contains hedges (MLEG Only)                                                                     |             |
| containsFlex           | Enum        | Yes, No                                                         | Contains FLEX options                                                                                               |             |
| containsMultiHedge     | Enum        | Yes, No                                                         | Contains MultiHedge options                                                                                         |             |
| industry               | Text1       |                                                                 | Industry description                                                                                                |             |
| symbolType             | Enum        | SymbolType                                                      | Type of symbol                                                                                                      |             |
| uAvgDailyVlm           | Float       |                                                                 | Underlier average daily trading volume                                                                              |             |
| custSide               | Enum        | Buy, Sell                                                       | Customer side from AuctionNotice                                                                                    |             |
| custQty                | Int         |                                                                 | Customer quantity from AuctionNotice                                                                                |             |
| custPrc                | Double      |                                                                 | Customer price from AuctionNotice                                                                                   |             |
| hasCustPrc             | Enum        | Yes, No                                                         | Indicates if customer price is available from AuctionNotice                                                         |             |
| custFirmType           | Enum        | FirmType                                                        | Customer firm type if disclosed                                                                                     |             |
| custAgentMPID          | String      |                                                                 | Customer agent exchange member initiating the auction (if disclosed)                                                |             |
| custClientFirm         | SRClientFirmRef |                                                               | Customer client firm (if disclosed)                                                                                 |             |
| prtPrice               | Double      |                                                                 | Reported OPRA print price (package price if MLeg)                                                                   |             |
| prtPrice2              | Double      |                                                                 | Price of second reported OPRA print (if applicable)                                                                 |             |
| prtSize                | Int         |                                                                 | Reported OPRA print size (package size if MLeg)                                                                     |             |
| prtSize2               | Int         |                                                                 | Size of second reported OPRA print (if applicable)                                                                  |             |
| prtTime                | DateTime    |                                                                 | Reported OPRA print time (first print if MLeg)                                                                      |             |
| prtType                | Enum        | PrtType                                                         | Reported OPRA print type                                                                                            |             |
| prtUBid                | Double      |                                                                 | Best estimate of underlier bid at auction print time                                                                |             |
| prtUAsk                | Double      |                                                                 | Best estimate of underlier ask at auction print time                                                                |             |
| prtUPrc                | Double      |                                                                 | Best estimate of underlier price at auction print time                                                              |             |
| prtSurfVol             | Float       |                                                                 | Surface volatility at auction print time (single option only)                                                       |             |
| prtSurfPrc             | Float       |                                                                 | Surface price at auction print time (at underlier midpoint, package surface price if MLeg)                          |             |
| bidPrc                 | Float       |                                                                 | Option NBBO bid at auction print time                                                                               |             |
| bidSz                  | Int         |                                                                 | NBBO bid cumulative size                                                                                            |             |
| bidMask                | UInt        |                                                                 | NBBO bid exchange mask                                                                                              |             |
| askPrc                 | Float       |                                                                 | Option NBBO ask at auction print time                                                                               |             |
| askSz                  | Int         |                                                                 | NBBO ask cumulative size                                                                                            |             |
| askMask                | UInt        |                                                                 | NBBO ask exchange mask                                                                                              |             |
| exchBidPrc             | Float       |                                                                 | Exchange bid at auction print time                                                                                  |             |
| exchBidSz              | Int         |                                                                 | Exchange bid size                                                                                                   |             |
| exchAskPrc             | Float       |                                                                 | Exchange ask at auction print time                                                                                  |             |
| exchAskSz              | Int         |                                                                 | Exchange ask size                                                                                                   |             |
| netDe                  | Float       |                                                                 | Net delta                                                                                                           |             |
| netGa                  | Float       |                                                                 | Net gamma                                                                                                           |             |
| netTh                  | Float       |                                                                 | Net theta                                                                                                           |             |
| netVe                  | Float       |                                                                 | Net vega                                                                                                            |             |
| uPrc1m                 | Float       |                                                                 | Underlier price (mid market) at auction print time + 1 minute                                                       |             |
| bidPrc1m               | Float       |                                                                 | NBBO bid at auction print time + 1 minute                                                                           |             |
| askPrc1m               | Float       |                                                                 | NBBO ask at auction print time + 1 minute                                                                           |             |
| surfVol1m              | Float       |                                                                 | Surface volatility at auction print time + 1 minute (single option only)                                            |             |
| surfPrc1m              | Float       |                                                                 | Surface price at auction print time + 1 minute (at underlier midpoint)                                               |             |
| uPrc10m                | Float       |                                                                 | Underlier price (mid market) at auction print time + 10 minutes                                                     |             |
| bidPrc10m              | Float       |                                                                 | NBBO bid at auction print time + 10 minutes                                                                         |             |
| askPrc10m              | Float       |                                                                 | NBBO ask at auction print time + 10 minutes                                                                         |             |
| surfVol10m             | Float       |                                                                 | Surface volatility at auction print time + 10 minutes (single option only)                                          |             |
| surfPrc10m             | Float       |                                                                 | Surface price at auction print time + 10 minutes (at underlier midpoint)                                            |             |
| timestamp              | Timestamp   |                                                                 |                                                                                                                     |             |



### AuctionNotice RevCon

#### AuctionNotice RevCon Message Schema

The `AuctionNoticeRevCon` message is a stream of Auction Notices (RevCon) available. Below is the detailed schema outlining all fields associated with this message type, including data types, enum sets (where applicable), and descriptions for each field.

- **Message Type**: `AuctionNoticeRevCon`
- **Message Number**: 2466
- **MLink Token**: `SRConnect`


| Field Name           | Data Type    | Enum Set                                  | Description                                                                                          | In Repeater          |
|----------------------|--------------|-------------------------------------------|------------------------------------------------------------------------------------------------------|----------------------|
| noticeNumber         | NoticeNumber |                                           | Primary key                                                                                          |                      |
| ticker               | TickerKey    |                                           | Underlier ticker                                                                                     |                      |
| tradeDate            | DateKey      |                                           |                                                                                                      |                      |
| expiry               | DateKey      |                                           |                                                                                                      |                      |
| isFlex               | Enum         | Yes, No                                   | Flex = European                                                                                      |                      |
| strike               | Double       |                                           | Rev/con strike                                                                                       |                      |
| auctionType          | Enum         | AuctionType                               |                                                                                                      |                      |
| auctionEvent         | Enum         | AuctionEvent                              |                                                                                                      |                      |
| auctionSource        | Enum         | SRC, MIAX, etc.                           | Source of the auction notice                                                                         |                      |
| isTestAuction        | Enum         | Yes, No                                   | If yes, auction is a test auction (not a prod/live auction)                                          |                      |
| shortCode            | String       |                                           | 8 letter auction short code (unique per day) (block auctions only) (can be used to find auctions)   |                      |
| industry             | Text1        |                                           | Industry string                                                                                      |                      |
| symbolType           | Enum         | SymbolType                                |                                                                                                      |                      |
| uAvgDailyVlm         | Float        |                                           | Underlier average daily trading volume                                                               |                      |
| custSide             | Enum         | Buy, Sell                                 | If available                                                                                         |                      |
| custQty              | Int          |                                           |                                                                                                      |                      |
| custPrc              | Double       |                                           | Public cust price                                                                                    |                      |
| hasCustPrc           | Enum         | Yes, No                                   |                                                                                                      |                      |
| custFirmType         | Enum         | FirmType                                  | Cust firm type (if disclosed)                                                                        |                      |
| custAgentMPID        | String       |                                           | Cust agent exchange member initiating the auction (if disclosed)                                     |                      |
| custClientFirm       | SRClientFirmRef |                                         | Cust client firm (if disclosed)                                                                      |                      |
| commEnhancement      | Float        |                                           | Additional commission (if any) paid by responder                                                     |                      |
| custCommPaying       | Enum         | Yes, No                                   | Client is commission paying (to the responder)                                                       |                      |
| custQtyCond          | Enum         | UpToQty, AllOrNone, QtyOrMore             |                                                                                                      |                      |
| auctionDuration      | Int          |                                           | [Expected] auction duration (in milliseconds)                                                        |                      |
| uBid                 | Double       |                                           | Live stock price                                                                                     |                      |
| uAsk                 | Double       |                                           |                                                                                                      |                      |
| iDays                | Double       |                                           | iDays = effective interest days [SR supplied]                                                        |                      |
| iYears               | Double       |                                           | iYears = iDays / 360.0                                                                               |                      |
| moneyRate            | Double       |                                           | Effective rate to borrow/lend money to expiry (360 day convention) [compares to globalRate]          |                      |
| ddivPv               | Double       |                                           | Present value of any expected dividends to expiry [SR Supplied Estimate]                             |                      |
| hasEstDDivs          | Enum         | Yes, No                                   | Yes if one or more expected ddiv is an estimate (not yet announced) [SR Supplied]                    |                      |
| sVol                 | Double       |                                           | Surface volatility for rev/con strike [SR Supplied Estimate]                                         |                      |
| rcEExPrem            | Double       |                                           | rcEExPrem = [American price - European price] [same model parameters; SR supplied]                   |                      |
| strikePv             | Double       |                                           | strikePv = strike * (1.0 - moneyRate * iYears) [moneyRate supplied above]                             |                      |
| effStockLendPv       | Double       |                                           | effStockLendPv = custPrice - strikePv - ddivPv - rcEExPrem  [if cust price is visible]                |                      |
| effStockRate         | Double       |                                           | effStockRate = effStockLendPv / (uMid * iYears) [if cust price is visible]                            |                      |
| includeSRNetwork     | Enum         | Include, Exclude, Disclose                |                                                                                                      |                      |
| DirectedCounterParty | Repeater     |                                           | Indicates the start of `DirectedCounterParty` repeater fields                                        |                      |
| clientFirm           | SRClientFirm |                                           | (In `DirectedCounterParty`) Name of the client firm                                                  | DirectedCounterParty |
| inclExcl             | Enum         | Include, Exclude, Disclose                | (In `DirectedCounterParty`) Include or exclude specific counter parties                               | DirectedCounterParty |
| isCommPaying         | Enum         | Yes, No                                   | (In `DirectedCounterParty`) If the client is paying commission                                        | DirectedCounterParty |


### AuctionNotice BoxSprd

#### AuctionNotice BoxSprd Message Schema

The `AuctionNoticeBoxSprd` message is a stream of Auction Notices (BoxSprd) available. Below is the detailed schema outlining all fields associated with this message type, including data types, enum sets (where applicable), and descriptions for each field.

- **Message Type**: `AuctionNoticeBoxSprd`
- **Message Number**: 2468
- **MLink Token**: `SRConnect`


| Field Name           | Data Type    | Enum Set                                | Description                                                                                   | In Repeater          |
|----------------------|--------------|-----------------------------------------|-----------------------------------------------------------------------------------------------|----------------------|
| noticeNumber         | NoticeNumber |                                         | Primary key                                                                                   |                      |
| ticker               | TickerKey    |                                         | Underlier ticker                                                                              |                      |
| tradeDate            | DateKey      |                                         |                                                                                               |                      |
| expiry               | DateKey      |                                         |                                                                                               |                      |
| loStrike             | Double       |                                         | Low strike                                                                                    |                      |
| hiStrike             | Double       |                                         | High strike                                                                                   |                      |
| auctionType          | Enum         | AuctionType                             |                                                                                               |                      |
| auctionEvent         | Enum         | AuctionEvent                            |                                                                                               |                      |
| auctionSource        | Enum         | SRC, MIAX, etc.                         | Source of the auction notice                                                                  |                      |
| isTestAuction        | Enum         | Yes, No                                 | If yes, auction is a test auction (not a prod/live auction)                                   |                      |
| shortCode            | String       |                                         | 8 letter auction short code (unique per day) (block auctions only)                            |                      |
| custSide             | Enum         | Buy, Sell                               | If available                                                                                  |                      |
| custQty              | Int          |                                         |                                                                                               |                      |
| custPrc              | Double       |                                         | Public cust price                                                                             |                      |
| hasCustPrc           | Enum         | Yes, No                                 |                                                                                               |                      |
| custFirmType         | Enum         | FirmType                                | Cust firm type (if disclosed)                                                                 |                      |
| custAgentMPID        | String       |                                         | Cust agent exchange member initiating the auction (if disclosed)                              |                      |
| custClientFirm       | SRClientFirmRef |                                       | Cust client firm (if disclosed)                                                               |                      |
| commEnhancement      | Float        |                                         | Additional commission (if any) paid by responder                                              |                      |
| custCommPaying       | Enum         | Yes, No                                 | Client is commission paying (to the responder)                                                |                      |
| custQtyCond          | Enum         | UpToQty, AllOrNone, QtyOrMore           |                                                                                               |                      |
| auctionDuration      | Int          |                                         | [Expected] auction duration (in milliseconds)                                                 |                      |
| iDays                | Double       |                                         | iDays = effective interest days [SR supplied]                                                 |                      |
| iYears               | Double       |                                         | iYears = iDays / 360.0                                                                        |                      |
| strikePv             | Double       |                                         | strikePv = strike * (1.0 - moneyRate * iYears) [moneyRate supplied above]                     |                      |
| effMoneyRate         | Double       |                                         | effMoneyRate = (1.0 - (custPrc / (hiStrike - loStrike)) / iYears                              |                      |
| includeSRNetwork     | Enum         | Include, Exclude, Disclose              |                                                                                               |                      |
| DirectedCounterParty | Repeater     |                                         | Indicates the start of `DirectedCounterParty` repeater fields                                 |                      |
| clientFirm           | SRClientFirm |                                         | (In `DirectedCounterParty`) Name of the client firm                                           | DirectedCounterParty |
| inclExcl             | Enum         | Include, Exclude, Disclose              | (In `DirectedCounterParty`) Include or exclude specific counter parties                       | DirectedCounterParty |
| isCommPaying         | Enum         | Yes, No                                 | (In `DirectedCounterParty`) If the client is paying commission                                | DirectedCounterParty |


### AuctionNotice Synthetic

#### AuctionNotice Synthetic Message Schema

The `AuctionNoticeSynthetic` message is a stream of Auction Notices (Synthetic) available. Below is the detailed schema outlining all fields associated with this message type, including data types, enum sets (where applicable), and descriptions for each field.

- **Message Type**: `AuctionNoticeSynthetic`
- **Message Number**: 2467
- **MLink Token**: `SRConnect`


| Field Name           | Data Type    | Enum Set                                | Description                                                                                           | In Repeater          |
|----------------------|--------------|-----------------------------------------|-------------------------------------------------------------------------------------------------------|----------------------|
| noticeNumber         | NoticeNumber |                                         | Primary key                                                                                           |                      |
| ticker               | TickerKey    |                                         | Underlier ticker                                                                                      |                      |
| tradeDate            | DateKey      |                                         |                                                                                                       |                      |
| expiry               | DateKey      |                                         |                                                                                                       |                      |
| isFlex               | Enum         | Yes, No                                 | Flex = European                                                                                       |                      |
| strike               | Double       |                                         | Strike                                                                                                |                      |
| auctionType          | Enum         | AuctionType                             |                                                                                                       |                      |
| auctionEvent         | Enum         | AuctionEvent                            |                                                                                                       |                      |
| auctionSource        | Enum         | SRC, MIAX, etc.                         | Source of the auction notice                                                                          |                      |
| isTestAuction        | Enum         | Yes, No                                 | If yes, auction is a test auction (not a prod/live auction)                                           |                      |
| shortCode            | String       |                                         | 8 letter auction short code (unique per day) (block auctions only)                                    |                      |
| industry             | Text1        |                                         | Industry string                                                                                       |                      |
| symbolType           | Enum         | SymbolType                              |                                                                                                       |                      |
| uAvgDailyVlm         | Float        |                                         | Underlier average daily trading volume                                                                |                      |
| custSide             | Enum         | Buy, Sell                               | If available                                                                                          |                      |
| custQty              | Int          |                                         |                                                                                                       |                      |
| custPrc              | Double       |                                         | Public cust price                                                                                     |                      |
| hasCustPrc           | Enum         | Yes, No                                 |                                                                                                       |                      |
| custFirmType         | Enum         | FirmType                                | Cust firm type (if disclosed)                                                                         |                      |
| custAgentMPID        | String       |                                         | Cust agent exchange member initiating the auction (if disclosed)                                      |                      |
| custClientFirm       | SRClientFirmRef |                                       | Cust client firm (if disclosed)                                                                       |                      |
| commEnhancement      | Float        |                                         | Additional commission (if any) paid by responder                                                      |                      |
| custCommPaying       | Enum         | Yes, No                                 | Client is commission paying (to the responder)                                                        |                      |
| custQtyCond          | Enum         | UpToQty, AllOrNone, QtyOrMore           |                                                                                                       |                      |
| auctionDuration      | Int          |                                         | [Expected] auction duration (in milliseconds)                                                         |                      |
| uBid                 | Double       |                                         | Live stock price                                                                                      |                      |
| uAsk                 | Double       |                                         |                                                                                                       |                      |
| iDays                | Double       |                                         | iDays = effective interest days [SR supplied]                                                         |                      |
| iYears               | Double       |                                         | iYears = iDays / 360.0                                                                                |                      |
| moneyRate            | Double       |                                         | Effective rate to borrow/lend money to expiry (360 day convention) [compares to globalRate * 360 / 365] |                      |
| ddivPv               | Double       |                                         | Present value of any expected dividends to expiry [SR Supplied Estimate]                              |                      |
| sVol                 | Double       |                                         | Surface volatility for rev/con strike [SR Supplied Estimate]                                          |                      |
| rcEExPrem            | Double       |                                         | rcEExPrem = [American price - European price] [same model parameters; SR supplied]                    |                      |
| strikePv             | Double       |                                         | StrikePv = strike * (1.0 - moneyRate * iYears) [moneyRate supplied above]                             |                      |
| effStockLendPv       | Double       |                                         | EffStockLendPv = custPrice - strikePv - ddivPv - rcEExPrem  [if cust price is visible]                |                      |
| effStockRate         | Double       |                                         | EffStockRate = effStockLendPv / (uPrc * iYears) [if cust price is visible]                            |                      |
| includeSRNetwork     | Enum         | Include, Exclude, Disclose              |                                                                                                       |                      |
| DirectedCounterParty | Repeater     |                                         | Indicates the start of `DirectedCounterParty` repeater fields                                         |                      |
| clientFirm           | SRClientFirm |                                         | (In `DirectedCounterParty`) Name of the client firm                                                   | DirectedCounterParty |
| inclExcl             | Enum         | Include, Exclude, Disclose              | (In `DirectedCounterParty`) Include or exclude specific counter parties                               | DirectedCounterParty |
| isCommPaying         | Enum         | Yes, No                                 | (In `DirectedCounterParty`) If the client is paying commission                                        | DirectedCounterParty |
