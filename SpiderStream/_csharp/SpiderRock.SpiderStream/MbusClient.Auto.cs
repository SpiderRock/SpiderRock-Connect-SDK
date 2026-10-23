// ------------------------------------------------------------------------------------------------------------------------------
//
// Machine generated.  Do not edit directly.
//
// Copyright 2023, SpiderRock Technology
//
// ------------------------------------------------------------------------------------------------------------------------------

using System;
using System.Collections.Generic;
using SpiderRock.SpiderStream.Mbus;

namespace SpiderRock.SpiderStream;

public sealed partial class MbusClient
{
    MessageEventsDispatcher<FutureBookQuote> futureBookQuoteDispatch;
    MessageEventsDispatcher<FuturePrint> futurePrintDispatch;
    MessageEventsDispatcher<FuturePrintMarkup> futurePrintMarkupDispatch;
    MessageEventsDispatcher<IndexPrint> indexPrintDispatch;
    MessageEventsDispatcher<IndexQuote> indexQuoteDispatch;
    MessageEventsDispatcher<LiveImpliedQuote> liveImpliedQuoteDispatch;
    MessageEventsDispatcher<LiveImpliedQuoteNG> liveImpliedQuoteNGDispatch;
    MessageEventsDispatcher<LiveRevConQuote> liveRevConQuoteDispatch;
    MessageEventsDispatcher<LiveSurfaceAtm> liveSurfaceAtmDispatch;
    MessageEventsDispatcher<MarketFeedStatus> marketFeedStatusDispatch;
    MessageEventsDispatcher<OddLotBookQuote> oddLotBookQuoteDispatch;
    MessageEventsDispatcher<OptionCloseMark> optionCloseMarkDispatch;
    MessageEventsDispatcher<OptionExchOrder> optionExchOrderDispatch;
    MessageEventsDispatcher<OptionExchPrint> optionExchPrintDispatch;
    MessageEventsDispatcher<OptionMarketSummary> optionMarketSummaryDispatch;
    MessageEventsDispatcher<OptionNbboQuote> optionNbboQuoteDispatch;
    MessageEventsDispatcher<OptionOpenInterest> optionOpenInterestDispatch;
    MessageEventsDispatcher<OptionPrint> optionPrintDispatch;
    MessageEventsDispatcher<OptionPrint2> optionPrint2Dispatch;
    MessageEventsDispatcher<OptionPrintMarkup> optionPrintMarkupDispatch;
    MessageEventsDispatcher<OptionRiskFactor> optionRiskFactorDispatch;
    MessageEventsDispatcher<ProductDefinitionV2> productDefinitionV2Dispatch;
    MessageEventsDispatcher<ProductExchMappingV3> productExchMappingV3Dispatch;
    MessageEventsDispatcher<RootDefinition> rootDefinitionDispatch;
    MessageEventsDispatcher<RootDefinitionV3> rootDefinitionV3Dispatch;
    MessageEventsDispatcher<SpdrAuctionState> spdrAuctionStateDispatch;
    MessageEventsDispatcher<SpreadBookQuote> spreadBookQuoteDispatch;
    MessageEventsDispatcher<SpreadExchOrder> spreadExchOrderDispatch;
    MessageEventsDispatcher<SpreadExchPrint> spreadExchPrintDispatch;
    MessageEventsDispatcher<StockBookQuote> stockBookQuoteDispatch;
    MessageEventsDispatcher<StockExchImbalanceV2> stockExchImbalanceV2Dispatch;
    MessageEventsDispatcher<StockImbalance> stockImbalanceDispatch;
    MessageEventsDispatcher<StockMarketSummary> stockMarketSummaryDispatch;
    MessageEventsDispatcher<StockPrint> stockPrintDispatch;
    MessageEventsDispatcher<StockPrintMarkup> stockPrintMarkupDispatch;
    MessageEventsDispatcher<SyntheticExpiryQuote> syntheticExpiryQuoteDispatch;
    MessageEventsDispatcher<SyntheticFutureQuote> syntheticFutureQuoteDispatch;
    MessageEventsDispatcher<TickerDefinitionExt> tickerDefinitionExtDispatch;

