#define TRACK_LATENCIES

using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using SpiderRock.SpiderStream;
using SpiderRock.SpiderStream.Diagnostics;

namespace TimeBoxAnalysis;


internal class Program
{
    private static void Main(string[] args)
    {
        var parsed = Parse(args).ToArray();

        var ifAddrArg = parsed.FirstOrDefault(arg => arg.Name == "-ifAddr");

        if (ifAddrArg == null || !IPAddress.TryParse(ifAddrArg.Values[0], out var ifAddr))
        {
            throw new UsageException($"{nameof(TimeBoxAnalysis)}: -ifAddr must be a valid IPv4 address (i.e. 192.168.0.1) of a local NIC (ipconfig /ALL)");
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

            mbusClient.AddChannelThreadGroup("Stk[A-H]",
                MbusChannel.StkNbboQuoteAB,
                MbusChannel.StkNbboQuoteCD,
                MbusChannel.StkNbboQuoteEF,
                MbusChannel.StkNbboQuoteGH,
                MbusChannel.StkNbboQuoteM,
                MbusChannel.StkNbboQuoteS);


#if TRACK_LATENCIES
            using LatencyTracker latencyTracker = new();
            latencyTracker.Track(mbusClient.StockBookQuote);
#endif


            var stockBookQuoteHandler = new StockBookQuoteHandler();
            mbusClient.StockBookQuote.Changed += stockBookQuoteHandler.OnChange;

            mbusClient.Start();

            SRTrace.Process.TraceInfo($"{nameof(TimeBoxAnalysis)} running. Hit [enter] to exit.");
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
