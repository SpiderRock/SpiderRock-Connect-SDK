// ------------------------------------------------------------------------------------------------------------------------------
//
// Machine generated.  Do not edit directly.
//
// Copyright 2023, SpiderRock Technology
//
// ------------------------------------------------------------------------------------------------------------------------------

namespace SpiderRock.SpiderStream.Mbus;

public partial struct MessageType
{
    private static readonly MessageType Lowest = 1015;
    private static readonly MessageType Highest = 5900;

    public static readonly MessageType None = 0;
    public static readonly MessageType Max = 11000;

    internal static readonly MessageType FutureBookQuote = 2580;
    internal static readonly MessageType FuturePrint = 2595;
    internal static readonly MessageType FuturePrintMarkup = 2605;
    internal static readonly MessageType IndexQuote = 2675;
    internal static readonly MessageType LiveImpliedQuote = 1015;
    internal static readonly MessageType LiveRevConQuote = 1125;
    internal static readonly MessageType LiveSurfaceAtm = 1030;
    internal static readonly MessageType OptionCloseMark = 3140;
    internal static readonly MessageType OptionExchOrder = 2765;
    internal static readonly MessageType OptionExchPrint = 2770;
    internal static readonly MessageType OptionMarketSummary = 2780;
    internal static readonly MessageType OptionNbboQuote = 2785;
    internal static readonly MessageType OptionOpenInterest = 3230;
    internal static readonly MessageType OptionPrint = 2800;
    internal static readonly MessageType OptionPrint2 = 2805;
    internal static readonly MessageType OptionPrintMarkup = 2810;
    internal static readonly MessageType OptionRiskFactor = 1095;
    internal static readonly MessageType ProductDefinitionV2 = 4360;
    internal static readonly MessageType RootDefinition = 4365;
    internal static readonly MessageType SpdrAuctionState = 2525;
    internal static readonly MessageType SpreadBookQuote = 2900;
    internal static readonly MessageType SpreadDefinition = 4390;
    internal static readonly MessageType SpreadExchDefinition = 4395;
    internal static readonly MessageType SpreadExchOrder = 2915;
    internal static readonly MessageType SpreadExchPrint = 2920;
    internal static readonly MessageType StockBookQuote = 3000;
    internal static readonly MessageType StockExchImbalanceV2 = 3020;
    internal static readonly MessageType StockImbalance = 3035;
    internal static readonly MessageType StockMarketSummary = 3040;
    internal static readonly MessageType StockPrint = 3045;
    internal static readonly MessageType StockPrintMarkup = 3055;
    internal static readonly MessageType SyntheticExpiryQuote = 2700;
    internal static readonly MessageType SyntheticFutureQuote = 2695;
    internal static readonly MessageType TickerDefinitionExt = 4380;
    internal static readonly MessageType MLinkCacheRequest = 3355;
    internal static readonly MessageType MLinkStreamCheckPt = 3382;
    internal static readonly MessageType NetPulse = 5900;
    
