using System;
using System.Collections.Concurrent;
using System.Diagnostics;
using System.Threading;
using System.IO;
using System.Runtime.CompilerServices;
using SpiderRock.SpiderStream;
using SpiderRock.SpiderStream.Diagnostics;

namespace QuotePriceSizeTracker;


public class StockBookQuoteMeasurements
{
    private int count;
    private int bidPrice1Changes;
    private int askPrice1Changes;
    private int bidSize1Changes;
    private int askSize1Changes;
    private int bidPrice2Changes;
    private int askPrice2Changes;
    private int bidSize2Changes;
    private int askSize2Changes;

    private long bidPrice1Checksum;
    private long bidPrice2Checksum;
    private long askPrice1Checksum;
    private long askPrice2Checksum;

    public static string Header = "Count,AskPrice1Checksum,BidPrice1Checksum,AskPrice2Checksum,BidPrice2Checksum,AskPrice1Changes,BidPrice1Changes,AskPrice2Changes,BidPrice2Changes,BidSize1Changes,AskSize1Changes,BidSize2Changes,AskSize2Changes";

    public void Update(StockBookQuote current, StockBookQuote previous)
    {
        var ts = current.SrcTimestamp;
        count++;

        if (isDifferent(current.AskPrice1,previous.AskPrice1)) { 
            askPrice1Changes++; 
            updateChecksum(current.SrcTimestamp, current.AskPrice1, ref askPrice1Checksum); 
        };

        if (isDifferent(current.BidPrice1, previous.BidPrice1)) { 
            bidPrice1Changes++;
            updateChecksum(current.SrcTimestamp, current.BidPrice1, ref bidPrice1Checksum);
        };

        if (isDifferent(current.AskPrice2, previous.AskPrice2)) { 
            askPrice2Changes++;
            updateChecksum(current.SrcTimestamp, current.AskPrice2, ref askPrice2Checksum);
        };
        if (isDifferent(current.BidPrice2, previous.BidPrice2)) { 
            bidPrice2Changes++;
            updateChecksum(current.SrcTimestamp, current.BidPrice2, ref bidPrice2Checksum);
        };

        if (current.BidSize1 != previous.BidSize1) { bidSize1Changes++; };
        if (current.AskSize1 != previous.AskSize1) { askSize1Changes++; };
        if (current.BidSize2 != previous.BidSize2) { bidSize2Changes++; };
        if (current.AskSize2 != previous.AskSize2) { askSize2Changes++; };
    }

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    private bool isDifferent(float current, float previous)
    {
        return Math.Abs(current - previous) > 0.0001;
    }

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    private void updateChecksum(long ts, float price, ref long checksum)
    {
        long roundedPrice = (long)price * 10000;
        checksum += ts * roundedPrice;
    }

    public override string ToString()
    {
        return $"{count},{askPrice1Checksum},{bidPrice1Checksum},{askPrice2Checksum},{bidPrice2Checksum},{askPrice1Changes},{bidPrice1Changes},{askPrice2Changes},{bidPrice2Changes},{bidSize1Changes},{askSize1Changes},{bidSize2Changes},{askSize2Changes}";
    }
}


public class StockBookQuoteHandler
{
    private ConcurrentDictionary<long, ConcurrentDictionary<string, StockBookQuoteMeasurements>> measurements = new();

    private string name;
    private string stripe;
    private long bucketSize;
    private long bucketWatermark = 0;
    private ConcurrentDictionary<string, StockBookQuoteMeasurements> workingBucket;

    public StockBookQuoteHandler(string stripe, long bucketSize)
    {
        this.stripe = stripe;
        name = $"StockBookQuote-{stripe}";
        this.bucketSize = bucketSize;
    }

    public void OnUpdate(object sender, UpdatedEventArgs<StockBookQuote> args)
    {
        var ticker = args.Previous.Key.Ticker.ToString();
        var ts = args.Current.SrcTimestamp / 100; // ns to ticks
        long bucket = ts / bucketSize;
        
        if (ts == 0)
        {
            SRTrace.Process.TraceWarning($"StockBookQuote {ticker} has ts of 0 ({bucketWatermark}). Ignoring message.");
            return;
        }

        if (bucket > bucketWatermark)
        {
            bucketWatermark = bucket;
        }
            
        if (!measurements.TryGetValue(bucket, out workingBucket))
        {
            if (bucket < bucketWatermark)
            {
                var howLate = ts % bucketSize;

                SRTrace.Process.TraceWarning($"StockBookQuote {ticker} late arriving message ignored: {bucket}/{bucketWatermark}/{howLate}/{ts}");
                return;
            }

            workingBucket = new ConcurrentDictionary<string, StockBookQuoteMeasurements>();
            measurements[bucket] = workingBucket;
        }


        var m = workingBucket.GetOrAdd(ticker, (string t) => new StockBookQuoteMeasurements());
        m.Update(args.Current, args.Previous);

    }

    public void WriteLogs(string logBaseDirectory, bool final)
    {
        SRTrace.Process.TraceDebug($"StockBookQuote WriteLogs {measurements.Count}");

        DateTimeOffset utcNow = DateTimeOffset.UtcNow;
        long now = utcNow.ToUnixTimeSeconds() - 1;
        long bucketSeconds;

        foreach (var bucket in measurements.Keys)
        {
            bucketSeconds = (bucket * bucketSize) / TimeSpan.TicksPerSecond;
            if (now < bucketSeconds) { continue; }
            SRTrace.Process.TraceInfo($"Saving StockBookQuote {bucket}");

            if (!measurements.TryRemove(bucket, out var data))
            {
                SRTrace.Process.TraceError($"Unable to get data for StockBookQuote {bucket}");
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
                    writer.WriteLine($"Bucket,Key,{StockBookQuoteMeasurements.Header}");
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
