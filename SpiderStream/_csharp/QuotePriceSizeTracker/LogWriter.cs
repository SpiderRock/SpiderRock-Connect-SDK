using System;
using System.Diagnostics;
using System.IO;
using System.Threading;
using System.Threading.Tasks;
using SpiderRock.SpiderStream.Diagnostics;

namespace QuotePriceSizeTracker;

class LogWriter
{
    public event Action<string,bool> WriteLogs;

    private CancellationTokenSource cancellationTokenSource;
    private TimeSpan logFrequency;
    public string LogBaseDirectory { get; set; }
    public string DataPath { get; set; }

    public LogWriter(TimeSpan freq, string logDir)
    {
        LogFrequency = freq;
        LogBaseDirectory = logDir;
        DataPath = Path.Combine(logDir, "data");
        var dataDir = new FileInfo(DataPath);
        dataDir.Directory.Create();
    }

    private async Task FireWriteLogs(TimeSpan freq, CancellationToken cancellationToken)
    {
        var guid = Guid.NewGuid();
        SRTrace.Default.TraceDebug($"{nameof(FireWriteLogs)} task {guid} running [freq={freq}]");

        try
        {
            while (!cancellationToken.IsCancellationRequested)
            {
                await Task.Delay(freq, cancellationToken);

                foreach (var @delegate in WriteLogs.GetInvocationList())
                {
                    var handler = (Action<string,bool>)@delegate;
                    try
                    {
                        handler(DataPath, false);
                    }
                    catch (Exception e)
                    {
                        SRTrace.Default.TraceError(e);
                    }
                }

            }
        }
        catch (OperationCanceledException)
        {
        }
        catch (ObjectDisposedException)
        {
        }
        catch (Exception e)
        {
            SRTrace.Default.TraceError(e, $"{nameof(SRTrace)}: {nameof(FireWriteLogs)} task {guid} failed [freq={freq}]");
        }
        finally
        {
            SRTrace.Default.TraceDebug($"{nameof(SRTrace)}: {nameof(FireWriteLogs)} task {guid} exited [freq={freq}]");
        }
    }

    public  TimeSpan LogFrequency
    {
        get { return logFrequency; }
        set
        {
            logFrequency = value;
            var cur = new CancellationTokenSource();
            Interlocked.Exchange(ref cancellationTokenSource, cur)?.Cancel(true);
            Task.Run(async () => await FireWriteLogs(logFrequency, cur.Token), cur.Token);
        }
    }
}