    private void InitializeMessageEventsDispatch(MessageCache messageCache)
    {
        futureBookQuoteDispatch = new(messageCache.FutureBookQuote);
        futurePrintDispatch = new(messageCache.FuturePrint);
        futurePrintMarkupDispatch = new(messageCache.FuturePrintMarkup);
        indexPrintDispatch = new(messageCache.IndexPrint);
        indexQuoteDispatch = new(messageCache.IndexQuote);
        liveImpliedQuoteDispatch = new(messageCache.LiveImpliedQuote);
        liveImpliedQuoteNGDispatch = new(messageCache.LiveImpliedQuoteNG);
        liveRevConQuoteDispatch = new(messageCache.LiveRevConQuote);
        liveSurfaceAtmDispatch = new(messageCache.LiveSurfaceAtm);
        marketFeedStatusDispatch = new(messageCache.MarketFeedStatus);
        oddLotBookQuoteDispatch = new(messageCache.OddLotBookQuote);
        optionCloseMarkDispatch = new(messageCache.OptionCloseMark);
        optionExchOrderDispatch = new(messageCache.OptionExchOrder);
        optionExchPrintDispatch = new(messageCache.OptionExchPrint);
        optionMarketSummaryDispatch = new(messageCache.OptionMarketSummary);
        optionNbboQuoteDispatch = new(messageCache.OptionNbboQuote);
        optionOpenInterestDispatch = new(messageCache.OptionOpenInterest);
        optionPrintDispatch = new(messageCache.OptionPrint);
        optionPrint2Dispatch = new(messageCache.OptionPrint2);
        optionPrintMarkupDispatch = new(messageCache.OptionPrintMarkup);
        optionRiskFactorDispatch = new(messageCache.OptionRiskFactor);
        productDefinitionV2Dispatch = new(messageCache.ProductDefinitionV2);
        productExchMappingV3Dispatch = new(messageCache.ProductExchMappingV3);
        rootDefinitionDispatch = new(messageCache.RootDefinition);
        rootDefinitionV3Dispatch = new(messageCache.RootDefinitionV3);
        spdrAuctionStateDispatch = new(messageCache.SpdrAuctionState);
        spreadBookQuoteDispatch = new(messageCache.SpreadBookQuote);
        spreadExchOrderDispatch = new(messageCache.SpreadExchOrder);
        spreadExchPrintDispatch = new(messageCache.SpreadExchPrint);
        stockBookQuoteDispatch = new(messageCache.StockBookQuote);
        stockExchImbalanceV2Dispatch = new(messageCache.StockExchImbalanceV2);
        stockImbalanceDispatch = new(messageCache.StockImbalance);
        stockMarketSummaryDispatch = new(messageCache.StockMarketSummary);
        stockPrintDispatch = new(messageCache.StockPrint);
        stockPrintMarkupDispatch = new(messageCache.StockPrintMarkup);
        syntheticExpiryQuoteDispatch = new(messageCache.SyntheticExpiryQuote);
        syntheticFutureQuoteDispatch = new(messageCache.SyntheticFutureQuote);
        tickerDefinitionExtDispatch = new(messageCache.TickerDefinitionExt);
    }

    public IMessageEvents<IMessage> GetMessageEvents(MessageType messageType)
    {
        return (ushort)messageType switch
        {
            /* FutureBookQuote */ 2580 => futureBookQuoteDispatch,
            /* FuturePrint */ 2595 => futurePrintDispatch,
            /* FuturePrintMarkup */ 2605 => futurePrintMarkupDispatch,
            /* IndexPrint */ 2705 => indexPrintDispatch,
            /* IndexQuote */ 2675 => indexQuoteDispatch,
            /* LiveImpliedQuote */ 1015 => liveImpliedQuoteDispatch,
            /* LiveImpliedQuoteNG */ 1021 => liveImpliedQuoteNGDispatch,
            /* LiveRevConQuote */ 1125 => liveRevConQuoteDispatch,
            /* LiveSurfaceAtm */ 1030 => liveSurfaceAtmDispatch,
            /* MarketFeedStatus */ 5710 => marketFeedStatusDispatch,
            /* OddLotBookQuote */ 3080 => oddLotBookQuoteDispatch,
            /* OptionCloseMark */ 3140 => optionCloseMarkDispatch,
            /* OptionExchOrder */ 2765 => optionExchOrderDispatch,
            /* OptionExchPrint */ 2770 => optionExchPrintDispatch,
            /* OptionMarketSummary */ 2780 => optionMarketSummaryDispatch,
            /* OptionNbboQuote */ 2785 => optionNbboQuoteDispatch,
            /* OptionOpenInterest */ 3230 => optionOpenInterestDispatch,
            /* OptionPrint */ 2800 => optionPrintDispatch,
            /* OptionPrint2 */ 2805 => optionPrint2Dispatch,
            /* OptionPrintMarkup */ 2810 => optionPrintMarkupDispatch,
            /* OptionRiskFactor */ 1095 => optionRiskFactorDispatch,
            /* ProductDefinitionV2 */ 4360 => productDefinitionV2Dispatch,
            /* ProductExchMappingV3 */ 9130 => productExchMappingV3Dispatch,
            /* RootDefinition */ 4365 => rootDefinitionDispatch,
            /* RootDefinitionV3 */ 9112 => rootDefinitionV3Dispatch,
            /* SpdrAuctionState */ 2525 => spdrAuctionStateDispatch,
            /* SpreadBookQuote */ 2900 => spreadBookQuoteDispatch,
            /* SpreadExchOrder */ 2915 => spreadExchOrderDispatch,
            /* SpreadExchPrint */ 2920 => spreadExchPrintDispatch,
            /* StockBookQuote */ 3000 => stockBookQuoteDispatch,
            /* StockExchImbalanceV2 */ 3020 => stockExchImbalanceV2Dispatch,
            /* StockImbalance */ 3035 => stockImbalanceDispatch,
            /* StockMarketSummary */ 3040 => stockMarketSummaryDispatch,
            /* StockPrint */ 3045 => stockPrintDispatch,
            /* StockPrintMarkup */ 3055 => stockPrintMarkupDispatch,
            /* SyntheticExpiryQuote */ 2700 => syntheticExpiryQuoteDispatch,
            /* SyntheticFutureQuote */ 2695 => syntheticFutureQuoteDispatch,
            /* TickerDefinitionExt */ 4380 => tickerDefinitionExtDispatch,
            _ => null
        };
    }

