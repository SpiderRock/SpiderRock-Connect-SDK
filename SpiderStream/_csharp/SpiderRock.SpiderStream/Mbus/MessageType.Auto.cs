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
    internal static readonly MessageType LiveImpliedQuoteNG = 1021;
    internal static readonly MessageType LiveRevConQuote = 1125;
    internal static readonly MessageType LiveSurfaceAtm = 1030;
    internal static readonly MessageType MarketFeedStatus = 5710;
    internal static readonly MessageType OddLotBookQuote = 3080;
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
            SchemaHash = 0x5e23212f89d1b5b1
        };

        attributes[2605] = new()
        {
            Type = 2605,
            Name = nameof(FuturePrintMarkup),
            IsCore = true,
            SchemaHash = 0x218f97c668157e53
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
            SchemaHash = 0x3d6e5c6e0b51e0bf
        };

        attributes[1021] = new()
        {
            Type = 1021,
            Name = nameof(LiveImpliedQuoteNG),
            IsCore = true,
            SchemaHash = 0x64c816eabe969cc6
        };

        attributes[1125] = new()
        {
            Type = 1125,
            Name = nameof(LiveRevConQuote),
            IsCore = true,
            SchemaHash = 0x96ad7ed0837318e
        };

        attributes[1030] = new()
        {
            Type = 1030,
            Name = nameof(LiveSurfaceAtm),
            IsCore = true,
            SchemaHash = 0x28efc8622b216c68
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

        attributes[5710] = new()
        {
            Type = 5710,
            Name = nameof(MarketFeedStatus),
            IsCore = true,
            SchemaHash = 0x58f7ad47c16ad4b8
        };

        attributes[5900] = new()
        {
            Type = 5900,
            Name = nameof(NetPulse),
            IsCore = false,
            SchemaHash = 0x473b084c4f52e347
        };

        attributes[3080] = new()
        {
            Type = 3080,
            Name = nameof(OddLotBookQuote),
            IsCore = true,
            SchemaHash = 0x6ea4efc4b86103f7
        };

        attributes[3140] = new()
        {
            Type = 3140,
            Name = nameof(OptionCloseMark),
            IsCore = true,
            SchemaHash = 0x74de529bd0685216
        };

        attributes[2765] = new()
        {
            Type = 2765,
            Name = nameof(OptionExchOrder),
            IsCore = true,
            SchemaHash = 0x209cee991f1bb0f6
        };

        attributes[2770] = new()
        {
            Type = 2770,
            Name = nameof(OptionExchPrint),
            IsCore = true,
            SchemaHash = 0x2e3b62f722dd6d74
        };

        attributes[2780] = new()
        {
            Type = 2780,
            Name = nameof(OptionMarketSummary),
            IsCore = true,
            SchemaHash = 0x7f9012a39d9864b1
        };

        attributes[2785] = new()
        {
            Type = 2785,
            Name = nameof(OptionNbboQuote),
            IsCore = true,
            SchemaHash = 0x74689c22ef325b7d
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
            SchemaHash = 0x53797a3a9b78bd37
        };

        attributes[2805] = new()
        {
            Type = 2805,
            Name = nameof(OptionPrint2),
            IsCore = true,
            SchemaHash = 0x66ffcbef74735215
        };

        attributes[2810] = new()
        {
            Type = 2810,
            Name = nameof(OptionPrintMarkup),
            IsCore = true,
            SchemaHash = 0x1721239675213c8f
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
            SchemaHash = 0x5371080ebeaa0488
        };

        attributes[4365] = new()
        {
            Type = 4365,
            Name = nameof(RootDefinition),
            IsCore = true,
            SchemaHash = 0x5333481a05ec6d7
        };

        attributes[2525] = new()
        {
            Type = 2525,
            Name = nameof(SpdrAuctionState),
            IsCore = true,
            SchemaHash = 0x6edc1742288f3aec
        };

        attributes[2900] = new()
        {
            Type = 2900,
            Name = nameof(SpreadBookQuote),
            IsCore = true,
            SchemaHash = 0x4e45fd1202ca5113
        };

        attributes[4390] = new()
        {
            Type = 4390,
            Name = nameof(SpreadDefinition),
            IsCore = true,
            SchemaHash = 0x34d36078cb31d27a
        };

        attributes[4395] = new()
        {
            Type = 4395,
            Name = nameof(SpreadExchDefinition),
            IsCore = true,
            SchemaHash = 0x394b4b7752ee4d63
        };

        attributes[2915] = new()
        {
            Type = 2915,
            Name = nameof(SpreadExchOrder),
            IsCore = true,
            SchemaHash = 0x3e1a6c51b4b296cf
        };

        attributes[2920] = new()
        {
            Type = 2920,
            Name = nameof(SpreadExchPrint),
            IsCore = true,
            SchemaHash = 0x66fd749c5c23eab6
        };

        attributes[3000] = new()
        {
            Type = 3000,
            Name = nameof(StockBookQuote),
            IsCore = true,
            SchemaHash = 0x6ea4efc4b86103f7
        };

        attributes[3020] = new()
        {
            Type = 3020,
            Name = nameof(StockExchImbalanceV2),
            IsCore = true,
            SchemaHash = 0x6bdb8c82d5608d68
        };

        attributes[3035] = new()
        {
            Type = 3035,
            Name = nameof(StockImbalance),
            IsCore = true,
            SchemaHash = 0x58a45610c6b5b6b8
        };

        attributes[3040] = new()
        {
            Type = 3040,
            Name = nameof(StockMarketSummary),
            IsCore = true,
            SchemaHash = 0x5c5d73109bb9c6ba
        };

        attributes[3045] = new()
        {
            Type = 3045,
            Name = nameof(StockPrint),
            IsCore = true,
            SchemaHash = 0x32e5f711824660e5
        };

        attributes[3055] = new()
        {
            Type = 3055,
            Name = nameof(StockPrintMarkup),
            IsCore = true,
            SchemaHash = 0x2da35b908111cb66
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
            SchemaHash = 0x79256c95ff1d6800
        };

    }
}
