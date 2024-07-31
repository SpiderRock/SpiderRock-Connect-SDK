using System.Net;
namespace SpiderRock.SpiderStream;

public static partial class MbusChannel
{
    /*
     * When synchronizing this with net.Channel contents, the regex is ^.*?=\s*(\w+).*?=\s*([^,]+).*$  
     * to be replaced with
     * public static IPEndPoint $1 { get; } = RegisteredIPEndPoint.Create(Environment, $2, nameof($1));\r\n
     */

    private static SysEnvironment _environment = SysEnvironment.Saturn;
    public static SysEnvironment Environment {
        get { return _environment; }
        set { _environment = value; UpdateEnvironment(); }
    }

    static MbusChannel()
    {
        UpdateEnvironment();
    }

    public static IPEndPoint StkNbboQuoteAB { get; private set; }
    public static IPEndPoint StkNbboQuoteCD { get; private set; }
    public static IPEndPoint StkNbboQuoteEF { get; private set; }
    public static IPEndPoint StkNbboQuoteGH { get; private set; }
    public static IPEndPoint StkNbboQuoteM { get; private set; }
    public static IPEndPoint StkNbboQuoteS { get; private set; }
    public static IPEndPoint StkNbboQuoteJ1 { get; private set; }
    public static IPEndPoint NmsSpreadQuote { get; private set; }
    public static IPEndPoint SRSynthetic { get; private set; }
    public static IPEndPoint FutNbboQuoteV { get; private set; }
    public static IPEndPoint FutNbboQuoteX { get; private set; }
    public static IPEndPoint CmeAdmin { get; private set; }
    public static IPEndPoint CfeAdmin { get; private set; }
    public static IPEndPoint EqtAdmin { get; private set; }
    public static IPEndPoint FundQuoteJ2J3J4J5 { get; private set; }
    public static IPEndPoint IdxQuoteI1 { get; private set; }
    public static IPEndPoint IdxQuoteI2 { get; private set; }
    public static IPEndPoint IdxQuoteI3 { get; private set; }
    public static IPEndPoint IdxQuoteI4 { get; private set; }
    public static IPEndPoint StkQuoteProbABCD { get; private set; }
    public static IPEndPoint StkQuoteProbEFGH { get; private set; }
    public static IPEndPoint StkQuoteProbM { get; private set; }
    public static IPEndPoint StkQuoteProbS { get; private set; }
    public static IPEndPoint FutQuoteProbV { get; private set; }
    public static IPEndPoint FutQuoteProbX1 { get; private set; }
    public static IPEndPoint FutQuoteProbX2 { get; private set; }
    public static IPEndPoint FutQuoteProbX3 { get; private set; }
    public static IPEndPoint FutQuoteProbX4 { get; private set; }
    public static IPEndPoint OptQuoteProbAB { get; private set; }
    public static IPEndPoint OptQuoteProbCD { get; private set; }
    public static IPEndPoint OptQuoteProbEF { get; private set; }
    public static IPEndPoint OptQuoteProbGH { get; private set; }
    public static IPEndPoint OptQuoteProbM { get; private set; }
    public static IPEndPoint OptQuoteProbS { get; private set; }
    public static IPEndPoint OptQuoteProbX1 { get; private set; }
    public static IPEndPoint OptQuoteProbX2 { get; private set; }
    public static IPEndPoint OptQuoteProbX3 { get; private set; }
    public static IPEndPoint OptQuoteProbX4 { get; private set; }
    public static IPEndPoint OptNbboQuoteA { get; private set; }
    public static IPEndPoint OptNbboQuoteB { get; private set; }
    public static IPEndPoint OptNbboQuoteC { get; private set; }
    public static IPEndPoint OptNbboQuoteD { get; private set; }
    public static IPEndPoint OptNbboQuoteE { get; private set; }
    public static IPEndPoint OptNbboQuoteF { get; private set; }
    public static IPEndPoint OptNbboQuoteG { get; private set; }
    public static IPEndPoint OptNbboQuoteH { get; private set; }
    public static IPEndPoint OptNbboQuoteM { get; private set; }
    public static IPEndPoint OptNbboQuoteS { get; private set; }
    public static IPEndPoint OptNbboQuoteX1 { get; private set; }
    public static IPEndPoint OptNbboQuoteX2 { get; private set; }
    public static IPEndPoint OptNbboQuoteX3 { get; private set; }
    public static IPEndPoint OptNbboQuoteX4 { get; private set; }
    public static IPEndPoint OptNbboQuoteT { get; private set; }
    public static IPEndPoint CobExchQuoteIse { get; private set; }
    public static IPEndPoint CobExchQuoteCboe { get; private set; }
    public static IPEndPoint CobExchQuotePhlx { get; private set; }
    public static IPEndPoint SyntheticQuote { get; private set; }
    public static IPEndPoint C1OpenAuction { get; private set; }
    public static IPEndPoint OptOrder { get; private set; }
    public static IPEndPoint OptOrderPhlx { get; private set; }
    public static IPEndPoint OptOrderCboe { get; private set; }
    public static IPEndPoint OptOrderC2 { get; private set; }
    public static IPEndPoint OptOrderIse { get; private set; }
    public static IPEndPoint OptOrderBox { get; private set; }
    public static IPEndPoint OptOrderMiax { get; private set; }
    public static IPEndPoint OptOrderEmld { get; private set; }
    public static IPEndPoint OptOrderNyse { get; private set; }
    public static IPEndPoint Imbalance { get; private set; }
    public static IPEndPoint ImbalanceArca { get; private set; }
    public static IPEndPoint ImbalanceNyse { get; private set; }
    public static IPEndPoint ImbalanceNasdaq { get; private set; }
    public static IPEndPoint StkPrintMarkup { get; private set; }
    public static IPEndPoint OptPrintMarkup { get; private set; }
    public static IPEndPoint FutPrintMarkupV { get; private set; }
    public static IPEndPoint FutPrintMarkupX1 { get; private set; }
    public static IPEndPoint FutPrintMarkupX2 { get; private set; }
    public static IPEndPoint FutPrintMarkupX3 { get; private set; }
    public static IPEndPoint FutPrintMarkupX4 { get; private set; }
    public static IPEndPoint LiveImpliedQuoteAB { get; private set; }
    public static IPEndPoint LiveImpliedQuoteCD { get; private set; }
    public static IPEndPoint LiveImpliedQuoteEF { get; private set; }
    public static IPEndPoint LiveImpliedQuoteGH { get; private set; }
    public static IPEndPoint LiveImpliedQuoteM { get; private set; }
    public static IPEndPoint LiveImpliedQuoteS { get; private set; }
    public static IPEndPoint LiveImpliedQuoteX1 { get; private set; }
    public static IPEndPoint LiveImpliedQuoteX2 { get; private set; }
    public static IPEndPoint LiveImpliedQuoteX3 { get; private set; }
    public static IPEndPoint LiveImpliedQuoteX4 { get; private set; }
    public static IPEndPoint LiveImpliedQuoteT { get; private set; }