    public IMessageEvents<FutureBookQuote> FutureBookQuote => messageCache.FutureBookQuote;
    public IMessageEvents<FuturePrint> FuturePrint => messageCache.FuturePrint;
    public IMessageEvents<FuturePrintMarkup> FuturePrintMarkup => messageCache.FuturePrintMarkup;
    public IMessageEvents<IndexPrint> IndexPrint => messageCache.IndexPrint;
    public IMessageEvents<IndexQuote> IndexQuote => messageCache.IndexQuote;
    public IMessageEvents<LiveImpliedQuote> LiveImpliedQuote => messageCache.LiveImpliedQuote;
    public IMessageEvents<LiveImpliedQuoteNG> LiveImpliedQuoteNG => messageCache.LiveImpliedQuoteNG;
    public IMessageEvents<LiveRevConQuote> LiveRevConQuote => messageCache.LiveRevConQuote;
    public IMessageEvents<LiveSurfaceAtm> LiveSurfaceAtm => messageCache.LiveSurfaceAtm;
    public IMessageEvents<MarketFeedStatus> MarketFeedStatus => messageCache.MarketFeedStatus;
    public IMessageEvents<OddLotBookQuote> OddLotBookQuote => messageCache.OddLotBookQuote;
    public IMessageEvents<OptionCloseMark> OptionCloseMark => messageCache.OptionCloseMark;
    public IMessageEvents<OptionExchOrder> OptionExchOrder => messageCache.OptionExchOrder;
    public IMessageEvents<OptionExchPrint> OptionExchPrint => messageCache.OptionExchPrint;
    public IMessageEvents<OptionMarketSummary> OptionMarketSummary => messageCache.OptionMarketSummary;
    public IMessageEvents<OptionNbboQuote> OptionNbboQuote => messageCache.OptionNbboQuote;
    public IMessageEvents<OptionOpenInterest> OptionOpenInterest => messageCache.OptionOpenInterest;
    public IMessageEvents<OptionPrint> OptionPrint => messageCache.OptionPrint;
    public IMessageEvents<OptionPrint2> OptionPrint2 => messageCache.OptionPrint2;
    public IMessageEvents<OptionPrintMarkup> OptionPrintMarkup => messageCache.OptionPrintMarkup;
    public IMessageEvents<OptionRiskFactor> OptionRiskFactor => messageCache.OptionRiskFactor;
    public IMessageEvents<ProductDefinitionV2> ProductDefinitionV2 => messageCache.ProductDefinitionV2;
    public IMessageEvents<ProductExchMappingV3> ProductExchMappingV3 => messageCache.ProductExchMappingV3;
    public IMessageEvents<RootDefinition> RootDefinition => messageCache.RootDefinition;
    public IMessageEvents<RootDefinitionV3> RootDefinitionV3 => messageCache.RootDefinitionV3;
    public IMessageEvents<SpdrAuctionState> SpdrAuctionState => messageCache.SpdrAuctionState;
    public IMessageEvents<SpreadBookQuote> SpreadBookQuote => messageCache.SpreadBookQuote;
    public IMessageEvents<SpreadExchOrder> SpreadExchOrder => messageCache.SpreadExchOrder;
    public IMessageEvents<SpreadExchPrint> SpreadExchPrint => messageCache.SpreadExchPrint;
    public IMessageEvents<StockBookQuote> StockBookQuote => messageCache.StockBookQuote;
    public IMessageEvents<StockExchImbalanceV2> StockExchImbalanceV2 => messageCache.StockExchImbalanceV2;
    public IMessageEvents<StockImbalance> StockImbalance => messageCache.StockImbalance;
    public IMessageEvents<StockMarketSummary> StockMarketSummary => messageCache.StockMarketSummary;
    public IMessageEvents<StockPrint> StockPrint => messageCache.StockPrint;
    public IMessageEvents<StockPrintMarkup> StockPrintMarkup => messageCache.StockPrintMarkup;
    public IMessageEvents<SyntheticExpiryQuote> SyntheticExpiryQuote => messageCache.SyntheticExpiryQuote;
    public IMessageEvents<SyntheticFutureQuote> SyntheticFutureQuote => messageCache.SyntheticFutureQuote;
    public IMessageEvents<TickerDefinitionExt> TickerDefinitionExt => messageCache.TickerDefinitionExt;
}
