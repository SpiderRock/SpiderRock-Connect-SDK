
# SRConnect via MLink

This document provides an overview of the SRConnect system developed for trading Auctions via SpiderRock's MLink API. Our system leverages specific message types to enable auction initiators and responders to interact with the auction process.

## System Overview

The SRConnect Auction System integrates with SpiderRock's MLink API to facilitate real-time options trading through auctions. It utilizes a set of predefined message types to manage auction notices, responses, and state updates. This system is designed to work with the FIX financial protocol and SpiderRock's Trade Tool alongside the MLink API.

### Key Features

- **Auction Initiation**: Auction initiators can send `AuctionNotice` messages to signal the start of an auction.
- **Auction Notice Publication**: Notices are consolidated into a feed called `SpdrAuctionState`, which streams all auctions in real-time.
- **Auction Responses**: Participants can respond to auctions directly using `NoticeResponse` messages.
- **Auction Filtering**: Participants can filter auctions of interest with `UserAuctionFilter` messages, enhancing the relevance of auction notifications.

### Message Types

1. **AuctionNotice**: Sent by auction initiators to announce a new auction.
2. **NoticeResponse**: Used by responders to participate in an auction.
3. **UserAuctionFilter**: Allows clients to specify filters for the auctions they wish to receive notifications for.
4. **SpdrAuctionState**: A real-time feed of ongoing auctions available for clients to stream.

## Integration with MLink API

Our Auction System utilizes the MLink API for message transmission, leveraging its support for multiple message delivery protocols, including JSON, Framed JSON, and Google Protocol Buffers. The API supports both RESTful queries and WebSocket streaming, accommodating a wide range of application requirements.

### Authentication

Access to the MLink API requires authentication via an API Key or SessionKey, ensuring secure interactions with the auction system. Detailed instructions on authentication methods are available in the MLink API documentation.

### Connection Types

Depending on your application's needs, you can choose between REST API and WebSocket API connections. The REST API is suitable for applications requiring occasional data queries, while the WebSocket API is designed for applications needing live data subscriptions.

## Auction Message Structures

Below are placeholders for the message structures used in our Auction System. Detailed specifications will be provided based on the specific requirements of each message type.

### AuctionNotice

#### AuctionNotice Message Schema

The `AuctionNotice` message is integral to initiating and managing auctions. Below is the detailed schema outlining all fields associated with this message type, including data types, enum sets (where applicable), and descriptions for each field.

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
| spreadFlavor         | Enum       | None, Normal, Flipped                                                                                                        |                                                                                                      |
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


### UserAuctionFilter

#### UserAuctionFilter Message Schema

The `UserAuctionFilter` message is vital for participants to set their preferences and filters for the auctions they are interested in. Below is the detailed schema outlining all fields associated with this message type, including data types, enum sets (where applicable), and descriptions for each field.

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
| minVega             | Float     |                                                           | Minimum vega for auctions to be included.                                                                         |                  |
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


### SpdrAuctionState

#### SpdrAuctionState Message Schema

The `SpdrAuctionState` message type is crucial for participants in the SpiderRock trading system, providing real-time updates on auction states. Below is the schema detailing each field associated with this message type, including data types, enum sets (where applicable), and descriptions.

- **Message Type**: `SpdrAuctionState`
- **Message Number**: 2525
- **MLink Token**: OptExchAuction

## Field Descriptions

