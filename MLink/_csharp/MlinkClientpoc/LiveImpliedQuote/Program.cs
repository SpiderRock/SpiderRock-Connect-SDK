using System;
using System.Collections;
using System.Net.WebSockets;
using System.Text;
using System.Threading;
using Google.Protobuf;
using Microsoft.Extensions.Configuration;

using Spiderrock.Protobuf;
using static System.Runtime.InteropServices.JavaScript.JSType;

namespace MLinkExamples;

public class Observer
{
    protected StockBookQuote msgStockBookQuote = new StockBookQuote();
    protected MLinkAdmin msgMLinkAdmin = new MLinkAdmin();
    protected MLinkStreamCheckPt msgMLinkStreamCheckPt = new MLinkStreamCheckPt();

    public int ProcessBuffer(byte[] buffer, int length)
    {
        int processed = 0;
        int index = 0;

        while (index + 14 <= length)
        {
            if (buffer[index] == '\r' && buffer[index + 1] == '\n' && buffer[index + 2] == 'P')
            {
                // Extract messageTypeNumber and messageLength
                int messageTypeNumber = 0;
                for (int i = index + 3; i < index + 8; ++i)
                {
                    if (buffer[i] >= '0' && buffer[i] <= '9')
                    {
                        messageTypeNumber = messageTypeNumber * 10 + buffer[i] - '0';
                    }
                    else
                    {
                        // Handle invalid message format
                        break;
                    }
                }

                int messageLength = 0;
                for (int i = index + 8; i < index + 14; ++i)
                {
                    if (buffer[i] >= '0' && buffer[i] <= '9')
                    {
                        messageLength = messageLength * 10 + buffer[i] - '0';
                    }
                    else
                    {
                        // Handle invalid message format
                        break;
                    }
                }

                // Ensure that the message is long enough
                if (index + 14 + messageLength <= length)
                {
                    // Dispatch the message with messageTypeNumber and messageLength
                    DispatchMessage(messageTypeNumber, buffer, index + 14, messageLength);
                    index += 14 + messageLength;
                    processed += 14 + messageLength;
                }
                else
                {
                    // Message is incomplete, break out of the loop
                    break;
                }
            }
            else
            {
                // Invalid message format, break out of the loop
                break;
            }
        }

        return processed;
    }

    public virtual void DispatchMessage(int messageNumber, byte[] buffer, int startIndex, int messageLength)
    {
        // Base implementation does nothing; override in derived classes.
    }
}

public class Dumper : Observer
{
    public Dumper()
    {
    }

    public override void DispatchMessage(int messageNumber, byte[] buffer, int startIndex, int messageLength)
    {
        switch (messageNumber)
        {
            case 3000: // StockBookQuote
                {
                    try
                    {
                        var proto = new StockBookQuote();
                        ReadOnlySpan<byte> proto_msg = buffer.AsSpan(startIndex, messageLength);


                        proto.MergeFrom(proto_msg);
                        Console.WriteLine(proto.ToString());
                    }
                    catch (Exception ex) { string g = ex.Message; }

                    break;
                }
            case 1015: // LiveImpliedQuote
                {
                    try
                    {
                        var proto = new LiveImpliedQuote();
                        ReadOnlySpan<byte> proto_msg = buffer.AsSpan(startIndex, messageLength);


                        proto.MergeFrom(proto_msg);
                        Console.WriteLine(proto.ToString());
                    }
                    catch (Exception ex) { string g = ex.Message; }

                    break;
                }

            case 3345: // MLinkAdmin
                {
                    try
                    {
                        var proto = new MLinkAdmin();
                        ReadOnlySpan<byte> proto_msg = buffer.AsSpan(startIndex, messageLength);


                        proto.MergeFrom(proto_msg);
                        Console.WriteLine(proto.ToString());
                    }
                    catch (Exception ex) { string g = ex.Message; }

                    break;
                }
            case 3382: // MLinkStreamCheckPt
                {
                    try
                    {
                        var proto = new MLinkStreamCheckPt();
                        ReadOnlySpan<byte> proto_msg = buffer.AsSpan(startIndex, messageLength);


                        proto.MergeFrom(proto_msg);
                        Console.WriteLine(proto.ToString());
                    }
                    catch (Exception ex) { string g = ex.Message; }

                    break;
                }

            default:
                {
                    Console.WriteLine("Unhandled Message");
                    break;
                }
        }
    }


    // The Handle method for handling messages
    private void Handle<T>(T message)
    {
        // Implement your logic to handle the message
    }
}


class Program
{
    private static string mlinkEndPoint = "wss://mlink-live.nms.saturn.spiderrockconnect.com/mlink/proto";


    private static readonly Uri WebSocketUri = new Uri(mlinkEndPoint);
    private static readonly string ApiKey = "<your api key>";
    private static readonly string Password = "<your password>";
    private static MlinkExamples.MsgSettingsConfig msgSettings = new();

