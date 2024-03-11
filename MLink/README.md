# MLink API
The SpiderRock MLink API provides access to live-data objects (real-time or delayed data feeds) within the SpiderRock system. This repo provides documentation and code samples for how developers can connect to MLink and consume the data returned.

MLink provides several options:
* [6 product categories](https://www.spiderrock.net/data/spiderstream-market-data-api/#dataproducts) to choose from, which are divided into 18 tokens for scoped access to message types
* 3 message delivery protocols: JSON, Framed JSON or Google Protocol Buffers
* 2 connection types: query-based (REST) or streaming (Websocket)
* Real-time or delayed data
* Authentication via API Key or Session Key


## Table of Contents
1. Messages
2. Authentication Methods
3. Connection Types
4. Sample App

# 📄 Messages
In MLink, messages are organized and permissioned by the folllowing tokens:

| Token              | Description |
|--------------------|---|
| EqtMktData         | Stock quote and prints |
| OptMktData         | Options quote and prints |
| FutMktData         | Futures quote and prints |
| SpreadMktData      | Spread quote and markups |
| SpreadExchData     | Live public spread orders for each exchange (if available) |
| EqtSummaryData     | Stock market summaries |
| OptSummaryData     | Options market summaries |
| FutSummaryData     | Futures market summaries |
| EqtMarkData        | Stock open and close marks |
| OptMarkData        | Options open, close, surface, closing greeks marks |
| FutMarkData        | Futures open, close and settlement marks |
| EqtExchImbalance   | Stock market auction imbalances |
| OptSurface         | Options surfaces, at-the-money volatility and related |
| OptAnalytics       | Options implied quotes and risk slides |
| EquityDefinition   | Production definitions for equities |
| OptionDefinition   | Production definitions for options |
| FutureDefinition   | Production definitions for futures |
| GlobalDefinition   | Dividends, EarningsCalendars, Rates, StockBetas |
| MLinkWs            | MLink WebSocket admin messages |
| MLinkRest          | MLink HTTP/REST admin messages |

## Message Patterns
All MLink messages are generated from a common IDL schema and follow common patterns, including the following:

1. **Live Data Objects with Primary Key:**

    These messages have a well-defined primary key (unique per message type) and follow a create/replace pattern such that any new message arriving in MLink will completely replace the previous record with the same primary key, if one exists. NOTE: any REST query for this message pattern will result in the current, cached copy of all responsive records being returned to the client. An example of this pattern is the  "NBBOOptionQuote" message

2. **Security Keys:**

    Several messages contain security keys (TickerKey, ExpiryKey, and/or OptionKey)

    - TickerKey: `SSSS-TS-AT` where SSSS is the security symbol (eg. AAPL), TS is a ticker source (eg. NMS), and AT is a asset type (eg. EQT).
    - ExpiryKey: `SSSS-TS-AT-YYYY-MM-DD` where YYYY is year, MM is month, and DD is day.
    - OptionKey: `SSSS-TS-AT-YYYY-MM-DD-XXXX-CP` where XXXX is the strike price, and CP is either (Call, Put, or Both).

    Ticker Sources (ts) can be of the following:
    - None=0,SR=1,NMS=2,CME=3,ICE=4,CFE=5,CBOT=6,NYMEX=7,COMEX=8,RUT=9,CIDX=10,ARCA=11,NYSE=12,OTC=13,NSDQ=14,MFQS=15,MIAX=16,DJI=17,CUSIP=18,ISIN=19

    Asset Types (at) can be of the following:
    - None=0,EQT=1,IDX=2,BND=3,CUR=4,COM=5,FUT=6,SYN=7,WAR=8,FLX=9,MUT=10,SPD=11,MM=12,MF=13,COIN=14,TOKEN=15

4. **Special Data Objects:** 

    - Spreads: `#SSSShhhh` where hhhh is a hexadecimal ID number. It is not possible to determine the security being traded without referring to the associated product definition.
    - FLEX: encoded as OptionKeys with the security symbol being the standard FLEX root.
    - Market Data: distributed with one of the above security keys where the symbol is the exchange trading symbol. Product definition records are available for all trading instruments that contain more complete details.
    - Synthetics: `_SSSS` or `SSSS_` computed for the purpose of pricing options more accurately (eg. multi-hedge basket underliers or roll+model derived options on futures quotes).

5. **Admin Data Objects without Primary Keys:**

    Some SR MLink objects do not have natural primary keys and are used as administrative messages between MLink and a client. An example of this pattern is "MLinkLogon". 

6. **HTTP/REST Admin Messages:**

    | Messages           | Description |
    |--------------------|---------------------------------------------------------------------------------|
    | MLinkApiKey        | Used to return a temporary ApiKey (./getapikey) |
    | QueryResult        | Futures quote/print metrics (the last message in a response.body block) (./getmsg or ./getmsgs) |
    | MsgDesc            | Message Description (describes an SR message) (in response to ./getmsgtypes call) |
    | FieldDesc          | Field Description (schema) (in response to a ./getschema call) |
    | SummaryNumeric     | Summary detail for a numeric field (in response to a ./getsummary call) |
    | SummaryString      | Summary detail for a string field (in response to a ./getsummary call) |
    | PostAck            | Post acknowlegement for an individual SR message post attempt (./postmsgs) |

7. **MLink/WebSocket Admin Messages:**

    | Messages           | Description |
    |--------------------|---------------------------------------------------------------------------------|
    | MLinkAdmin         | Sent in response to a WebSocket connect attempt and also in response to an MLinkLogon message |
    | MLinkLogon         | Used to logon (authenticate) (only required if credentials were not supplied in initial HTTP connect) |
    | MLinkStream         | Set or update the active subscription query for this session |
    | MLinkStreamAck      | Sent in repsponse to an MLinkStream attempt |
    | MLinkStreamCheckPt  | Query Check Point (None=0,Begin=1,Active=2,Complete=3,Replaced=4,Terminated=5) |
    | MLinkSignalReady   | Used to signal that the client is ready for more messages (live subscriptions w/o an active latency) |
    | MLinkDataAck       | Sent in response to an message upload attempt|
    | MLinkSubscribe     | Set or update an active subscription for a session by msgPKey |
    | MLinkSubscribeAck  | Sent in reponse to an MLinkSubscribe attempt |
    | MLinkSubscribeCheckPt  | Subscription Check Point (None=0,Begin=1,Active=2,Terminated=3)  |
    | MLinkHeartbeat         | MLink Connection heart beat; sent by default every 10 seconds  |


# 🔑 Authentication Methods
You can authenticate to MLink through 2 different methods: Login or API Key
1. __Login (Human Access)__:
Use this method to authenticate your application by challenging humans to login with their SpiderRock ID credentials along with multi-factor authentication (MFA). 

    * The SpiderRock Support Desk will issue you a SpiderRock ID, by which you will receive an invitation to your registered email. From there, you will complete your setup and select with MFA method you want: Authenticator App or SMS. Upon completion of sign up you will have access to MLink as determined by your configuration.

    * __Session Keys:__ a Session Key looks similar to an API but is issued for each valid session after login. Therefore, once a user authenticates with their SpiderRock ID credentials their Session Key will be automatically issued and used for the remainer of the session.

2. __API Key (Machine Access)__:
Use this method to authenticate your application directly to MLink if there is no ability to use MFA or you only require a single data feed. 

    * The SpiderRock Support Desk will issue an `M2MUser` user as a datafeed profile, by which we will generate an API Key scoped to the permissions requested by the customer.

    * __Using an API Key via REST:__ Add your API Key to the querystring as "apikey":
`https://mlink-live.nms.saturn.spiderrockconnect.com/rest/json?apikey=1234-5678-9012-31415`

    * __Using an API Key via WebSocket:__ Send an MLinkLogon to MLink servers, then include `apikey` as a header in the initial HTTP handshake request:

```json
msg = {
    "header": {"mTyp": "MLinkLogon"},
    "message": {
        "apiKey": "1234-5678-9012-3141" # Replace with actual API key or session key
    } 
}
```

```python
async with websockets.connect(uriJson, 
extra_headers={"Authorization": "Bearer {apikey}"}, ping_timeout=None) as websocket:
```


# ⚡️ Connection Types

You can connect to the MLink API through 2 different connection types: REST or Websocket. 

1. The **REST API** should be used for applications that need to query data from time to time, this connection type allows for more conservative message consumption which keeps costs lower. 

2. The **Websocket** connection should be used for applications that require a live subscription to data, this connection type flows data to the screen automatically and tends to consume more messages as a result.

## 1. REST API

The MLink REST API is implemented as a standard HTTP/RESTful service accessible at:

- Real-time data - https://mlink-live.nms.saturn.spiderrockconnect.com 
- Delayed data - https://mlink-delay.nms.saturn.spiderrockconnect.com

Query parameters are URL-encoded and passed in the querystring. If successful, responses are sent back via the HTTP request body section. The URL also determines the protocol.

### Protocol Usage
- **JSON** - Standard JSON

    Query:

    `https://mlink-live.nms.saturn.spiderrockconnect.com/rest/json?apikey="your_api_key_token"&cmd=getmsg&msgtype=OptionNbboQuote&pkey=SPX-NMS-EQT-2024-03-15-4550-C`

    Response:

    ```json
    [
      {"header":{"mTyp":"OptionNbboQuote"},"message":{"pkey":{"okey":{"at":"EQT","ts":"NMS","tk":"SPX","dt":"2024-03-15","xx":4550,"cp":"Call"}},"updateType":"PrcChange","bidPrice":288.7,"askPrice":292.2,"bidSize":52,"askSize":30,"cumBidSize":52,"cumAskSize":30,"bidExch":"CBOE","askExch":"CBOE","bidMask":4,"askMask":4,"bidTime":31904651,"askTime":31904651,"srcTimestamp":1690379504651660288,"netTimestamp":1690379504651853000}},
      {"header":{"mTyp":"QueryResult"},"message":{"numMessagesSent":1,"queryElapsed":1.4089,"result":"Ok"}}
      ]
    ```

- **Framed JSON** - SpiderRock JSON with protobuf-like header. The framing header is a fixed length (14 bytes) and in the form: \r\nJMMMMMLLLLLL, where J is the protocol [J = framed json, P = protobuf], MMMMM is the message number (zero padded), and LLLLLL is the message length (zero padded).

    Query:

    `https://mlink-live.nms.saturn.spiderrockconnect.com/rest/jsonf?apikey="your_api_key"&cmd=getmsg&msgtype=OptionNbboQuote&pkey=SPX-NMS-EQT-2024-03-15-4550-C`

    Response:

    ```json
    J02785000423{"header":{"mTyp":"OptionNbboQuote"},"message":{"pkey":{"okey":{"at":"EQT","ts":"NMS","tk":"SPX","dt":"2024-03-15","xx":4550,"cp":"Call"}},"updateType":"PrcChange","bidPrice":289.4,"askPrice":291.9,"bidSize":11,"askSize":62,"cumBidSize":11,"cumAskSize":62,"bidExch":"CBOE","askExch":"CBOE","bidMask":4,"askMask":4,"bidTime":31982946,"askTime":31982592,"srcTimestamp":1690379582946764032,"netTimestamp":1690379582946960400}}
    J03445000101{"header":{"mTyp":"QueryResult"},"message":{"numMessagesSent":1,"queryElapsed":1.4177,"result":"Ok"}}
    ```

- **Protobuf** - Google's mechanism for serializing structured data, generally more efficient for processing higher bandwidth, lower-latency applications. See compilation notes below for usages. See above Framed JSON for header information.

    Query: 

    `https://mlink-live.nms.saturn.spiderrockconnect.com/rest/proto?apikey="your_api_key"&cmd=getmsg&msgtype=OptionNbboQuote&pkey=SPX-NMS-EQT-2024-03-15-4550-C`

    Response:

    ```cmd
    P02745000499<OptionNbboQuote as protoBuf/binary message>
    P03320000111<QueryResult as protoBuf/binary message>
    ```

    **Compiling SR proto files**

    `.proto` files exist in [SRMlink/proto_files](/proto_files):
    - spiderrock_common.proto
    - All Token .proto files for SpiderRock specific messages

    Both of these files need to be compiled to use [protobuf](https://protobuf.dev/overview/) with MLink.

    - To compile, first install the compiler, [download the package](https://github.com/protocolbuffers/protobuf/releases/tag/v22.2) and follow the instructions in the README.
    - Then, run the compiler, specifying your application's source directory (the current directory is used by default), the destination directory (where you want the generated code to go), and the path to your .proto file.

    For python, using python_out:

    ```cmd
    protoc -I=$SRC_DIR --python_out=$DST_DIR $SRC_DIR/[File].proto
    ```

    In your specified destination, this will generate N .py files:
    - spiderrock_common_pb2.py 
    - "Specific message"_pb2.py

### REST Commands:

Query parameters are a set of key/value pairs (not case-sensitive):

| Name    | Parameter | Description |
|---------|-----------|----------------------------------------------------------------------------------------------------|
| cmd     | c         | c="command" - the type of command, see list below |
| msgType | mt        | mt="message type" - either the string or numeric label of an SR Data Object class|
| pkey    | pk        | pk="primary key" - a string representation of the primary key of a specific SR Data Object instance|
| limit   | l         | l="limit" - a number between 1 and 10,000 and acts to limit the number of messages in the response body |
| secret  | secret    | secret="secret" - the client-supplied API Password (if any) [only used with getapikey] |
| view    | v         | v="view clause" - a string in the form of "field1  field2  field3" |
| where   | w         | w= "where clause" - a string in the form "field1:eq:value" or "(field1:ne:value1 & field1:ne:value2) |
|order    | order     |(optional) order clause eg. "(bidsize:DESC \| bidexch:ASC \| bidprice:DESC:ABS \| askprice:ASC:ABS"  (default is unordered; default is faster)|


#### Commands:

|Command | Description | Parameters |
|--- | --- | --- |
|getapikey | creates/updates MLink API key | secret |
|getmsgtypes | returns all available message types | view, where|
|getschema | returns a single message schema | msgType, view|
|getmsg | returns a single message by PrimaryKey | msgType, pkey, view|
|getmsgs | returns all available messages for a message type | msgtype, pkey, limit, view, where, order|
|getaggregate|returns summarized or aggregated data based on specified criteria| msgtype, group, measure|
|getcount | returns the count of records for a message type | msgType, where|


"WHERE" clauses can contain the following comparison symbols:
- :gt: is greater than
- :ge: is greater than or equal to
- :lt: is less than
- :le: is less than or equal to
- :eq: is equal
- :ne: is not equal
- %26 is an AND statement
- | is an OR statement
- :sw: is starts with
- :ew: is ends with
- :cv: is contains values
- :nv: is does not contain value
- :cb: is contained between (two dates for instance) separated by '$' 

"getAggregate" takes in both group and measure with a msgType:
- Group types can be the following; examples:
    Numeric Quantile: `{ "cmd", "getaggregate" }, { "msgtype", "OptionNbboQuote" }, { "group", "bidprice:Q:9" }, { "measure", "bidprice" }`

    Numeric Range: `{ "cmd", "getaggregate" },{ "msgtype", "OptionNbboQuote" },{ "group", "bidprice:RANGE:3" }, { "measure", "bidprice" }`

    DateTimeRange: `{ "cmd", "getaggregate" }, { "msgtype", "OptionPrint" },{ "group", $"timestamp:TIMEHIST:3#STARTDATE#ENDDATE" },{ "measure", "prtprice" }`

    String Top N: `{ "cmd", "getaggregate" }, { "msgtype", "OptionNbboQuote" }, { "group", "bidexch:top:3" }, { "measure", "bidprice|askprice|bidsize|asksize" }`

- You can set measureTypes in group parameters such that:
    `{ "cmd", "getaggregate" }, { "msgtype", "OptionNbboQuote" }, { "group", "bidexch:top:3:asksize:max" }, { "measure", "bidprice|askprice|bidsize|asksize"}`

Note that measureTypes can be of cnt, min, max, sum, avg

### Rest Examples

Obtain your session Key (first needs UserName, PassWord, and MFA):

`https://mlink-live.nms.saturn.spiderrockconnect.com/rest/json?cmd=logon&user=USERNAME&pw=PASSWORD&pin=MFA_CODE`

Get all messages available:

`https://mlink-live.nms.saturn.spiderrockconnect.com/rest/json?apikey="your_api_key_token"&cmd=getmsgtypes`

Get field definitions for a message:

`https://mlink-live.nms.saturn.spiderrockconnect.com/rest/json?apikey="your_api_key_token"&cmd=getschema&msgtype=OptionNbboQuote`

Filtering for an Option Key:

`https://mlink-live.nms.saturn.spiderrockconnect.com/rest/json?apikey="your_api_key_token"&cmd=getmsgs&msgtype=OptionNbboQuote&where=okey:eq:SPX-NMS-EQT-2024-03-15-4550-C`

Filtering for a Ticker Key:

`https://mlink-live.nms.saturn.spiderrockconnect.com/rest/json?apikey="your_api_key_token"&cmd=getmsgs&msgtype=StockBookQuote&where=ticker:eq:AAPL-NMS-EQT`

or 

`https://mlink-live.nms.saturn.spiderrockconnect.com/rest/json?apikey="your_api_key_token"&cmd=getmsgs&msgtype=OptionNbboQuote&where=okey.tk:eq:AAPL`

Filtering by a View:

`https://mlink-live.nms.saturn.spiderrockconnect.com/rest/json?apikey="your_api_key_token"&cmd=getmsgs&msgtype=OptionNbboQuote&view=okey|bidprice|askprice`

Complex filtering:

`https://mlink-live.nms.saturn.spiderrockconnect.com/rest/json?apikey="your_api_key_token"&cmd=getmsgs&msgtype=OptionNbboQuote&where=(bidsize:eq:1%26asksize:eq:1)|(bidsize:eq:10%26asksize:eq:1)&view=okey|bidprice|askprice|asksize|bidsize`

Complex Primary Keys:

`https://mlink-live.nms.saturn.spiderrockconnect.com/rest/json?apikey="your_api_key_token"&cmd=getmsg&msgtype=LiveSurfaceCurve&pkey=AAPL-NMS-EQT-2023-12-01|Live`

 - Note that in this example the pkey is a repeater with en Expiry Key + SurfaceType

Simple getAggregate:

`https://mlink-live.nms.saturn.spiderrockconnect.com/rest/json?apikey="your_api_key_token"&cmd=getaggregate&msgtype=OptionNbboQuote&measure=bidprice|askprice|bidsize|asksize`

GetAggregate by Bid Exchange:

`https://mlink-live.nms.saturn.spiderrockconnect.com/rest/json?apikey="your_api_key_token"&cmd=getaggregate&msgtype=OptionNbboQuote&group=bidexch&measure=bidprice|askprice|bidsize|asksize`

GetAggregate by Bid Exchange Top3:

`https://mlink-live.nms.saturn.spiderrockconnect.com/rest/json?apikey="your_api_key_token"&cmd=getaggregate&msgtype=OptionNbboQuote&group=bidexch:top:3&measure=bidprice|askprice|bidsize|asksize`

GetAggregate by bidPrice Range:

`https://mlink-live.nms.saturn.spiderrockconnect.com/rest/json?apikey="your_api_key_token"&cmd=getaggregate&msgtype=OptionNbboQuote&group=bidprice:RANGE:3&measure=bidprice`

GetAggregate complex:

`https://mlink-live.nms.saturn.spiderrockconnect.com/rest/json?apikey="your_api_key_token"&cmd=getaggregate&msgtype=OptionPrint&group=timestamp:TRANGE:3&measure=prtsize&where=timestamp:cb:value1$value2`


## 2. Websocket API

The MLink Websocket API is implemented as a standard HTTP WebSocket service accessible at:

- Real-time data - wss://mlink-live.nms.saturn.spiderrockconnect.com
- Delayed data - wss://mlink-delay.nms.saturn.spiderrockconnect.com

Query parameters are URL-encoded and passed in the querystring. If successful, responses are sent back via the HTTP request body section. The URL also determines the protocol.

### Websocket Parameters - MLinkStream:

| Field Name      | Field Type         | Description                                                                                                                |
|-----------------|--------------------|----------------------------------------------------------------------------------------------------------------------------|
| msgName       | MessageTypeName            | (optional) message name                                                              |
| view            | string             | (optional) list (subset) of field names to return with this message (eg. bidprice\|askprice\|bidsize\|asksize) (default is all names)|
| where           | string             | (optional) where clause for this message type; eg. "(bidexch:eq:CBOE) & bidsize:ge:100"  (default is all records) any field in the message requested can be used|
| unsubscribe           | enum:YesNo             | (optional) if set to Yes the specified message type will be unsubscribed and thus no longer return|
| sessionID| short| (optional) actions below apply only to the sessionID virtual session; should be zero for non-multiplexed web-socket connections.|
|queryID|GroupingCode|(optional) queryID will be reflected back in the corresponding MLinkStreamAck message; nothing is assumed about structure of this number|
| queryLabel      | AppNameString      |  query label                                                                                                               |
| activeLatency   | int                | (optional) number of milliseconds between active send attempts (1 = minimum delay, 0 = wait for SignalReady) [default = 0]                        |
| sysEnvironment  | enum               | (optional) records cannot have [sysEnvironment + sysRealm] in their route history (no loops)                               |
| sysRealm        | enum               |                                                                                                                            |
| highwaterTs     | long               | (optional) records must have a header.sentTs that is later than this value (ns after the UNIX epoch)  -1 means start from current server side highwaterTs                     |
| stripeFilter    | text1              | (optional) if supplied records must be within the specified stripe                                                         |
| schemaHash      | long               | (optional) message schema hash [if supplied and matches server schema hash for this message binary encoding will be used]  |
| localMsgType    | ushort             | (optional) if != 0 the msgType number will be translated from msgType to localMsgType in the mlink server (binary messages)|
| localMsgName    | MessageTypeName    | (optional) if exists the message name will be translated from msgName to localMsgName in the mlink server (json and protobuf messages)|


### Websocket Parameters - MLinkSubscribe:

| Field Name      | Field Type         | Description                                                                                                                |
|-----------------|--------------------|----------------------------------------------------------------------------------------------------------------------------|
| sessionID| short| (optional) actions below apply only to the sessionID virtual session; should be zero for non-multiplexed web-socket connections.|
|SubscribeID|GroupingCode|(optional) subscribeD will be reflected back in the corresponding MLinkSubscribeAck message; nothing is assumed about structure of this number|
| activeLatency   | int                | (optional) number of milliseconds between active send attempts (1 = minimum delay, 0 = wait for SignalReady) [default = 0]                        |
| compression  | enum               | (optional) FieldChangesOnly will supress fields in messages that have not changed since the previous send (resets automatically after every subscription) None=0,FieldChangesOnly=1                              |
| doReset        | enum:YesNo               |   if Yes all current subscriptions will be removed prior to applying the actions below                                                                                                                         |
| {View}     |                |                       |
| msgName    | msgTypeName              | a SpiderRock message name (topic channel) (can be string name or protobuf message number)                                                         |
| view     | string              | list (subset) of field names to return with this message type (eg. bidprice\|askprice\|bidsize\|asksize)                                    |
| {Subscribe}|               |                               |
| msgName    | msgTypeName              | a SpiderRock message name (topic channel) (can be string name or protobuf message number)                                                         |
| msgPKey       | string         | an existing message.pkey; can be in either flat string or JSON format; if missing/empty all active msgName subscriptions will be removed                                                |
| {Unsubscribe}|               |                               |
| msgName    | msgTypeName              | a SpiderRock message name (topic channel) (can be string name or protobuf message number)                                                         |
| msgPKey       | string         | an existing message.pkey; can be in either flat string or JSON format; if missing/empty all active msgName subscriptions will be removed         |                                                                                                                        

Upon opening up a WebSocket connection to MLink, Authenticating, and requesting to stream a message (msgName) with user specified conditions (view, where, etc), the MLinkServer will initially clear cache. This means it will forward the latest updates to all of the primary keys in your message before it starts streaming.

Clients have the possibilitiy to determine when cache has been cleared using the MLinkAdmin messages:

- Initially, upon authentication MLinkServers will send an ***MLinkAdmin*** with the authentication state
- MLinkServers will then send an Acknowledgement message of type ***MLinkStreamAck*** to acknowledge reception of the message request.
- A first checkpoint  ***MLinkStreamCheckPt*** is then sent with a message body state of begin (begin to clear cache)
- MLinkServers send the cached records
- A secondary checkpoint ***MLinkStreamCheckPt*** is then sent with a message body state of Active (request is active)
- The state.Active ***MLinkStreamCheckPt*** is followed by another ***MLinkStreamCheckPt*** with a message body state of Complete to alert the client side that cache has cleared
- MLink is now streaming.

Below is an example of streaming the following request, AMZN stock quote:

```json
msg = {
                        "header": {
                            "mTyp":"MLinkStream"
                        },
                        "message": { 
                            "queryLabel":"ExampleStockBookQuote",
                            "activeLatency": 1,
                            "msgName":"stockbookquote",
                            "where":"ticker.tk:eq:AMZN"
                        }
                    }
```

#### Reponse Order:

```json
{'header': {'mTyp': 'MLinkAdmin', 'sEnv0': 'Saturn', 'sRlm0': 'NMS', 'sID': 0, 'kLen': 0, 'mLen': 0, 'seqN': 0, 'appN': 'MLinkServer.Prod.B.Extern', 'mn': 'SROCKNY5-130', 'sTim': '2023-11-09 15:26:23.464116', 'encT': '2023-11-09 15:26:23.464120', 'git': 'b981c14047'}, 'message': {'state': 'LoggedOn'}} 

{'header': {'mTyp': 'MLinkStreamAck', 'sEnv0': 'Saturn', 'sRlm0': 'NMS', 'sID': 0, 'kLen': 0, 'mLen': 0, 'seqN': 0, 'appN': 'MLinkServer.Prod.B.Extern', 'mn': 'SROCKNY5-130', 'sTim': '2023-11-09 15:26:23.573021', 'encT': '2023-11-09 15:26:23.573023', 'git': 'b981c14047'}, 'message': {'msgName': 'stockbookquote', 'result': 'OK'}}

{'header': {'mTyp': 'MLinkStreamCheckPt', 'sEnv0': 'Saturn', 'sRlm0': 'NMS', 'sID': 0, 'kLen': 0, 'mLen': 0, 'seqN': 0, 'appN': 'MLinkServer.Prod.B.Extern', 'mn': 'SROCKNY5-130', 'sTim': '2023-11-09 15:26:23.573034', 'encT': '2023-11-09 15:26:23.573035', 'git': 'b981c14047'}, 'message': {'state': 'Begin', 'timestamp': '2023-11-09 15:26:23.566996'}}

{'header': {'mTyp': 'StockBookQuote', 'sEnv0': 'Saturn', 'sRlm0': 'NMS', 'sID': 18409, 'kLen': 0, 'mLen': 0, 'seqN': 206, 'appN': 'MLinkServer.Prod.B.Extern', 'mn': 'SROCKNY5-130', 'sTim': '2023-11-09 15:26:29.699590', 'encT': '2023-11-09 15:26:29.707677', 'git': 'b981c14047'}, 'message': {'pkey': {'ticker': {'at': 'EQT', 'ts': 'NMS', 'tk': 'AMZN'}}, 'updateType': 'PrcChange', 'marketStatus': 'Open', 'bidPrice1': 141.69, 'bidSize1': 9, 'bidExch1': 'EDGX', 'bidMask1': 18240, 'askPrice1': 141.7, 'askSize1': 1, 'askExch1': 'MPRL', 'bidPrice2': 141.68, 'bidSize2': 1, 'bidExch2': 'IEX', 'askPrice2': 141.71, 'askSize2': 8, 'askExch2': 'EDGX', 'askMask2': 18240, 'srcTimestamp': 1699543589698404599, 'netTimestamp': 1699543589698443200}}

{'header': {'mTyp': 'MLinkStreamCheckPt', 'sEnv0': 'Saturn', 'sRlm0': 'NMS', 'sID': 0, 'kLen': 0, 'mLen': 0, 'seqN': 0, 'appN': 'MLinkServer.Prod.B.Extern', 'mn': 'SROCKNY5-130', 'sTim': '2023-11-09 15:26:23.573034', 'encT': '2023-11-09 15:26:45.596555', 'git': 'b981c14047'}, 'message': {'state': 'Active', 'numMessagesSent': 1, 'timestamp': '2023-11-09 15:26:45.592286'}}

{'header': {'mTyp': 'MLinkStreamCheckPt', 'sEnv0': 'Saturn', 'sRlm0': 'NMS', 'sID': 0, 'kLen': 0, 'mLen': 0, 'seqN': 0, 'appN': 'MLinkServer.Prod.B.Extern', 'mn': 'SROCKNY5-130', 'sTim': '2023-11-09 15:26:23.573034', 'encT': '2023-11-09 15:26:45.596582', 'git': 'b981c14047'}, 'message': {'state': 'Complete', 'waitElapsed': -22.0229465, 'queryElapsed': 22.0229815, 'tryFwdElapsed': -1.5e-05, 'flushElapsed': 1.5e-05, 'timestamp': '2023-11-09 15:26:45.592286'}}

{'header': {'mTyp': 'StockBookQuote', 'sEnv0': 'Saturn', 'sRlm0': 'NMS', 'sID': 18409, 'kLen': 0, 'mLen': 0, 'seqN': 93, 'appN': 'MLinkServer.Prod.B.Extern', 'mn': 'SROCKNY5-130', 'sTim': '2023-11-09 15:26:47.543689', 'encT': '2023-11-09 15:26:47.611402', 'git': 'b981c14047'}, 'message': {'pkey': {'ticker': {'at': 'EQT', 'ts': 'NMS', 'tk': 'AMZN'}}, 'updateType': 'PrcChange', 'marketStatus': 'Open', 'bidPrice1': 141.64, 'bidSize1': 22, 'bidExch1': 'EDGX', 'bidMask1': 18240, 'askPrice1': 141.66, 'askSize1': 18, 'askExch1': 'EDGX', 'askMask1': 18240, 'bidPrice2': 141.62, 'bidSize2': 1, 'bidExch2': 'IEX', 'askPrice2': 141.71, 'askSize2': 1, 'askExch2': 'PSX', 'askMask2': 4096, 'srcTimestamp': 1699543607542434826, 'netTimestamp': 1699543607542516100}}
```

### MLink Stripes

MLinkStream allows users to stripe their connections based on pre-defined sets of tickers (tk), indexes, or exchanges (ts) in order to either balance the load on the receiving end and/or segment (stripes correspond to different sets of assets). This is especially useful if you are trying to distribute the incoming message load, or are interested in tickers within specific stripes. An example of striped connections (1 Stripe = 1 WebSocket connection) can be found here: MLink-Samples\client-python\JSONFramed\examples\clientStripes.py

#### Native OPRA / NMS Stripes (EQT)

| Stripe | startTicker | endTicker |
|--------|-------------|-----------|
|A1      |A            |AMZN      |
|A2      |AMZN         |COIN       |
|B1      |COIN          |ENQZZ      |
|B2      |ENQZZ         |GOOGL     |
|C1      |GOOGLE         |IWM        |
|C2      |IWM           |LRCX       |
|D1      |LRCX          |METAA      |
|D2      |METAA         |NFLX      |
|E1      |NFLX         |NVDA      |
|E2      |NVDA         |NVDAA       |
|F1      |NVDAA          |QQQ        |
|F2      |QQQ           |QQQA      |
|G1      |QQQA         |SPY       |
|G2      |SPY          |SPYA      |
|H1      |SPYA         |TSLAA       |
|H2      |TSLAA          |ZZZZZZ    |

#### Compound OPRA / NMS Stripes (EQT)

|Stripe  |Start Stripe |End Stripe |
|--------|-------------|-----------|
|A       |A1           |A2        |
|B       |B1           |B2        |
|C       |C1           |C2        |
|D       |D1           |D2        |
|E       |E1           |E2        |
|F       |F1           |F2        |  
|G       |G1           |G2        |
|H       |H1           |H2        |

#### Index Source Stripes

|Stripe  |Ticker Source|
|--------|-------------|
|I1      |CDIX         |
|I2      |DJI          |
|I3      |RUT          |
|I4      |MIAX         |

#### Coumpound Index Source Stripe

|Stripe  |Ticker Source|
|--------|-------------|
|I       |I1:I4        |

#### OTC / Mutual Fund / Other Source Stripes

|Stripe  |Ticker Source|
|--------|-------------|
|J1      |OTC          |
|J2      |MFQS         |
|J3      |CUSIP        |
|J4      |ISIN         |
|J5      |SR           |

#### Coumpound OTC / Mutual Fund / Other Source Stripe

|Stripe  |Ticker Source|
|--------|-------------|
|J       |J1:J4        |

#### Market Indexes Stripes

|Stripe  |Tickers                           |
|--------|----------------------------------|
|M1       |NDX,NDXP,RUT,RUTW,MRUT            |
|M2      |SPY, VXX                              |
|M3      |QQQ                              |
|M4      |IWM                              |

#### Compound Market Indexes Stripe

|Stripe  |Tickers|
|--------|-------|
|M       |M1:M4  |

#### SPX Stripe

|Stripe  |Tickers                |
|--------|-----------------------|
|S       |SPX,SPXW,XSP,VIX,VIXW  |

#### GTH Stripes

|Stripe  |Ticker Source|
|--------|-------------|
|V       |CFE          |
|X1      |CME          |
|X2      |CBOT         |
|X3      |NYMEX        |
|X4      |COMEX        |

#### Compound GTH Stripe

|Stripe  |Ticker Source|
|--------|-------------|
|X       |X1:X4        |



Note that stripes are exclusive, if a ticker is found within a specfic stripe, it will not be available in another. Ending ticker is not included in a stripe.


### Websocket Active Latency

MLinkStream contains an ActiveLantency field that governs subsequent updates after the initial (cache) query.  If this field is set to 0 then the user is required to send a SignalReady message which will trigger the MLinkServer to send an update (if any) to all response messages.

#### MLinkSignalReady

| Field Name      | Field Type         | Description                                                                                                                |
|-----------------|--------------------|----------------------------------------------------------------------------------------------------------------------------|
| sessionID| short| (optional) actions below apply only to the sessionID virtual session; should be zero for non-multiplexed web-socket connections.|
|signalID|GroupingCode|(optional) will be reflected back in xCheckPt.signalID fields that indicates that a specified signal ready triggered active send is complete.|
| readyScan   | enum                | (optional; default is Incremental) Incremental = messages w/changes (all fields; cumulative changes) since previous MLinkSignalReady; FullScan = all messages.  |

Note:
- It is possible for the MLinkServer to have received multiple updates to a single Primary Key between successive SignalReady messages. If this occurs, only the most recent record update will be forwarded to the client.
- If activelyLatency is set to any integer N greater than or equal to zero it will have the effect of automatically triggering the transmission of any pending updates every N milliseconds with zero being interpreted as no delay.
- If the client system is unable to process messages at the speed with which they are being sent, MLinkServer will fall back to sending messsages at the rate the client is able to receive, which will also result is some messages being skipped in favor of more recent updates.  

#### MLinkSignalReady and LiveImpliedQuoteAdj stream

The undelier-adjusted version of LiveImpliedQuote records used in parrallel with MLinkSignalReady allow users to recalculate surfaces on demand. All records returned by the MLinkServer will be adjusted for the latest underlying price for each specific ticker. 

After opening up a connection and setting the activeLatency to 0, users can send a series of MLinkSignalReady messages with a readyScan of FullScan to generate an underlier-adjusted reponse. With reasonable interval time between each, users can actively sample the LiveImpliedQuoteAdj message.

The following 2 message requests allow for this:

SignalReady (Should be sent in intervals through the same connection)

```Python
signal = {
            "header": {
                "mTyp": "MLinkSignalReady"
            },
            "message": {
                "readyScan": "FullScan" #[readyScan:enum:ReadyScan:None=0,Incremental=2,FullScan=3]  
            }
        }

```

MLinkStream

```Python
msg = {
                    "header": {
                        "mTyp": "MLinkStream"
                    },
                    "message": {
                        "queryLabel": "ExampleImpliedQuoteAdj",
                        "activeLatency": 0, #wait for Signal ready
                        "msgName": "LiveImpliedQuoteAdj", 
                        "where":"ticker:eq:AAPL-NMS-EQT" #can also do ticker.tk:eq:AAPL & ticker.at:eq:EQT & ticker.ts:eq:NMS
                    }
                }
```
Please refer to client-python\JSONFramed\examples\clientSignalReady.py for further examples.

### Establishing a connection

After authenticating a websocket connection:

- The first message sent from the client to MLink
must be an "MLinkLogon" message containing either an API Key or SessionKey. 
- The first message sent from MLink to the client will be an "MLinkAdmin" message containing an application state [LoggedOn, WaitingForLogon, AuthError, OtherError] depending on the authentication state.

If at any time during a session, a user sends an MLinkLogon message, the server will attempt to (re-)authenticate the user and will return an MLinkAdmin message.

### Protocol Usage
- **JSON** - Standard JSON, each websocket frame can only contain one JSON message at a time.
   
    Import Classes:

    ```Python 
    import asyncio
    import json
    import time
    import websockets
    import nest_asyncio
    import threading
    import datetime
    nest_asyncio.apply()
    ```
    Authentication:

    ```Python
    uriJson = "wss://mlink-live.nms.saturn.spiderrockconnect.com/mlink/json"
    apiKey = 'your api key'
    password = 'your password'
    api_key_token = f"{apiKey}.{password}"
    ```

    Asynchronously query AAPL:

    ```Python
    async def recv_msg(websocket):
      buffer = await websocket.recv()
      parts = list(filter(None, buffer.split(b'\r\n')))
        for msg in parts:
          result = json.loads(msg)
          print(result, '\n')
    return True

    async def query_mlink(api_key_token):
      retry = True
      while retry:
        try:
          async with websockets.connect(
            uriJson,
            extra_headers={"Authorization": f"Bearer {api_key_token}"},
            ping_timeout=None
          ) as websocket:
            msg = {
                    "header": {
                        "mTyp": "MLinkStream"
                    },
                    "message": {
                        "queryLabel": "ExampleStockNbbo",
                        "activeLatency": 1, #stream
                        "msgName": "StockBookQuote", 
                        "where":"ticker.tk:eq:AAPL | ticker.at:eq:EQT | ticker.ts:eq:NMS"
                    }
                }
            t = time.time_ns()
            tstr = '.'.join([time.strftime("%Y-%m-%d %H:%M:%S", time.gmtime(t / 1000000000)), "%06d" % ((t / 1000) % 1000000)])
            msg['header']['sTim'] = tstr
            msg['header']['encT'] = tstr
            smsg = json.dumps(msg)
            await websocket.send(smsg)
            notDone = True
            while notDone:
              notDone = await recv_msg(websocket)
              retry = False
            except asyncio.exceptions.TimeoutError:
              print("timeout occurred, retrying...")
    ```

- **Framed JSON** - SpiderRock JSON with protobuf-like header. 

    Same as JSON above, except for the parser:

    ```Python
    async def query_mlink(api_key_token):
      retry = True
      while retry:
        try:
          async with websockets.connect(
            uriJson, 
            extra_headers={"Authorization": f"Bearer {api_key_token}"},
            ping_timeout=None
          ) as websocket:
            msg = {
                    "header": {
                        "mTyp": "MLinkStream"
                    },
                    "message": {
                        "queryLabel": "ExampleStockNbbo",
                        "activeLatency": 1, #stream
                        "msgName": "StockBookQuote", 
                        "where":"ticker.tk:eq:AAPL & ticker.at:eq:EQT & ticker.ts:eq:NMS"
                    }
                }
            t = time.time_ns()
            tstr = '.'.join([time.strftime("%Y-%m-%d %H:%M:%S",time.gmtime(t/1000000000)),"%06d"%((t/1000)%1000000)])
            msg['header']['sTim'] = tstr
            msg['header']['encT'] = tstr
            smsg = json.dumps(msg)
            jmsg = ''.join(['\r\nJ', '%011d'%len(smsg), smsg]) #header
            await websocket.send(jmsg)
            notDone = True
            while notDone:
              buffer = await websocket.recv()
              parts = list(filter(None,buffer.split(b'\r\n')))
              for msg in parts:
                result = json.loads(msg[12:])
                print(result, '\n')
            except asyncio.exceptions.TimeoutError:
              print("timeout occurred, retrying...")
    ```

# 📦 Sample App
[View the code](./sample-app/README.md) or [run the our sample app](https://spiderrockconnect.com/mlink-analyzer) in order to get a better understanding of how all of this works together. The sample app itself is built as a tool to interact with our MLink Server and retrieve message out based on your API Key.  
