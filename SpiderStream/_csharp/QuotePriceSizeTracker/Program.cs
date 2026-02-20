#define TRACK_LATENCIES

using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using SpiderRock.SpiderStream;
using SpiderRock.SpiderStream.Diagnostics;

namespace QuotePriceSizeTracker;


internal class Program
{
    public readonly static TimeSpan BucketSize = TimeSpan.FromMinutes(15);
    private static void Main(string[] args)
    {
        var parsed = Parse(args).ToArray();

        var ifAddrArg = parsed.FirstOrDefault(arg => arg.Name == "-ifAddr");

        if (ifAddrArg == null || !IPAddress.TryParse(ifAddrArg.Values[0], out var ifAddr))
        {
            throw new UsageException("-ifAddr must be a valid IPv4 address (i.e. 192.168.0.1) of a local NIC (ipconfig /ALL)");
        }

        var apiKey = parsed.FirstOrDefault(arg => arg.Name == "-apiKey")?.Values[0];

        var logBaseDir =  @"C:\SRDiagnostics";
        var logBaseDirArg = parsed.FirstOrDefault(args => args.Name == "-logBaseDir");
        if(logBaseDirArg != null) {
            logBaseDir = logBaseDirArg.Values[0];
        }

        SysEnvironment sysEnvironment = SysEnvironment.Mars;
        var envArg = parsed.FirstOrDefault(args => args.Name == "-environment");
        if (envArg != null)
        {
            switch (envArg.Values[0]) {
                case "Mars":
                    sysEnvironment = SysEnvironment.Mars;
                    break;
                case "Venus":
                    sysEnvironment = SysEnvironment.Venus;
                    break;
                case "Saturn":
                    sysEnvironment = SysEnvironment.Saturn;
                    break;
                default:
                    throw new UsageException($"-environment may be one of Mars, Venus or Saturn: {envArg.Values[0]} unknown.");

            }
        }

        MbusClient mbusClient = null;
        
        try
        {
            mbusClient = new MbusClient(sysEnvironment)
            {
                LocalInterface = ifAddr,
                ApiKey = apiKey,
                LogBaseDirectory = logBaseDir
            };

            // All updates are handled by a single thread
            // This may need to be changed 
            mbusClient.AddChannelThreadGroup("Opt[A-HMTX]/Stk[A-H]",
                MbusChannel.OptNbboQuoteA,
                MbusChannel.OptNbboQuoteB,
                MbusChannel.OptNbboQuoteC,
                MbusChannel.OptNbboQuoteD,
                MbusChannel.OptNbboQuoteE,
                MbusChannel.OptNbboQuoteF,
                MbusChannel.OptNbboQuoteG,
                MbusChannel.OptNbboQuoteH,
                MbusChannel.OptNbboQuoteM,
                MbusChannel.OptNbboQuoteT,
                MbusChannel.OptNbboQuoteX1,
                MbusChannel.OptNbboQuoteX2,
                MbusChannel.OptNbboQuoteX3,
                MbusChannel.OptNbboQuoteX4,
                MbusChannel.StkNbboQuoteAB,
                MbusChannel.StkNbboQuoteCD,
                MbusChannel.StkNbboQuoteEF,
                MbusChannel.StkNbboQuoteGH);


#if TRACK_LATENCIES
            using LatencyTracker latencyTracker = new();
            latencyTracker.Track(mbusClient.StockBookQuote);
            latencyTracker.Track(mbusClient.StockPrint, TimeSpan.FromMilliseconds(1));
            latencyTracker.Track(mbusClient.IndexQuote);
            latencyTracker.Track(mbusClient.OptionNbboQuote);
            latencyTracker.Track(mbusClient.OptionPrint, TimeSpan.FromMilliseconds(1));
#endif


            var stockBookQuoteHandler = new StockBookQuoteHandler("all", BucketSize.Ticks);
            mbusClient.StockBookQuote.Updated += stockBookQuoteHandler.OnUpdate;

            var optionBookQuoteHandler = new OptionBookQuoteHandler("all", BucketSize.Ticks);
            mbusClient.OptionNbboQuote.Updated += optionBookQuoteHandler.OnUpdate;

            LogWriter logWriter = new(BucketSize, logBaseDir);
            logWriter.WriteLogs += stockBookQuoteHandler.WriteLogs;
            logWriter.WriteLogs += optionBookQuoteHandler.WriteLogs;

            mbusClient.Start();

            DateTimeOffset now = DateTimeOffset.UtcNow;
            long unixTimeSeconds = now.ToUnixTimeSeconds();

            long secondsPerBucket = BucketSize.Ticks / TimeSpan.FromSeconds(1).Ticks;
            Console.WriteLine($"Current time in seconds since the epoch: {unixTimeSeconds} {secondsPerBucket}");

            Console.ReadLine();
        }
        catch (Exception e)
        {
            Console.Error.WriteLine($"Engine failed to start: {e}");
            Console.ReadLine();
        }
        finally
        {
            if (mbusClient != null)
            {
                mbusClient.Dispose();
            }
        }
    }
    private static IEnumerable<Arg> Parse(string[] args)
    {
        Arg current = null;

        foreach (var arg in args)
        {
            if (arg.StartsWith("-"))
            {
                if (current != null) yield return current;
                current = new Arg(arg);
            }
            else if (current != null)
            {
                current.Values.Add(arg);
            }
        }

        if (current != null) yield return current;
    }
    private class UsageException : Exception
    {
        public UsageException(string message) : base(message)
        {
        }
    }

    private class Arg
    {
        public Arg(string name)
        {
            Name = name;
            Values = new List<string>();
        }

        public string Name { get; private set; }
        public List<string> Values { get; private set; }
    }
}
