# SRConnect via MLink

This document provides an overview of the SRConnect system developed for responding to Auctions via SpiderRock's MLink API. Our system leverages specific message types to enable auction responders to interact with the auction process.

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
  - `AuctionNotice`: Alerts clients of relevant auctions based on established filters.
  - `NoticeResponse`: Message used to participate/respond to Auction Notices.
  - `NoticeExecReport`: Sends confirmation/reporting of the action taken on `NoticeResponse`.
  - `NoticeCancel`: Processes clients' requests to cancel their responses to auctions.

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
| enabled             | Enum      | None, Yes, No                                              | Indicates if the filter is enabled.                                                                               |                  |
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
| includeFlex         | Enum      | None, Yes, No                                              | Whether to include auctions with flex expiries.                                                                   |                  |
| includeCommPaying   | Enum      | None, Yes, No                                              | Whether to include auctions where commission is being paid.                                                       |                  |
| direction           | Enum      | None, Buy, Sell                                            | Direction of interest in the auction (Buy = Buy Regular or Sell Flipped).                                         |                  |
| vegaDirection       | Enum      | None, Buy, Sell                                            | Vega direction of interest in the auction.                                                                        |                  |
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


### AuctionNotice

#### AuctionNotice Message Schema

The `AuctionNotice` message is a stream of Auction Notices available. Below is the detailed schema outlining all fields associated with this message type, including data types, enum sets (where applicable), and descriptions for each field.

- **Message Type**: `AuctionNotice`
- **Message Number**: 2465
- **MLink Token**: SRConnect


| Field Name           | Data Type  | Enum Set                                                                                                                    | Description                                                                                          |
|----------------------|------------|------------------------------------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------------------|
| noticeNumber         | Long       |                                                                                                                              | Unique identifier for the notice.                                                                    |
| auctionType          | Enum       | None, Exposure, Improvement, Facilitation, Solicitation, Opening, Closing, RFQ, Block, Flash                                 | Type of auction being initiated.                                                                     |
| auctionEvent         | Enum       | None, Start, Update, End                                                                                                     | Current event state of the auction.                                                                  |
| auctionCode          | String     |                                                                                                                              | Short auction code (only for block auctions).                                                        |
| auctionSource        | Enum       | None, SRC, AMEX, BOX, CBOE, ISE, NYSE, PHLX, NSDQ, BATS, C2, NQBX, MIAX, GMNI, EDGO, MCRY, MPRL, EMLD, MEMX, CME, CBOT, etc. | Source of the auction notice (e.g., SRC, MIAX, etc.).                                                |
| isTestAuction        | Enum       | None, Yes, No                                                                                                                | Indicates if the auction is a test (not live).                                                       |
| shortCode            | String     |                                                                                                                              | 8-letter auction short code, unique per day (block auctions only). Can be used to find auctions.    |
| tradeDate            | DateKey    |                                                                                                                              | The date of the auction.                                                                             |
| ticker               | TickerKey  |                                                                                                                              | The underlier ticker for the auction.                                                                |
| industry             | Text1      |                                                                                                                              | Industry string.                                                                                     |
| symbolType           | Enum       | None, Equity, ADR, ETF, etc.                                                                                                 | Type of the symbol involved in the auction.                                                          |
| uAvgDailyVlm         | Float      |                                                                                                                              | Underlier's average daily trading volume.                                                            |
| custSide             | Enum       | None, Buy, Sell                                                                                                              | Indicates the customer's side in the transaction.                                                    |
| custQty              | Int        |                                                                                                                              |                                                                                                      |
| custPrc              | Double     |                                                                                                                              | Public customer price.                                                                               |
| hasCustPrc           | Enum       | None, Yes, No                                                                                                                |                                                                                                      |
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
| netTimestamp         | Long       |                                                                                                                              |                                                                                                      |
| netVega              | Float      |                                                                                                                              |                                                                                                      |
| netDelta             | Float      |                                                                                                                              |                                                                                                      |
| netGamma             | Float      |                                                                                                                              |                                                                                                      |
| pkgSurfPrc           | Float      |                                                                                                                              | SR Surface Price (entire package).                                                                   |
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
| oBid                 | Float      |                                                                                                                              | (In `OrderLegs`) NBBO bid price.                                                               |
| oBidSz               | Int        |                                                                                                                              | (In `OrderLegs`) Cumulative NBBO bid size.                                                     |
| oBidMask             | UInt       |                                                                                                                              | (In `OrderLegs`) Bit-mask of participating NBBO exchanges.                                     |
| oAsk                 | Float      |                                                                                                                              | (In `OrderLegs`) NBBO ask price.                                                               | 
| oAskSz               | Int        |                                                                                                                              | (In `OrderLegs`) Cumulative NBBO ask size.                                                     |
| oAskMask             | UInt       |                                                                                                                              | (In `OrderLegs`) Bit-mask of participating NBBO exchanges.                                     |


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