    public static void UpdateEnvironment() {
        StkNbboQuoteAB = RegisteredIPEndPoint.Create(Environment, 1, nameof(StkNbboQuoteAB));
        StkNbboQuoteCD = RegisteredIPEndPoint.Create(Environment, 2, nameof(StkNbboQuoteCD));
        StkNbboQuoteEF = RegisteredIPEndPoint.Create(Environment, 3, nameof(StkNbboQuoteEF));
        StkNbboQuoteGH = RegisteredIPEndPoint.Create(Environment, 4, nameof(StkNbboQuoteGH));
        StkNbboQuoteM = RegisteredIPEndPoint.Create(Environment, 5, nameof(StkNbboQuoteM));
        StkNbboQuoteS = RegisteredIPEndPoint.Create(Environment, 6, nameof(StkNbboQuoteS));
        StkNbboQuoteJ1 = RegisteredIPEndPoint.Create(Environment, 7, nameof(StkNbboQuoteJ1));
        NmsSpreadQuote = RegisteredIPEndPoint.Create(Environment, 17, nameof(NmsSpreadQuote));
        SRSynthetic = RegisteredIPEndPoint.Create(Environment, 18, nameof(SRSynthetic));
        FutNbboQuoteV = RegisteredIPEndPoint.Create(Environment, 20, nameof(FutNbboQuoteV));
        FutNbboQuoteX = RegisteredIPEndPoint.Create(Environment, 21, nameof(FutNbboQuoteX));
        CmeAdmin = RegisteredIPEndPoint.Create(Environment, 25, nameof(CmeAdmin));
        CfeAdmin = RegisteredIPEndPoint.Create(Environment, 27, nameof(CfeAdmin));
        EqtAdmin = RegisteredIPEndPoint.Create(Environment, 28, nameof(EqtAdmin));
        FundQuoteJ2J3J4J5 = RegisteredIPEndPoint.Create(Environment, 39, nameof(FundQuoteJ2J3J4J5));
        IdxQuoteI1 = RegisteredIPEndPoint.Create(Environment, 51, nameof(IdxQuoteI1));
        IdxQuoteI2 = RegisteredIPEndPoint.Create(Environment, 52, nameof(IdxQuoteI2));
        IdxQuoteI3 = RegisteredIPEndPoint.Create(Environment, 53, nameof(IdxQuoteI3));
        IdxQuoteI4 = RegisteredIPEndPoint.Create(Environment, 54, nameof(IdxQuoteI4));
        StkQuoteProbABCD = RegisteredIPEndPoint.Create(Environment, 81, nameof(StkQuoteProbABCD));
        StkQuoteProbEFGH = RegisteredIPEndPoint.Create(Environment, 82, nameof(StkQuoteProbEFGH));
        StkQuoteProbM = RegisteredIPEndPoint.Create(Environment, 83, nameof(StkQuoteProbM));
        StkQuoteProbS = RegisteredIPEndPoint.Create(Environment, 84, nameof(StkQuoteProbS));
        FutQuoteProbV = RegisteredIPEndPoint.Create(Environment, 85, nameof(FutQuoteProbV));
        FutQuoteProbX1 = RegisteredIPEndPoint.Create(Environment, 86, nameof(FutQuoteProbX1));
        FutQuoteProbX2 = RegisteredIPEndPoint.Create(Environment, 87, nameof(FutQuoteProbX2));
        FutQuoteProbX3 = RegisteredIPEndPoint.Create(Environment, 88, nameof(FutQuoteProbX3));
        FutQuoteProbX4 = RegisteredIPEndPoint.Create(Environment, 89, nameof(FutQuoteProbX4));
        OptQuoteProbAB = RegisteredIPEndPoint.Create(Environment, 91, nameof(OptQuoteProbAB));
        OptQuoteProbCD = RegisteredIPEndPoint.Create(Environment, 92, nameof(OptQuoteProbCD));
        OptQuoteProbEF = RegisteredIPEndPoint.Create(Environment, 93, nameof(OptQuoteProbEF));
        OptQuoteProbGH = RegisteredIPEndPoint.Create(Environment, 94, nameof(OptQuoteProbGH));
        OptQuoteProbM = RegisteredIPEndPoint.Create(Environment, 95, nameof(OptQuoteProbM));
        OptQuoteProbS = RegisteredIPEndPoint.Create(Environment, 96, nameof(OptQuoteProbS));
        OptQuoteProbX1 = RegisteredIPEndPoint.Create(Environment, 100, nameof(OptQuoteProbX1));
        OptQuoteProbX2 = RegisteredIPEndPoint.Create(Environment, 101, nameof(OptQuoteProbX2));
        OptQuoteProbX3 = RegisteredIPEndPoint.Create(Environment, 102, nameof(OptQuoteProbX3));
        OptQuoteProbX4 = RegisteredIPEndPoint.Create(Environment, 103, nameof(OptQuoteProbX4));
        OptNbboQuoteA = RegisteredIPEndPoint.Create(Environment, 110, nameof(OptNbboQuoteA));
        OptNbboQuoteB = RegisteredIPEndPoint.Create(Environment, 111, nameof(OptNbboQuoteB));
        OptNbboQuoteC = RegisteredIPEndPoint.Create(Environment, 112, nameof(OptNbboQuoteC));
        OptNbboQuoteD = RegisteredIPEndPoint.Create(Environment, 113, nameof(OptNbboQuoteD));
        OptNbboQuoteE = RegisteredIPEndPoint.Create(Environment, 114, nameof(OptNbboQuoteE));
        OptNbboQuoteF = RegisteredIPEndPoint.Create(Environment, 115, nameof(OptNbboQuoteF));
        OptNbboQuoteG = RegisteredIPEndPoint.Create(Environment, 116, nameof(OptNbboQuoteG));
        OptNbboQuoteH = RegisteredIPEndPoint.Create(Environment, 117, nameof(OptNbboQuoteH));
        OptNbboQuoteM = RegisteredIPEndPoint.Create(Environment, 118, nameof(OptNbboQuoteM));
        OptNbboQuoteS = RegisteredIPEndPoint.Create(Environment, 119, nameof(OptNbboQuoteS));
        OptNbboQuoteX1 = RegisteredIPEndPoint.Create(Environment, 125, nameof(OptNbboQuoteX1));
        OptNbboQuoteX2 = RegisteredIPEndPoint.Create(Environment, 126, nameof(OptNbboQuoteX2));
        OptNbboQuoteX3 = RegisteredIPEndPoint.Create(Environment, 127, nameof(OptNbboQuoteX3));
        OptNbboQuoteX4 = RegisteredIPEndPoint.Create(Environment, 128, nameof(OptNbboQuoteX4));
        OptNbboQuoteT = RegisteredIPEndPoint.Create(Environment, 129, nameof(OptNbboQuoteT));
        CobExchQuoteIse = RegisteredIPEndPoint.Create(Environment, 150, nameof(CobExchQuoteIse));
        CobExchQuoteCboe = RegisteredIPEndPoint.Create(Environment, 151, nameof(CobExchQuoteCboe));
        CobExchQuotePhlx = RegisteredIPEndPoint.Create(Environment, 152, nameof(CobExchQuotePhlx));
        SyntheticQuote = RegisteredIPEndPoint.Create(Environment, 158, nameof(SyntheticQuote));
        C1OpenAuction = RegisteredIPEndPoint.Create(Environment, 159, nameof(C1OpenAuction));
        OptOrder = RegisteredIPEndPoint.Create(Environment, 161, nameof(OptOrder));
        OptOrderPhlx = RegisteredIPEndPoint.Create(Environment, 162, nameof(OptOrderPhlx));
        OptOrderCboe = RegisteredIPEndPoint.Create(Environment, 163, nameof(OptOrderCboe));
        OptOrderC2 = RegisteredIPEndPoint.Create(Environment, 164, nameof(OptOrderC2));
        OptOrderIse = RegisteredIPEndPoint.Create(Environment, 165, nameof(OptOrderIse));
        OptOrderBox = RegisteredIPEndPoint.Create(Environment, 166, nameof(OptOrderBox));
        OptOrderMiax = RegisteredIPEndPoint.Create(Environment, 167, nameof(OptOrderMiax));
        OptOrderEmld = RegisteredIPEndPoint.Create(Environment, 168, nameof(OptOrderEmld));
        OptOrderNyse = RegisteredIPEndPoint.Create(Environment, 169, nameof(OptOrderNyse));
        Imbalance = RegisteredIPEndPoint.Create(Environment, 170, nameof(Imbalance));
        ImbalanceArca = RegisteredIPEndPoint.Create(Environment, 171, nameof(ImbalanceArca));
        ImbalanceNyse = RegisteredIPEndPoint.Create(Environment, 172, nameof(ImbalanceNyse));
        ImbalanceNasdaq = RegisteredIPEndPoint.Create(Environment, 173, nameof(ImbalanceNasdaq));
        StkPrintMarkup = RegisteredIPEndPoint.Create(Environment, 180, nameof(StkPrintMarkup));
        OptPrintMarkup = RegisteredIPEndPoint.Create(Environment, 181, nameof(OptPrintMarkup));
        FutPrintMarkupV = RegisteredIPEndPoint.Create(Environment, 183, nameof(FutPrintMarkupV));
        FutPrintMarkupX1 = RegisteredIPEndPoint.Create(Environment, 184, nameof(FutPrintMarkupX1));
        FutPrintMarkupX2 = RegisteredIPEndPoint.Create(Environment, 185, nameof(FutPrintMarkupX2));
        FutPrintMarkupX3 = RegisteredIPEndPoint.Create(Environment, 186, nameof(FutPrintMarkupX3));
        FutPrintMarkupX4 = RegisteredIPEndPoint.Create(Environment, 187, nameof(FutPrintMarkupX4));
        LiveImpliedQuoteAB = RegisteredIPEndPoint.Create(Environment, 190, nameof(LiveImpliedQuoteAB));
        LiveImpliedQuoteCD = RegisteredIPEndPoint.Create(Environment, 191, nameof(LiveImpliedQuoteCD));
        LiveImpliedQuoteEF = RegisteredIPEndPoint.Create(Environment, 192, nameof(LiveImpliedQuoteEF));
        LiveImpliedQuoteGH = RegisteredIPEndPoint.Create(Environment, 193, nameof(LiveImpliedQuoteGH));
        LiveImpliedQuoteM = RegisteredIPEndPoint.Create(Environment, 194, nameof(LiveImpliedQuoteM));
        LiveImpliedQuoteS = RegisteredIPEndPoint.Create(Environment, 195, nameof(LiveImpliedQuoteS));
        LiveImpliedQuoteX1 = RegisteredIPEndPoint.Create(Environment, 196, nameof(LiveImpliedQuoteX1));
        LiveImpliedQuoteX2 = RegisteredIPEndPoint.Create(Environment, 197, nameof(LiveImpliedQuoteX2));
        LiveImpliedQuoteX3 = RegisteredIPEndPoint.Create(Environment, 198, nameof(LiveImpliedQuoteX3));
        LiveImpliedQuoteX4 = RegisteredIPEndPoint.Create(Environment, 199, nameof(LiveImpliedQuoteX4));
        LiveImpliedQuoteT = RegisteredIPEndPoint.Create(Environment, 200, nameof(LiveImpliedQuoteT));
    }
}