    static async Task Main(string[] args)
    {
        using (ClientWebSocket webSocket = new ClientWebSocket())
        {
            // Add your API key and password to the WebSocket URI
            UriBuilder uriBuilder = new UriBuilder(WebSocketUri);
            uriBuilder.UserName = ApiKey;
            uriBuilder.Password = Password;
            webSocket.Options.SetRequestHeader("Authorization", $"Bearer {ApiKey}");
            // Connect to the WebSocket
            await webSocket.ConnectAsync(uriBuilder.Uri, CancellationToken.None);


            //   Console.WriteLine("WebSocket connection established.");

            // construct Mlink stream request 
            var stream = new MLinkStream();
            CreateMlinkStreamRequest(ref stream);

            // Add stream type tag with length of the message
            byte[] querydata = stream.ToByteArray();
            byte[] bytes = new byte[querydata.Length + 14];// header tag length is 14
            AddMessageTypeHeaderTag(ref bytes, querydata, "proto", 3380);

            string asciiString = Encoding.ASCII.GetString(bytes);
            // send request
            await webSocket.SendAsync(bytes, WebSocketMessageType.Binary, true, CancellationToken.None);

            // Continue processing after the connection is established
            await HandleWebSocketConnection(webSocket);

            // Close the WebSocket when done
            await webSocket.CloseAsync(WebSocketCloseStatus.NormalClosure, "Closed by the client", CancellationToken.None);
            Console.WriteLine("WebSocket connection closed.");

        }
    }

    static async Task HandleWebSocketConnection(ClientWebSocket webSocket)
    {
        byte[] receiveBuffer = new byte[65535];
        int MaxMessageSize = 65535;
        int bytesReceived = 0;
        bool fragmented = false;

        Dumper dumper = new Dumper();

        var arraySegment = new ArraySegment<byte>(receiveBuffer);
        while (webSocket.State == WebSocketState.Open)
        {
            if (bytesReceived > 0) // Try not to initialize a new ArraySegment unless we really need to
            {
                arraySegment = new ArraySegment<byte>(receiveBuffer, bytesReceived, 2 * MaxMessageSize - bytesReceived);
            }
            //WebSocketReceiveResult receiveResult = await webSocket.ReceiveAsync(new ArraySegment<byte>(receiveBuffer), CancellationToken.None).ConfigureAwait(false); ;
            var receiveResult = await webSocket.ReceiveAsync(arraySegment, CancellationToken.None).ConfigureAwait(false);

            int count = receiveResult.Count;
            if (receiveResult.MessageType == WebSocketMessageType.Close)
            {
                break;
            }

            if (count == 0)
            {
                break;
            }

            // If this is a fragment of a message, save the byte count and skip the rest of the loop

            bytesReceived += count;

            if (!receiveResult.EndOfMessage)
            {
                fragmented = true;
                continue;
            }
            dumper.ProcessBuffer(receiveBuffer, receiveResult.Count);

            bytesReceived = 0;
            if (fragmented)   // If we had a fragmented message, reset back to normal
            {
                fragmented = false;
                arraySegment = new ArraySegment<byte>(receiveBuffer);
            }

            if (receiveResult.MessageType == WebSocketMessageType.Close)
            {
                Console.WriteLine("WebSocket connection closed.");
                break;
            }
        }
    }
    public static void AddMessageTypeHeaderTag(ref byte[] bytes, byte[] querydata, string querytype, int messageType)
    {
        if (querytype == null || querytype.Length == 0 || querytype.ToLower() != "proto") { Console.WriteLine("Invalid MLinkQuery header tag"); return; };

        string header = $"\r\nP00000000000"; // length = 14 e.g., \r\P02960000665 = {J/P}{4-8 MessageTypeNumber}{9-14 MessageLength}
        byte[] headerdata = Encoding.ASCII.GetBytes(header);

        string messageTypeString = messageType.ToString("D5");
        byte[] messageTypeBytes = Encoding.ASCII.GetBytes(messageTypeString);
        System.Buffer.BlockCopy(messageTypeBytes, 0, headerdata, 3, 4);

        // assemble request
        System.Buffer.BlockCopy(headerdata, 0, bytes, 0, headerdata.Length);
        System.Buffer.BlockCopy(querydata, 0, bytes, headerdata.Length, querydata.Length);

        // include the lenth of the message length in the header
        int length = bytes.Length - 14;
        for (int k = 11; length > 0 && k > 0; --k)
        {
            bytes[k + 2] = (byte)((length % 10) + '0');
            length /= 10;

        }
    }
    public static void CreateMlinkStreamRequest(ref MLinkStream query)
    {
        DateTimeOffset now = DateTime.UtcNow;

        query = new MLinkStream();
        query.QueryLabel = "Query.First"; //msgSettings.QueryLabel;
        query.MsgName = "LiveImpliedQuote"; //msgSettings.MessageTypeName;
        query.Where = "ticker:eq:AAPL-NMS-EQT";
        query.ActiveLatency = 1;
        query.StripeFilter = "A";
        query.View = "oBidIv|oAskIv";        
        var mt = new MessageMetadata();
        mt.MessageType = "3380";
        query.Meta = mt;

    }

}
