using System.Net.WebSockets;
using System.Text;
using Microsoft.Extensions.Configuration;

namespace MLinkExamples
{
    class Program
    {
        private static string authenticationKey = "<your api key>";
        private static MlinkExamples.MsgSettingsConfig msgSettings = new();

        public static async Task Main(string[] args)
        {
            try
            {
                System.Net.ServicePointManager.MaxServicePointIdleTime = int.MaxValue;

                string appsettingspath = Path.GetFullPath(Path.Combine(AppDomain.CurrentDomain.BaseDirectory, @"..\..\..\"));
                var config = new ConfigurationBuilder().SetBasePath(appsettingspath).AddJsonFile("appsettings.json");
                IConfiguration configuration = config.Build();
                configuration.GetSection("Message").Bind(msgSettings);

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
                Uri serverUri = new Uri("wss://mlink-live.nms.saturn.spiderrockconnect.com/mlink/json");                
                ws.Options.SetRequestHeader("Authorization", $"Bearer {authenticationKey}");
                ws.Options.KeepAliveInterval = TimeSpan.Zero;

                await ws.ConnectAsync(serverUri, CancellationToken.None);


                // construct JSON request                 
                string data = CreateJsonRequestString();

                // Add query type tag with length of the message
                byte[] querydata = System.Text.Encoding.ASCII.GetBytes(data);
                byte[] bytes = new byte[querydata.Length + 14];// header tag length is 14
                AddMessageTypeHeaderTag(ref bytes, querydata, "json");

                // send request
                await ws.SendAsync(bytes, WebSocketMessageType.Binary, true, CancellationToken.None);


                // receive and process results
                var buf = new byte[65536];
                int noOfMessages = 20;                
                WebSocketReceiveResult? result = null;

                while (noOfMessages > 0)
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
                                --noOfMessages;
                            }
                        }
                    } while (!result.EndOfMessage);
                }

                if (ws.State == WebSocketState.Open)
                {
                    // close the websocket
                    await ws.CloseAsync(WebSocketCloseStatus.NormalClosure, null, CancellationToken.None);
                }
            }
        }

        public static string CreateJsonRequestString()
        {
            DateTimeOffset now = DateTime.UtcNow;
            var tstr = now.ToString("yyyy-MM-dd hh:mm:ss.ffffff");

            string tickerString = "";
            List<string> tickerList = new List<string>();
            if (msgSettings.TickerList != null) { tickerList = msgSettings.TickerList.Split(',').ToList(); }
            foreach (string ticker in tickerList)
            {
                tickerString += $"ticker.tk:eq:{ticker}|";
            }
            tickerString = tickerString.TrimEnd('|');

            string data = $"{{\"header\":" +
            $"{{\"mTyp\":\"{msgSettings.MlinkLabel}\"," +
            $"\"sTim\":\"{tstr}\"," +
            $"\"encT\":\"{tstr}\"}}," +
            $"\"message\": {{\"queryLabel\":\"{msgSettings.QueryLabel}\"," +
            $"\"activeLatency\": 1," +
            $"\"msgName\":\"{msgSettings.MessageTypeName}\"," +
            $"\"where\":\"{tickerString}\" }}}}";
            
            return data;
        }

        public static void AddMessageTypeHeaderTag(ref byte[] bytes, byte[] querydata, string? querytype)
        {
            if (querytype == null || querytype.Length == 0 || querytype.ToLower() != "json") { Console.WriteLine("Invalid MLinkStream header tag"); return; };

            string header = $"\r\nJ00000000000"; // json is default, length = 14 e.g., \r\nJ02960000665 = {J}{4-8 MessageTypeNumber}{9-14 MessageLength}
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
            string asciiString = Encoding.ASCII.GetString(bytes);
            Console.WriteLine(asciiString);
        }

    }
}