### NoticeExecReport

#### NoticeExecReport Message Schema

The `NoticeExecReport` message type is integral for reporting the execution results of `NoticeResponse` within the SpiderRock trading system. Below is the detailed schema outlining all fields associated with this message type, including data types, enum sets (where applicable), and descriptions for each field.

- **Message Type**: `NoticeExecReport`
- **Message Number**: 2475
- **MLink Token**: `SRConnect`


| Field Name        | Data Type | Enum Set                                                           | Description                                                                                                                                | In Repeater   |
|-------------------|-----------|--------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------|---------------|
| noticeNumber      | Long      |                                                                    | AuctionNotice.noticeNumber                                                                                                                 |               |
| accnt             | String    |                                                                    | SR Accnt                                                                                                                                   |               |
| clientFirm        | String    |                                                                    | SR ClientFirm                                                                                                                              |               |
| responseId        | String    |                                                                    | from NoticeResponse.responseId (most recently processed response to noticeNumber for this accnt/clientFirm pair)                           |               |
| stageType         | Enum      | None, ModifyAny, ModifyAlgo                                        |                                                                                                                                            |               |
| respSide          | Enum      | None, Buy, Sell                                                    |                                                                                                                                            |               |
| respSize          | Int       |                                                                    |                                                                                                                                            |               |
| respActiveSize    | Int       |                                                                    | active response order size (zero for ActiveHold)                                                                                          |               |
| respPrice         | Double    |                                                                    |                                                                                                                                            |               |
| refUPrc           | Double    |                                                                    |                                                                                                                                            |               |
| refDe             | Float     |                                                                    |                                                                                                                                            |               |
| refGa             | Float     |                                                                    |                                                                                                                                            |               |
| riskGroupId       | Long      |                                                                    | any auction response is associated with this riskGroupID (and SpdrRiskGroupControl)                                                        |               |
| strategy          | String    |                                                                    | user strategy field (visible on SR tools)                                                                                                  |               |
| userData1         | Text1     |                                                                    | user data field (free text) (from NoticeResponse)                                                                                          |               |
| respStatus        | Enum      | PendNew, New, PendClose, Closed, Rejected, SendReject               |                                                                                                                                            |               |
| respDetail        | Text1     |                                                                    |                                                                                                                                            |               |
| pkgCumFillQty     | Int       |                                                                    |                                                                                                                                            |               |
| pkgAvgFillPrice   | Double    |                                                                    |                                                                                                                                            |               |
| timestamp         | DateTime  |                                                                    |                                                                                                                                            |               |
| OrderLegs         | Repeater  |                                                                    | Details about the individual legs of the order.                                                                                            |               |
| secKey            | OptionKey |                                                                    | Security key for each leg.                                                                                                                 | OrderLegs      |
| secType           | Enum      | None, Stock, Future, Option, MLeg                                  | Type of security for each leg.                                                                                                             | OrderLegs      |
| side              | Enum      | None, Buy, Sell                                                    | Side of each leg.                                                                                                                          | OrderLegs      |
| ratio             | Int       |                                                                    | Ratio of each leg in the order.                                                                                                            | OrderLegs      |
| positionType      | Enum      | None, Auto, Open, Close, Long, Short, SellShort, Exempt, Cover     | Position type for each leg.                                                                                                                | OrderLegs      |
| legCumFillQty     | Int       |                                                                    | Cumulative fill quantity for each leg.                                                                                                     | OrderLegs      |
| legAvgFillPrice   | Double    |                                                                    | Average fill price for each leg.                                                                                                           | OrderLegs      |



### NoticeCancel

#### NoticeCancel Message Schema

The `NoticeCancel` message type is utilized for canceling previously issued `NoticeResponse` messages auction notices within the SpiderRock system. Below is the detailed schema outlining all fields associated with this message type, including data types, enum sets (where applicable), and descriptions for each field.

- **Message Type**: `NoticeCancel`
- **Message Number**: 2480
- **MLink Token**: `SRConnect`


| Field Name    | Data Type | Description                                                    |
|---------------|-----------|----------------------------------------------------------------|
| noticeNumber  | Long      | (Required) Corresponds to the `AuctionNotice.noticeNumber`.    |
| accnt         | String    | (Required) Identifies the SpiderRock account.                  |
| clientFirm    | String    | (Optional) Specifies the client firm.                         |
| timestamp     | DateTime  | Timestamp marking when the cancellation request was initiated. |