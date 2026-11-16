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
    private static readonly MessageType Highest = 9130;

    public static readonly MessageType None = 0;
    public static readonly MessageType Max = 11000;

    internal static readonly MessageType FutureBookQuote = 2580;
    internal static readonly MessageType FuturePrint = 2595;
    internal static readonly MessageType FuturePrintMarkup = 2605;
    internal static readonly MessageType IndexPrint = 2705;
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
    internal static readonly MessageType ProductExchMappingV3 = 9130;
    internal static readonly MessageType RootDefinition = 4365;
    internal static readonly MessageType RootDefinitionV3 = 9112;
    internal static readonly MessageType SpdrAuctionState = 2525;
    internal static readonly MessageType SpreadBookQuote = 2900;
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
    internal static readonly MessageType MLinkCacheRequestV2 = 3356;
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
            SchemaHash = 0x1037d8b9c5353901
        };

        attributes[2595] = new()
        {
            Type = 2595,
            Name = nameof(FuturePrint),
            IsCore = true,
            SchemaHash = 0x729659a2b00af374
        };

        attributes[2605] = new()
        {
            Type = 2605,
            Name = nameof(FuturePrintMarkup),
            IsCore = true,
            SchemaHash = 0x795d6c79321b64d0
        };

        attributes[2705] = new()
        {
            Type = 2705,
            Name = nameof(IndexPrint),
            IsCore = true,
            SchemaHash = 0x3c781c25ac208e82
        };

        attributes[2675] = new()
        {
            Type = 2675,
            Name = nameof(IndexQuote),
            IsCore = true,
            SchemaHash = 0x263ce8ac376ee6ad
        };

        attributes[1015] = new()
        {
            Type = 1015,
            Name = nameof(LiveImpliedQuote),
            IsCore = true,
            SchemaHash = 0x55e6797f412de7e5
        };

        attributes[1021] = new()
        {
            Type = 1021,
            Name = nameof(LiveImpliedQuoteNG),
            IsCore = true,
            SchemaHash = 0x59d7aa5ce39479fa
        };

        attributes[1125] = new()
        {
            Type = 1125,
            Name = nameof(LiveRevConQuote),
            IsCore = true,
            SchemaHash = 0x2e8e1edc1adddbe1
        };

        attributes[1030] = new()
        {
            Type = 1030,
            Name = nameof(LiveSurfaceAtm),
            IsCore = true,
            SchemaHash = 0x50412536020772d
        };

        attributes[3355] = new()
        {
            Type = 3355,
            Name = nameof(MLinkCacheRequest),
            IsCore = false,
            SchemaHash = 0x481f662269dbad25
        };

        attributes[3356] = new()
        {
            Type = 3356,
            Name = nameof(MLinkCacheRequestV2),
            IsCore = false,
            SchemaHash = 0x6e126a744b75837b
        };

        attributes[3382] = new()
        {
            Type = 3382,
            Name = nameof(MLinkStreamCheckPt),
            IsCore = false,
            SchemaHash = 0x6ad3e4a7da525b02
        };

        attributes[5710] = new()
        {
            Type = 5710,
            Name = nameof(MarketFeedStatus),
            IsCore = true,
            SchemaHash = 0x21a67070793f7e8e
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
            SchemaHash = 0x3a5952583c4c3a86
        };

        attributes[3140] = new()
        {
            Type = 3140,
            Name = nameof(OptionCloseMark),
            IsCore = true,
            SchemaHash = 0x234aa84ed2b52c99
        };

        attributes[2765] = new()
        {
            Type = 2765,
            Name = nameof(OptionExchOrder),
            IsCore = true,
            SchemaHash = 0x6d5197f88032792f
        };

        attributes[2770] = new()
        {
            Type = 2770,
            Name = nameof(OptionExchPrint),
            IsCore = true,
            SchemaHash = 0x6411d6d682a99c8
        };

        attributes[2780] = new()
        {
            Type = 2780,
            Name = nameof(OptionMarketSummary),
            IsCore = true,
            SchemaHash = 0x26788d76f15b7dde
        };

        attributes[2785] = new()
        {
            Type = 2785,
            Name = nameof(OptionNbboQuote),
            IsCore = true,
            SchemaHash = 0xb0a62234eb30ebf
        };

        attributes[3230] = new()
        {
            Type = 3230,
            Name = nameof(OptionOpenInterest),
            IsCore = true,
            SchemaHash = 0x4a9b9aca783ee700
        };

        attributes[2800] = new()
        {
            Type = 2800,
            Name = nameof(OptionPrint),
            IsCore = true,
            SchemaHash = 0x6fb82023ac4daee8
        };

        attributes[2805] = new()
        {
            Type = 2805,
            Name = nameof(OptionPrint2),
            IsCore = true,
            SchemaHash = 0x5afa44512d0a2a06
        };

        attributes[2810] = new()
        {
            Type = 2810,
            Name = nameof(OptionPrintMarkup),
            IsCore = true,
            SchemaHash = 0x7b1bfcda6f3d4380
        };

        attributes[1095] = new()
        {
            Type = 1095,
            Name = nameof(OptionRiskFactor),
            IsCore = true,
            SchemaHash = 0x89ecc64980fa444
        };

        attributes[4360] = new()
        {
            Type = 4360,
            Name = nameof(ProductDefinitionV2),
            IsCore = true,
            SchemaHash = 0x5fa8399c86ad83f9
        };

        attributes[9130] = new()
        {
            Type = 9130,
            Name = nameof(ProductExchMappingV3),
            IsCore = true,
            SchemaHash = 0x401265ce21a185dd
        };

        attributes[4365] = new()
        {
            Type = 4365,
            Name = nameof(RootDefinition),
            IsCore = true,
            SchemaHash = 0x1b9dc82967d13be1
        };

        attributes[9112] = new()
        {
            Type = 9112,
            Name = nameof(RootDefinitionV3),
            IsCore = true,
            SchemaHash = 0x542de8fee11cce35
        };

        attributes[2525] = new()
        {
            Type = 2525,
            Name = nameof(SpdrAuctionState),
            IsCore = true,
            SchemaHash = 0x35e76f6b5ed1b9e2
        };

        attributes[2900] = new()
        {
            Type = 2900,
            Name = nameof(SpreadBookQuote),
            IsCore = true,
            SchemaHash = 0x14f448838f2b6a3e
        };

        attributes[2915] = new()
        {
            Type = 2915,
            Name = nameof(SpreadExchOrder),
            IsCore = true,
            SchemaHash = 0x4e2be5adf1b20da1
        };

        attributes[2920] = new()
        {
            Type = 2920,
            Name = nameof(SpreadExchPrint),
            IsCore = true,
            SchemaHash = 0x6664509bb5f119ea
        };

        attributes[3000] = new()
        {
            Type = 3000,
            Name = nameof(StockBookQuote),
            IsCore = true,
            SchemaHash = 0x3a5952583c4c3a86
        };

        attributes[3020] = new()
        {
            Type = 3020,
            Name = nameof(StockExchImbalanceV2),
            IsCore = true,
            SchemaHash = 0x38ea708ef7144199
        };

        attributes[3035] = new()
        {
            Type = 3035,
            Name = nameof(StockImbalance),
            IsCore = true,
            SchemaHash = 0x2ef251b2fc87f040
        };

        attributes[3040] = new()
        {
            Type = 3040,
            Name = nameof(StockMarketSummary),
            IsCore = true,
            SchemaHash = 0x43f6cf477939233c
        };

        attributes[3045] = new()
        {
            Type = 3045,
            Name = nameof(StockPrint),
            IsCore = true,
            SchemaHash = 0x69075aa1cd4d0f55
        };

        attributes[3055] = new()
        {
            Type = 3055,
            Name = nameof(StockPrintMarkup),
            IsCore = true,
            SchemaHash = 0x2b238cdc8d43ead2
        };

        attributes[2700] = new()
        {
            Type = 2700,
            Name = nameof(SyntheticExpiryQuote),
            IsCore = true,
            SchemaHash = 0x18372f0de4f6d7e5
        };

        attributes[2695] = new()
        {
            Type = 2695,
            Name = nameof(SyntheticFutureQuote),
            IsCore = true,
            SchemaHash = 0x323f9a694eb5f99b
        };

        attributes[4380] = new()
        {
            Type = 4380,
            Name = nameof(TickerDefinitionExt),
            IsCore = true,
            SchemaHash = 0x8951c5aa45c3e12
        };

    }
}
