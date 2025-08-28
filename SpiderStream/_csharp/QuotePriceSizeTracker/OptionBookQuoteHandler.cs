using System;
using System.Collections.Concurrent;
using System.Diagnostics;
using System.IO;
using System.Runtime.CompilerServices;
using SpiderRock.SpiderStream;
using SpiderRock.SpiderStream.Diagnostics;

namespace QuotePriceSizeTracker;

public class OptionNbboQuoteMeasurements
{
    private int bidPriceChanges;
    private int askPriceChanges;
    private int bidSizeChanges;
    private int askSizeChanges;
    private long askPriceChecksum;
    private long bidPriceChecksum;
    private int count;

    public static string Header = "Count,BidPriceChecksum,AskPriceChecksum,BidPriceChanges,AskPriceChanges,BidSizeChanges,AskSizeChanges";


    public void Update(OptionNbboQuote current, OptionNbboQuote previous)
    {
        count++;

        if (IsDifferent(current.AskPrice, previous.AskPrice)) {
            UpdateChecksum(current.SrcTimestamp, current.AskPrice, ref askPriceChecksum);
            askPriceChanges++; 
        };

        if (IsDifferent(current.BidPrice, previous.BidPrice)) {
            UpdateChecksum(current.SrcTimestamp, current.BidPrice, ref bidPriceChecksum);

            bidPriceChanges++;
        };

        if (current.BidSize != previous.BidSize) { bidSizeChanges++; };
        if (current.AskSize != previous.AskSize) { askSizeChanges++; };
    }

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public void UpdateChecksum(long ts, float price, ref long checksum)
    {
        long roundedPrice = (long)price * 10000;
        checksum += ts * roundedPrice;
    }

    public override string ToString()
    {
        return $"{count},{bidPriceChecksum},{askPriceChecksum},{bidPriceChanges},{askPriceChanges},{bidSizeChanges},{askSizeChanges}";
    }

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    private bool IsDifferent(float current, float previous)
    {
        return Math.Abs(current - previous) > 0.0001;
    }
}


public class OptionBookQuoteHandler
{
    private ConcurrentDictionary<long, ConcurrentDictionary<string, OptionNbboQuoteMeasurements>> measurements = new();

    private string name;
    private string stripe;
    private long bucketSize;
    private long bucketWatermark = 0;
    private ConcurrentDictionary<string, OptionNbboQuoteMeasurements> workingBucket;

    public OptionBookQuoteHandler(string stripe, long bucketSize) 
    {
        this.stripe = stripe;
        name = $"OptionNbboQuote-{stripe}";
        this.bucketSize = bucketSize;
    }

    public void OnUpdate(object sender, UpdatedEventArgs<OptionNbboQuote> args)
    {
        var root = args.Previous.Key.Okey.Root;
        var ts = args.Current.SrcTimestamp / 100; // ns to ticks
        long bucket = ts / bucketSize;

        if(ts == 0)
        {
            SRTrace.Process.TraceWarning($"OptionNbboQuote {root} has ts of 0 ({bucketWatermark}). Ignoring message.");
            return;
        }

        if (bucket > bucketWatermark)
        {
            bucketWatermark = bucket;
        }

        if(!measurements.TryGetValue(bucket, out workingBucket))
        {
            if (bucket < bucketWatermark)
            {
                var howLate = ts % bucketSize;

                SRTrace.Process.TraceWarning($"OptionNbboQuote {root} late arriving message ignored: {bucket}/{bucketWatermark}/{howLate}/{ts}");
                return;
            }

            workingBucket = new ConcurrentDictionary<string, OptionNbboQuoteMeasurements>();
            measurements[bucket] = workingBucket;
        }

        OptionNbboQuoteMeasurements m = workingBucket.GetOrAdd(root, (string t) => new OptionNbboQuoteMeasurements());
        m.Update(args.Current, args.Previous);
    }

    public void WriteLogs(string logBaseDirectory, bool final)
    {
        SRTrace.Process.TraceDebug($"OptionNbboQuote WriteLogs {measurements.Count}");

        DateTimeOffset utcNow = DateTimeOffset.UtcNow;
        long now = utcNow.ToUnixTimeSeconds() - 1;
        long bucketSeconds;

        foreach (var bucket in measurements.Keys)
        {
            bucketSeconds = (bucket * bucketSize) / TimeSpan.TicksPerSecond;
            if (now < bucketSeconds) { continue; }
            SRTrace.Process.TraceInfo($"Saving OptionNbboQuote {bucket}");

            if (!measurements.TryRemove(bucket, out var data))
            {
                SRTrace.Process.TraceError($"Unable to get data for OptionNbboQuote {bucket}");
                return;
            };

            var logPath = Path.Combine(logBaseDirectory, $"{name}-{bucketSeconds}.csv");
            var logFile = new FileInfo(logPath);

            if (logFile.Directory != null)
            {
                logFile.Directory.Create();
            }
            try
            {
                using (StreamWriter writer = new StreamWriter(logPath))
                {
                    writer.WriteLine($"Bucket,Key,{OptionNbboQuoteMeasurements.Header}");
                    foreach (var (key, value) in data)
                    {
                        writer.WriteLine($"{bucket},{key},{value}");
                    }
                }
                SRTrace.Process.TraceInfo($"Data written to {logPath}");
            }
            catch (Exception ex)
            {
                SRTrace.Process.TraceError($"Unable to write data {logPath}: {ex.Message}");
            }
        }
    }
}