    private static void Initialize()
    {
        var isCore = CreateSizedArray<bool>();
        
        attributes[2580] = new()
        {
            Type = 2580,
            Name = nameof(FutureBookQuote),
            IsCore = true,
            SchemaHash = 0x1c8f950b134e1b12
        };

        attributes[2595] = new()
        {
            Type = 2595,
            Name = nameof(FuturePrint),
            IsCore = true,
            SchemaHash = 0x5bfca6fc30c3ccb8
        };

        attributes[2605] = new()
        {
            Type = 2605,
            Name = nameof(FuturePrintMarkup),
            IsCore = true,
            SchemaHash = 0x7f4f94393615ead4
        };

        attributes[2675] = new()
        {
            Type = 2675,
            Name = nameof(IndexQuote),
            IsCore = true,
            SchemaHash = 0x5c9ece77ef464c7
        };

        attributes[1015] = new()
        {
            Type = 1015,
            Name = nameof(LiveImpliedQuote),
            IsCore = true,
            SchemaHash = 0x4f7e66f4eb28a472
        };

        attributes[1125] = new()
        {
            Type = 1125,
            Name = nameof(LiveRevConQuote),
            IsCore = true,
            SchemaHash = 0x37efcd350dd295ee
        };

        attributes[1030] = new()
        {
            Type = 1030,
            Name = nameof(LiveSurfaceAtm),
            IsCore = true,
            SchemaHash = 0x253b183abd2bbe98
        };

        attributes[3355] = new()
        {
            Type = 3355,
            Name = nameof(MLinkCacheRequest),
            IsCore = false,
            SchemaHash = 0x481f662269dbad25
        };

        attributes[3382] = new()
        {
            Type = 3382,
            Name = nameof(MLinkStreamCheckPt),
            IsCore = false,
            SchemaHash = 0x5ac5d3dddf621278
        };

        attributes[5900] = new()
        {
            Type = 5900,
            Name = nameof(NetPulse),
            IsCore = false,
            SchemaHash = 0x473b084c4f52e347
        };

        attributes[3140] = new()
        {
            Type = 3140,
            Name = nameof(OptionCloseMark),
            IsCore = true,
            SchemaHash = 0x20efad0ad8bccecc
        };

        attributes[2765] = new()
        {
            Type = 2765,
            Name = nameof(OptionExchOrder),
            IsCore = true,
            SchemaHash = 0x49f2da3662505a27
        };

        attributes[2770] = new()
        {
            Type = 2770,
            Name = nameof(OptionExchPrint),
            IsCore = true,
            SchemaHash = 0x71dde720190c5110
        };

        attributes[2780] = new()
        {
            Type = 2780,
            Name = nameof(OptionMarketSummary),
            IsCore = true,
            SchemaHash = 0x5a8643c0c2e83382
        };

        attributes[2785] = new()
        {
            Type = 2785,
            Name = nameof(OptionNbboQuote),
            IsCore = true,
            SchemaHash = 0x6450262a682809b7
        };

        attributes[3230] = new()
        {
            Type = 3230,
            Name = nameof(OptionOpenInterest),
            IsCore = true,
            SchemaHash = 0x4135df47aa835a34
        };

        attributes[2800] = new()
        {
            Type = 2800,
            Name = nameof(OptionPrint),
            IsCore = true,
            SchemaHash = 0x57f56e06a898006e
        };

        attributes[2805] = new()
        {
            Type = 2805,
            Name = nameof(OptionPrint2),
            IsCore = true,
            SchemaHash = 0x5fc3e74053fd5fac
        };

        attributes[2810] = new()
        {
            Type = 2810,
            Name = nameof(OptionPrintMarkup),
            IsCore = true,
            SchemaHash = 0x38bf1129eefcb40f
        };

        attributes[1095] = new()
        {
            Type = 1095,
            Name = nameof(OptionRiskFactor),
            IsCore = true,
            SchemaHash = 0x7fdd72d67f8f4c65
        };

        attributes[4360] = new()
        {
            Type = 4360,
            Name = nameof(ProductDefinitionV2),
            IsCore = true,
            SchemaHash = 0x1cdbe907319684b4
        };

        attributes[4365] = new()
        {
            Type = 4365,
            Name = nameof(RootDefinition),
            IsCore = true,
            SchemaHash = 0x6a8dbef0372aa41b
        };

        attributes[2525] = new()
        {
            Type = 2525,
            Name = nameof(SpdrAuctionState),
            IsCore = true,
            SchemaHash = 0x1b0b2cc7d841513b
        };

        attributes[2900] = new()
        {
            Type = 2900,
            Name = nameof(SpreadBookQuote),
            IsCore = true,
            SchemaHash = 0x41748dc1a1e94321
        };

        attributes[4390] = new()
        {
            Type = 4390,
            Name = nameof(SpreadDefinition),
            IsCore = true,
            SchemaHash = 0x1d874e028cb2b218
        };

        attributes[4395] = new()
        {
            Type = 4395,
            Name = nameof(SpreadExchDefinition),
            IsCore = true,
            SchemaHash = 0x24240ff4da07ff30
        };

        attributes[2915] = new()
        {
            Type = 2915,
            Name = nameof(SpreadExchOrder),
            IsCore = true,
            SchemaHash = 0x619649e85f8e6fbe
        };

        attributes[2920] = new()
        {
            Type = 2920,
            Name = nameof(SpreadExchPrint),
            IsCore = true,
            SchemaHash = 0xf095a0d6749e2c4
        };

        attributes[3000] = new()
        {
            Type = 3000,
            Name = nameof(StockBookQuote),
            IsCore = true,
            SchemaHash = 0x84734e46a67ad01
        };

        attributes[3020] = new()
        {
            Type = 3020,
            Name = nameof(StockExchImbalanceV2),
            IsCore = true,
            SchemaHash = 0xd74d8214ba1fa10
        };

        attributes[3035] = new()
        {
            Type = 3035,
            Name = nameof(StockImbalance),
            IsCore = true,
            SchemaHash = 0x6d8adc15d0672e91
        };

        attributes[3040] = new()
        {
            Type = 3040,
            Name = nameof(StockMarketSummary),
            IsCore = true,
            SchemaHash = 0x2e6982925ad2f9ae
        };

        attributes[3045] = new()
        {
            Type = 3045,
            Name = nameof(StockPrint),
            IsCore = true,
            SchemaHash = 0x4fb9f14fea837f28
        };

        attributes[3055] = new()
        {
            Type = 3055,
            Name = nameof(StockPrintMarkup),
            IsCore = true,
            SchemaHash = 0x2515f3dedb34e41b
        };

        attributes[2700] = new()
        {
            Type = 2700,
            Name = nameof(SyntheticExpiryQuote),
            IsCore = true,
            SchemaHash = 0x1d617821233b9033
        };

        attributes[2695] = new()
        {
            Type = 2695,
            Name = nameof(SyntheticFutureQuote),
            IsCore = true,
            SchemaHash = 0xf2cebed6b10296f
        };

        attributes[4380] = new()
        {
            Type = 4380,
            Name = nameof(TickerDefinitionExt),
            IsCore = true,
            SchemaHash = 0x6df2367b285dc92f
        };

    }
}