| Field Name             | Data Type   | Enum Set                                                                                                                | Description                                                                                                                   | In Repeater |
|------------------------|-------------|-------------------------------------------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------------------------------------------------|-------------|
| secKey                 | OptionKey   |                                                                                                                         | Security key associated with the auction.                                                                                     |             |
| secType                | Enum        | None, Stock, Future, Option, MLeg                                                                                       | Type of security involved in the auction.                                                                                     |             |
| auctionExch            | Enum        | None, AMEX, BOX, etc.                                                                                                   | The exchange handling the auction.                                                                                            |             |
| auctionExDest          | String      |                                                                                                                         | External destination of auction, usually indicating off-exchange.                                                             |             |
| srAuctionID            | Long        |                                                                                                                         | Unique SpiderRock AUCTION ID, required when responding to an auction notice.                                                  |             |
| exchAuctionId          | String      |                                                                                                                         | Exchange-specific auction ID.                                                                                                 |             |
| exchAuctionType        | String      |                                                                                                                         | Type of the auction as defined by the exchange.                                                                               |             |
| isTestAuction          | Enum        | None, Yes, No                                                                                                           | Indicates if the auction is a test auction.                                                                                   |             |
| auctionEvent           | Enum        | None, Start, Update, End                                                                                                | The current event stage of the auction.                                                                                       |             |
| auctionShape           | Enum        | None, Single, MLeg                                                                                                      | Shape or structure of the auction.                                                                                            |             |
| auctionType            | Enum        | None, Exposure, etc.                                                                                                    | Type of auction being conducted.                                                                                              |             |
| auctionSide            | Enum        | None, Buy, Sell                                                                                                         | Market side of the auction, if known. Responder should be on the opposite side.                                               |             |
| auctionSize            | Int         |                                                                                                                         | Size available to trade in the auction.                                                                                       |             |
| auctionPrice           | Double      |                                                                                                                         | Price at which the auction is set to execute.                                                                                 |             |
| isAuctionPriceValid    | Enum        | None, Yes, No                                                                                                           | Indicates if the auction price is considered valid.                                                                           |             |
| auctionDuration        | Int         |                                                                                                                         | Expected duration of the auction/imbalance action in milliseconds.                                                            |             |
| auctionStartSize       | Int         |                                                                                                                         | Initial size at the start of the auction.                                                                                     |             |
| auctionStartPrice      | Double      |                                                                                                                         | Initial price at the start of the auction.                                                                                    |             |
| auctionStartTimestamp  | Long        |                                                                                                                         | Timestamp marking the start of the auction.                                                                                   |             |
| minResponseSize        | Int         |                                                                                                                         | Minimum size of response order required.                                                                                      |             |
| limitType              | Enum        | None, Market, Limit                                                                                                     | Limit type of the client side of the auction, if available.                                                                   |             |
| firmType               | Enum        | None, Customer, Firm, etc.                                                                                              | Firm type of the client side of the auction, if available.                                                                    |             |
| memberMPID             | String      |                                                                                                                         | Exchange member initiating the auction, if available.                                                                         |             |
| clientAccnt            | String      |                                                                                                                         | Client account designation, if known.                                                                                         |             |
| otherDetail            | String      |                                                                                                                         | Additional details about the auction, exchange-specific.                                                                      |             |
| matchedSize            | Int         |                                                                                                                         | Size already matched in the auction, potentially available for trading at a better price.                                     |             |
| numUpdates             | Byte        |                                                                                                                         | Number of auction updates received, not counting the termination message.                                                     |             |
| numResponses           | Byte        |                                                                                                                         | Number of responses reported by the exchange, if available.                                                                   |             |
| bestResponseSize       | Int         |                                                                                                                         |                                                                                                                               |             |
| bestResponsePrice      | Double      |                                                                                                                         |                                                                                                                               |             |
| cumFillQuantity        | Int         |                                                                                                                         | Cumulative fill quantity reported by the exchange, if available.                                                              |             |
| avgFillPrice           | Double      |                                                                                                                         | Average fill price, as reported by the exchange, if available.                                                                |             |
| marketStatus           | Enum        | None, PreOpen, PreCross, etc.                                                                                           | Market status at the time of the auction update.                                                                              |             |
| srcTimestamp           | Long        |                                                                                                                         | Source timestamp in nanoseconds, if available.                                                                                |             |
| netTimestamp           | Long        |                                                                                                                         | Network timestamp of message arrival at direct exchange gateway.                                                              |             |
| dgwTimestamp           | Long        |                                                                                                                         | Network timestamp of message send at direct exchange gateway.                                                                 |             |
| timestamp              | DateTime    |                                                                                                                         | General timestamp for the auction update.                                                                                     |             |
| Legs                   | Repeater    |                                                                                                                         | Details about the individual legs of the auction if it's a multi-leg auction.                                                |             |
| - legSecKey            | OptionKey   |                                                                                                                         | Security key for each leg.                                                                                                    | Legs        |
| - legSecType           | Enum        | None, Stock, Future, etc.                                                                                               | Type of security for each leg.                                                                                                | Legs        |
| - legSide              | Enum        | None, Buy, Sell                                                                                                         | Side of each leg.                                                                                                             | Legs        |
| - legRatio             | UShort      |                                                                                                                         | Ratio for each leg.                                                                                                           | Legs        |