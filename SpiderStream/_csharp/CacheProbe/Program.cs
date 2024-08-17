using SpiderRock.SpiderStream;
using SpiderRock.SpiderStream.Diagnostics;
using SpiderRock.SpiderStream.Mbus;
using SpiderRock.SpiderStream.MLink;
using System;

namespace CacheProbe;

internal class Program
{
    public static string ApiKey;
    private static void Main(string[] args)
    {
        var requestInterval = TimeSpan.FromSeconds(90);

        DateTime now = DateTime.Now;
        DateTime when;
        TimeSpan startTimeSpan;
        
        if (args.Length == 0)
        {
            Console.WriteLine($"{nameof(CacheProbe)}: API Key is required");
            return;
        }
        ApiKey = args[0];
        string mode = args.Length == 2 ? args[1] : "default";
        DateTime tomorrow = now.AddDays(1);


        switch (mode)
        {
            case "zero":
            case "now":
                when = now;
                startTimeSpan = TimeSpan.Zero;
                break;
            case "12a":
                when = new DateTime(tomorrow.Year, tomorrow.Month, tomorrow.Day, 0, 0, 0);
                startTimeSpan = when - now;
                break;
            case "2a":
                if (now.Hour < 2)
                {
                    when = new DateTime(now.Year, now.Month, now.Day, 2, 0, 0);
                }
                else
                {
                    when = new DateTime(tomorrow.Year, tomorrow.Month, tomorrow.Day, 2, 0, 0);
                }
                startTimeSpan = when - now;
                break;
            default:
                DateTime nextHour = now.AddHours(1);
                when = new DateTime(nextHour.Year, nextHour.Month, nextHour.Day, nextHour.Hour, 0, 0);
                startTimeSpan = when - now;
                break;
        }



        var periodTimeSpan = TimeSpan.FromHours(1);

        SRTrace.Process.TraceInfo($"Next run will be at {when} and every {periodTimeSpan} after");

        var timer = new System.Threading.Timer((e) => DoCacheRequests(2, requestInterval), null, startTimeSpan, periodTimeSpan);

        SRTrace.Process.TraceInfo($"{nameof(CacheProbe)} running. Hit [enter] to exit.");
        Console.ReadLine();
    }
    private static void DoCacheRequests(int limit, TimeSpan sleepFor)
    {
        for (int i = 0; i < limit; i++)
        {
            SRTrace.Process.TraceInfo($"{nameof(DoCacheRequests)}: Cache request {i + 1}");
            DoCacheRequest();
            if (i < limit - 1)
            {
                SRTrace.Process.TraceInfo($"Sleeping for {sleepFor}");
                System.Threading.Thread.Sleep(sleepFor);
            }
        }
    }

    private static void DoCacheRequest()
    {
        SRTrace.Process.TraceInfo($"{nameof(DoCacheRequest)} Start cache request at {DateTime.Now}");

        MessageType[] messageTypes = new MessageType[1];
        messageTypes[0] = (MessageType)1015; // LiveImpliedQuote

        var _ = new MLinkWebSocketClient(
            SysEnvironment.Saturn,
            SysRealm.NMS,
            messageTypes,
            "Cache Probe",
            ApiKey,
            ""
        );
    }
}
