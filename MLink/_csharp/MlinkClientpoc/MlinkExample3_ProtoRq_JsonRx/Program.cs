using System;
using System.Net.WebSockets;
using System.Text;
using Google.Protobuf;
using Microsoft.Extensions.Configuration;
using Spiderrock.Protobuf;

namespace MLinkExamples
{
    class Program
    {
        private static string authenticationKey = "<Add your key here>";
        private static MlinkExamples.MsgSettingsConfig msgSettings = new();

        public static async Task Main(string[] args)
        {

            try
            {
                System.Net.ServicePointManager.MaxServicePointIdleTime = int.MaxValue;

              /*  string appsettingspath = Path.GetFullPath(Path.Combine(AppDomain.CurrentDomain.BaseDirectory, "..\\..\\"));
                var config = new ConfigurationBuilder().SetBasePath(appsettingspath).AddJsonFile("appsettings.json");
                IConfiguration configuration = config.Build();
                configuration.GetSection("Message").Bind(msgSettings);*/

                await DoClientWebSocketRequest();
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.ToString());
            }
        }

        public static async Task DoClientWebSocketRequest()
        {
            using (ClientWebSocket ws = new ClientWebSocket())
            {
                // connect to MLink
                Uri serverUri = new Uri("wss://mlink-live.nms.saturn.spiderrockconnect.com/mlink/proto");

                ws.Options.SetRequestHeader("Authorization", $"Bearer {authenticationKey}");
                ws.Options.KeepAliveInterval = TimeSpan.Zero;

                await ws.ConnectAsync(serverUri, CancellationToken.None);

                // construct Mlink stream request 
                var stream = new MLinkStream();
                CreateMlinkStreamRequest(ref stream);

                // Add stream type tag with length of the message
                byte[] querydata = stream.ToByteArray();
                byte[] bytes = new byte[querydata.Length + 14];// header tag length is 14
                AddMessageTypeHeaderTag(ref bytes, querydata, "proto");

                // send request
                await ws.SendAsync(bytes, WebSocketMessageType.Binary, true, CancellationToken.None);

                // receive and process results
                var buf = new byte[65536];
                bool notDone = true;
                string complete_status = "\"state\":\"Complete\"";
                byte[] complete_pattern = Encoding.ASCII.GetBytes(complete_status);

                WebSocketReceiveResult? result = null;
                while (notDone)
                {
                    do
                    {
                        result = await ws.ReceiveAsync(buf, CancellationToken.None).ConfigureAwait(false);

                        if (result.Count > 0)
                        {
                            using (MemoryStream memStream = new MemoryStream())
                            {
                                memStream.Write(buf.ToArray(), 0, result.Count);
                                var memData = Encoding.ASCII.GetString(memStream.ToArray());
                                Console.WriteLine(memData);
                                if (memData.Contains(complete_status, StringComparison.InvariantCultureIgnoreCase)) notDone = false;
                            }
                        }
                        Array.Clear(buf, 0, buf.Length);
                    } while (!result.EndOfMessage);
                }

                if (ws.State == WebSocketState.Open)
                {
                    // close the websocket
                    await ws.CloseAsync(WebSocketCloseStatus.NormalClosure, null, CancellationToken.None);
                }
            }
        }

        public static void CreateMlinkStreamRequest(ref MLinkStream query)
        {
            DateTimeOffset now = DateTime.UtcNow;
            query = new MLinkStream();
            query.QueryLabel = "Query.First"; //msgSettings.QueryLabel;
            query.MsgName = "StockBookQuote"; //msgSettings.MessageTypeName;
            query.Where = "ticker:eq:AAPL-NMS-EQT";
            query.ActiveLatency = 0;
            var mt = new MessageMetadata();
            mt.MessageType = "3380";
            query.Meta = mt;

        }

        public static void AddMessageTypeHeaderTag(ref byte[] bytes, byte[] querydata, string querytype)
        {
            if (querytype == null || querytype.Length == 0 || querytype.ToLower() != "proto") { Console.WriteLine("Invalid MLinkQuery header tag"); return; };

            string header = $"\r\nP00000000000"; // length = 14 e.g., \r\P02960000665 = {J/P}{4-8 MessageTypeNumber}{9-14 MessageLength}

            byte[] headerdata = Encoding.ASCII.GetBytes(header);

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
    }
}
