#pragma once

#include <ostream>
#include <iostream>

#include "spiderrock_protobuf_base.hpp"

#include "spiderrock_common.hpp"
#include "ClientControl/AccountRouteConfig.hpp"
#include "ClientControl/AltSymbolMap.hpp"
#include "ClientControl/AssetAccountControl.hpp"
#include "ClientControl/AvailableStockLocates.hpp"
#include "ClientControl/BookControl.hpp"
#include "ClientControl/ClientAccntStrategyMap.hpp"
#include "ClientControl/ClientAccountConfig.hpp"
#include "ClientControl/ClientStockLocate.hpp"
#include "ClientControl/CustomControl.hpp"
#include "ClientControl/ExpirationControl.hpp"
#include "ClientControl/FutureControl.hpp"
#include "ClientControl/GlobalRiskControl.hpp"
#include "ClientControl/IndustryControl.hpp"
#include "ClientControl/MarRiskControl.hpp"
#include "ClientControl/MarRiskControlTkOverride.hpp"
#include "ClientControl/MarRiskCounter.hpp"
#include "ClientControl/RiskClassControl.hpp"
#include "ClientControl/SectorControl.hpp"
#include "ClientControl/SpdrRiskControl.hpp"
#include "ClientControl/SpdrRiskCounter.hpp"
#include "ClientControl/StockLocateRequest.hpp"
#include "ClientControl/StockLocateResponse.hpp"
#include "ClientControl/StockPoolBorrowRate.hpp"
#include "ClientControl/StockThreshold.hpp"
#include "ClientControl/SymbolControl.hpp"
#include "ClientControl/UserDividendOverride.hpp"
#include "ClientControl/UserRateOverride.hpp"
#include "ClientLive/IndexQuote.hpp"
#include "ClientLive/MarketHoursConfig.hpp"
#include "ClientLive/NMSCircuitBreaker.hpp"
#include "ClientLive/OpraPrintType.hpp"
#include "ClientLive/OptionEOP.hpp"
#include "ClientLive/OptionOpenAuction.hpp"
#include "ClientLive/OptionOpenAuctionSummary.hpp"
#include "ClientLive/OptionPrint2.hpp"
#include "ClientLive/OptionPrintSummary.hpp"
#include "ClientLive/OptionSettlementMark.hpp"
#include "ClientLive/ProductPriceBand.hpp"
#include "ClientLive/ProductTradingStatus.hpp"
#include "ClientLive/ProductTradingStatusV2.hpp"
#include "ClientLive/RFQQuoteBroadcast.hpp"
#include "ClientLive/SOQConstituentSymbolMap.hpp"
#include "ClientLive/SOQStrikeRangeUpdate.hpp"
#include "ClientLive/StockAuctionSummary.hpp"
#include "ClientLive/StockExchImbalance.hpp"
#include "ClientLive/StockImbalance.hpp"
#include "ClientLive/StockRegSHOStatus.hpp"
#include "ClientLive/SyntheticExpiryQuote.hpp"
#include "ClientLive/SyntheticFutureQuote.hpp"
#include "ClientTheo/OptionTheoVol.hpp"
#include "ClientTheo/SpdrOptTheoRecord.hpp"
#include "ClientTheo/SpdrTheoExp2PtCurve.hpp"
#include "ClientTheo/SpdrTheoExpSurface.hpp"
#include "ClientTheo/TheoSurfacePerf.hpp"
#include "EqtAnalytics/StockBetaExt.hpp"
#include "EqtAnalytics/StockEarningsCalendar.hpp"
#include "EqtAnalytics/StockPrintMarkup.hpp"
#include "EqtAnalytics/StockPrintSet.hpp"
#include "EqtAnalytics/TickerAnalytics.hpp"
#include "EqtAnalytics/UserSDivOverride.hpp"
#include "EqtExchImbalance/StockExchImbalanceV2.hpp"
#include "EqtMarkData/StockCloseMark.hpp"
#include "EqtMarkData/StockOpenMark.hpp"
#include "EqtMktData/StockBookQuote.hpp"
#include "EqtMktData/StockPrint.hpp"
#include "EqtSummaryData/StockMarketSummary.hpp"
#include "EqtSummaryData/StockMinuteBar.hpp"
#include "EquityDefinition/RegionalUnderlierComposite.hpp"
#include "EquityDefinition/TickerDefinition.hpp"
#include "EquityDefinition/TickerDefinitionExt.hpp"
#include "FutAnalytics/FuturePrintMarkup.hpp"
#include "FutAnalytics/FuturePrintSet.hpp"
#include "FutMarkData/FutureCloseMark.hpp"
#include "FutMarkData/FutureOpenMark.hpp"
#include "FutMarkData/FutureSettlementMark.hpp"
#include "FutMktData/FutureBookQuote.hpp"
#include "FutMktData/FuturePrint.hpp"
#include "FutProbModel/FuturePrintProbability.hpp"
#include "FutProbModel/FutureQuoteProbability.hpp"
#include "FutSummaryData/FutureMarketSummary.hpp"
#include "FutSummaryData/FutureMinuteBar.hpp"
#include "FutureDefinition/CCodeDefinition.hpp"
#include "FutureDefinition/ProductDefinitionV2.hpp"
#include "FxMktData/CurrencyConversion.hpp"
#include "GlobalDefinition/GlobalDividends.hpp"
#include "GlobalDefinition/GlobalRates.hpp"
#include "GlobalDefinition/StockEarningsCalendar_Extern.hpp"
#include "MLinkRest/AggregateCount.hpp"
#include "MLinkRest/AggregateNumeric.hpp"
#include "MLinkRest/AggregateString.hpp"
#include "MLinkRest/BucketRange.hpp"
#include "MLinkRest/FieldDesc.hpp"
#include "MLinkRest/MLinkCount.hpp"
#include "MLinkRest/MsgDesc.hpp"
#include "MLinkRest/MsgExpiryKey.hpp"
#include "MLinkRest/MsgOptionKey.hpp"
#include "MLinkRest/MsgTickerKey.hpp"
#include "MLinkRest/PostAck.hpp"
#include "MLinkRest/QueryResult.hpp"
#include "MLinkRest/UserMetaData.hpp"
#include "MLinkWs/MLinkAdmin.hpp"
#include "MLinkWs/MLinkDataAck.hpp"
#include "MLinkWs/MLinkHeartbeat.hpp"
#include "MLinkWs/MLinkLogon.hpp"
#include "MLinkWs/MLinkSignalReady.hpp"
#include "MLinkWs/MLinkStream.hpp"
#include "MLinkWs/MLinkStreamAck.hpp"
#include "MLinkWs/MLinkStreamCheckPt.hpp"
#include "MLinkWs/MLinkSubscribe.hpp"
#include "MLinkWs/MLinkSubscribeAck.hpp"
#include "MLinkWs/MLinkSubscribeCheckPt.hpp"
#include "NationsIndex/NationsIndexPrice.hpp"
#include "OptAnalytics/LiveImpliedQuote.hpp"
#include "OptAnalytics/LiveImpliedQuoteAdj.hpp"
#include "OptAnalytics/LiveRevConQuote.hpp"
#include "OptAnalytics/OptionPrintSet.hpp"
#include "OptAnalytics/OptionRiskFactor.hpp"
#include "OptAnalytics/StockBeta.hpp"
#include "OptExchAuction/SpdrAuctionState.hpp"
#include "OptionDefinition/OptExpiryDefinition.hpp"
#include "OptionDefinition/RegionalOptionComposite.hpp"
#include "OptionDefinition/RootDefinition.hpp"
#include "OptMarkData/OptionCloseMark.hpp"
#include "OptMarkData/OptionOpenInterest.hpp"
#include "OptMarkData/OptionOpenMark.hpp"
#include "OptMktData/OptionFlexEvent.hpp"
#include "OptMktData/OptionNbboQuote.hpp"
#include "OptMktData/OptionPrint.hpp"
#include "OptProbModel/OptionPrintProbability.hpp"
#include "OptProbModel/OptionQuoteProbability.hpp"
#include "OptSummaryData/OptionMarketSummary.hpp"
#include "OptSurface/HistoricalVolatilities.hpp"
#include "OptSurface/LiveAtmVol.hpp"
#include "OptSurface/LiveSurfaceCurve.hpp"
#include "OptSurface/LiveSurfaceFixedGrid.hpp"
#include "OptSurface/LiveSurfaceFixedTerm.hpp"
#include "OptSurface/OptionAtmMinuteBarData.hpp"
#include "RiskCalc/GetOptionBasket.hpp"
#include "RiskCalc/GetOptionPrice.hpp"
#include "RiskCalc/GetOptionVolatility.hpp"
#include "RiskCalc/OptionItemCalc.hpp"
#include "RiskCalc/OptionItemDef.hpp"
#include "SpreadDefinition/SpreadDefinition.hpp"
#include "SpreadDefinition/SpreadExchDefinition.hpp"
#include "SpreadExchData/SpreadExchOrder.hpp"
#include "SpreadMktData/SpreadBookMarkup.hpp"
#include "SpreadMktData/SpreadBookQuote.hpp"
#include "SpreadMktData/SpreadCloseMark.hpp"
#include "SpreadMktData/SpreadMarketSummary.hpp"
#include "SpreadMktData/SpreadOpenMark.hpp"
#include "SpreadMktData/SpreadPrint.hpp"
#include "SRATS/AuctionNotice.hpp"
#include "SRATS/AuctionNoticeBX.hpp"
#include "SRATS/AuctionNoticeRC.hpp"
#include "SRATS/AuctionNoticeSN.hpp"
#include "SRATS/AuctionPrint.hpp"
#include "SRATS/AuctionPrintBX.hpp"
#include "SRATS/AuctionPrintRC.hpp"
#include "SRATS/AuctionPrintSN.hpp"
#include "SRATS/AuctionState.hpp"
#include "SRATS/AutoResponderBX.hpp"
#include "SRATS/AutoResponderRC.hpp"
#include "SRATS/AutoResponderSN.hpp"
#include "SRATS/AutoResponderVegaDir.hpp"
#include "SRATS/NoticeCancel.hpp"
#include "SRATS/NoticeExecReport.hpp"
#include "SRATS/NoticeResponse.hpp"
#include "SRATS/ResponderMarkupBX.hpp"
#include "SRATS/ResponderMarkupRC.hpp"
#include "SRATS/ResponderMarkupSN.hpp"
#include "SRATS/ResponderMarkupVegaDir.hpp"
#include "SRATS/UserAuctionFilter.hpp"
#include "SRATS/UserAuctionTickerFilter.hpp"
#include "SRMLinkAnalytics/IndustryDefinition.hpp"
#include "SRMLinkAnalytics/LiveBasisCurve.hpp"
#include "SRMLinkAnalytics/LiveExpiryAtm.hpp"
#include "SRMLinkAnalytics/LiveExpirySurface.hpp"
#include "SRMLinkAnalytics/LiveIVarSwapFixedTerm.hpp"
#include "SRMLinkAnalytics/LiveSurfaceAtm.hpp"
#include "SRMLinkAnalytics/LiveSurfacePerf.hpp"
#include "SRMLinkAnalytics/OptionLookback.hpp"
#include "SRMLinkAnalytics/OptionOpenVega.hpp"
#include "SRMLinkAnalytics/OptionPrintSetSummary.hpp"
#include "SRMLinkAnalytics/SpanRiskCalculator.hpp"
#include "SRMLinkAnalytics/StockBorrowRate.hpp"
#include "SRMLinkAnalytics/StockDetail.hpp"
#include "SRMLinkAnalytics/SyntheticExpiryCloseMark.hpp"
#include "SRMLinkAnalytics/SyntheticExpiryOpenMark.hpp"
#include "SRMLinkAnalytics/VolTimeCalculator.hpp"
#include "StkProbModel/StockPrintProbability.hpp"
#include "StkProbModel/StockQuoteProbability.hpp"
#include "WSHCorporateEvent/WshFutureQuarters.hpp"

namespace spiderrock {
namespace protobuf {
namespace api {

template <typename Derived>
class Observer {
    AccountRouteConfig msgAccountRouteConfig{};
    AltSymbolMap msgAltSymbolMap{};
    AssetAccountControl msgAssetAccountControl{};
    AvailableStockLocates msgAvailableStockLocates{};
    BookControl msgBookControl{};
    ClientAccntStrategyMap msgClientAccntStrategyMap{};
    ClientAccountConfig msgClientAccountConfig{};
    ClientStockLocate msgClientStockLocate{};
    CustomControl msgCustomControl{};
    ExpirationControl msgExpirationControl{};
    FutureControl msgFutureControl{};
    GlobalRiskControl msgGlobalRiskControl{};
    IndustryControl msgIndustryControl{};
    MarRiskControl msgMarRiskControl{};
    MarRiskControlTkOverride msgMarRiskControlTkOverride{};
    MarRiskCounter msgMarRiskCounter{};
    RiskClassControl msgRiskClassControl{};
    SectorControl msgSectorControl{};
    SpdrRiskControl msgSpdrRiskControl{};
    SpdrRiskCounter msgSpdrRiskCounter{};
    StockLocateRequest msgStockLocateRequest{};
    StockLocateResponse msgStockLocateResponse{};
    StockPoolBorrowRate msgStockPoolBorrowRate{};
    StockThreshold msgStockThreshold{};
    SymbolControl msgSymbolControl{};
    UserDividendOverride msgUserDividendOverride{};
    UserRateOverride msgUserRateOverride{};
    IndexQuote msgIndexQuote{};
    MarketHoursConfig msgMarketHoursConfig{};
    NMSCircuitBreaker msgNMSCircuitBreaker{};
    OpraPrintType msgOpraPrintType{};
    OptionEOP msgOptionEOP{};
    OptionOpenAuction msgOptionOpenAuction{};
    OptionOpenAuctionSummary msgOptionOpenAuctionSummary{};
    OptionPrint2 msgOptionPrint2{};
    OptionPrintSummary msgOptionPrintSummary{};
    OptionSettlementMark msgOptionSettlementMark{};
    ProductPriceBand msgProductPriceBand{};
    ProductTradingStatus msgProductTradingStatus{};
    ProductTradingStatusV2 msgProductTradingStatusV2{};
    RFQQuoteBroadcast msgRFQQuoteBroadcast{};
    SOQConstituentSymbolMap msgSOQConstituentSymbolMap{};
    SOQStrikeRangeUpdate msgSOQStrikeRangeUpdate{};
    StockAuctionSummary msgStockAuctionSummary{};
    StockExchImbalance msgStockExchImbalance{};
    StockImbalance msgStockImbalance{};
    StockRegSHOStatus msgStockRegSHOStatus{};
    SyntheticExpiryQuote msgSyntheticExpiryQuote{};
    SyntheticFutureQuote msgSyntheticFutureQuote{};
    OptionTheoVol msgOptionTheoVol{};
    SpdrOptTheoRecord msgSpdrOptTheoRecord{};
    SpdrTheoExp2PtCurve msgSpdrTheoExp2PtCurve{};
    SpdrTheoExpSurface msgSpdrTheoExpSurface{};
    TheoSurfacePerf msgTheoSurfacePerf{};
    StockBetaExt msgStockBetaExt{};
    StockEarningsCalendar msgStockEarningsCalendar{};
    StockPrintMarkup msgStockPrintMarkup{};
    StockPrintSet msgStockPrintSet{};
    TickerAnalytics msgTickerAnalytics{};
    UserSDivOverride msgUserSDivOverride{};
    StockExchImbalanceV2 msgStockExchImbalanceV2{};
    StockCloseMark msgStockCloseMark{};
    StockOpenMark msgStockOpenMark{};
    StockBookQuote msgStockBookQuote{};
    StockPrint msgStockPrint{};
    StockMarketSummary msgStockMarketSummary{};
    StockMinuteBar msgStockMinuteBar{};
    RegionalUnderlierComposite msgRegionalUnderlierComposite{};
    TickerDefinition msgTickerDefinition{};
    TickerDefinitionExt msgTickerDefinitionExt{};
    FuturePrintMarkup msgFuturePrintMarkup{};
    FuturePrintSet msgFuturePrintSet{};
    FutureCloseMark msgFutureCloseMark{};
    FutureOpenMark msgFutureOpenMark{};
    FutureSettlementMark msgFutureSettlementMark{};
    FutureBookQuote msgFutureBookQuote{};
    FuturePrint msgFuturePrint{};
    FuturePrintProbability msgFuturePrintProbability{};
    FutureQuoteProbability msgFutureQuoteProbability{};
    FutureMarketSummary msgFutureMarketSummary{};
    FutureMinuteBar msgFutureMinuteBar{};
    CCodeDefinition msgCCodeDefinition{};
    ProductDefinitionV2 msgProductDefinitionV2{};
    CurrencyConversion msgCurrencyConversion{};
    GlobalDividends msgGlobalDividends{};
    GlobalRates msgGlobalRates{};
    StockEarningsCalendar_Extern msgStockEarningsCalendar_Extern{};
    AggregateCount msgAggregateCount{};
    AggregateNumeric msgAggregateNumeric{};
    AggregateString msgAggregateString{};
    BucketRange msgBucketRange{};
    FieldDesc msgFieldDesc{};
    MLinkCount msgMLinkCount{};
    MsgDesc msgMsgDesc{};
    MsgExpiryKey msgMsgExpiryKey{};
    MsgOptionKey msgMsgOptionKey{};
    MsgTickerKey msgMsgTickerKey{};
    PostAck msgPostAck{};
    QueryResult msgQueryResult{};
    UserMetaData msgUserMetaData{};
    MLinkAdmin msgMLinkAdmin{};
    MLinkDataAck msgMLinkDataAck{};
    MLinkHeartbeat msgMLinkHeartbeat{};
    MLinkLogon msgMLinkLogon{};
    MLinkSignalReady msgMLinkSignalReady{};
    MLinkStream msgMLinkStream{};
    MLinkStreamAck msgMLinkStreamAck{};
    MLinkStreamCheckPt msgMLinkStreamCheckPt{};
    MLinkSubscribe msgMLinkSubscribe{};
    MLinkSubscribeAck msgMLinkSubscribeAck{};
    MLinkSubscribeCheckPt msgMLinkSubscribeCheckPt{};
    NationsIndexPrice msgNationsIndexPrice{};
    LiveImpliedQuote msgLiveImpliedQuote{};
    LiveImpliedQuoteAdj msgLiveImpliedQuoteAdj{};
    LiveRevConQuote msgLiveRevConQuote{};
    OptionPrintSet msgOptionPrintSet{};
    OptionRiskFactor msgOptionRiskFactor{};
    StockBeta msgStockBeta{};
    SpdrAuctionState msgSpdrAuctionState{};
    OptExpiryDefinition msgOptExpiryDefinition{};
    RegionalOptionComposite msgRegionalOptionComposite{};
    RootDefinition msgRootDefinition{};
    OptionCloseMark msgOptionCloseMark{};
    OptionOpenInterest msgOptionOpenInterest{};
    OptionOpenMark msgOptionOpenMark{};
    OptionFlexEvent msgOptionFlexEvent{};
    OptionNbboQuote msgOptionNbboQuote{};
    OptionPrint msgOptionPrint{};
    OptionPrintProbability msgOptionPrintProbability{};
    OptionQuoteProbability msgOptionQuoteProbability{};
    OptionMarketSummary msgOptionMarketSummary{};
    HistoricalVolatilities msgHistoricalVolatilities{};
    LiveAtmVol msgLiveAtmVol{};
    LiveSurfaceCurve msgLiveSurfaceCurve{};
    LiveSurfaceFixedGrid msgLiveSurfaceFixedGrid{};
    LiveSurfaceFixedTerm msgLiveSurfaceFixedTerm{};
    OptionAtmMinuteBarData msgOptionAtmMinuteBarData{};
    GetOptionBasket msgGetOptionBasket{};
    GetOptionPrice msgGetOptionPrice{};
    GetOptionVolatility msgGetOptionVolatility{};
    OptionItemCalc msgOptionItemCalc{};
    OptionItemDef msgOptionItemDef{};
    SpreadDefinition msgSpreadDefinition{};
    SpreadExchDefinition msgSpreadExchDefinition{};
    SpreadExchOrder msgSpreadExchOrder{};
    SpreadBookMarkup msgSpreadBookMarkup{};
    SpreadBookQuote msgSpreadBookQuote{};
    SpreadCloseMark msgSpreadCloseMark{};
    SpreadMarketSummary msgSpreadMarketSummary{};
    SpreadOpenMark msgSpreadOpenMark{};
    SpreadPrint msgSpreadPrint{};
    AuctionNotice msgAuctionNotice{};
    AuctionNoticeBX msgAuctionNoticeBX{};
    AuctionNoticeRC msgAuctionNoticeRC{};
    AuctionNoticeSN msgAuctionNoticeSN{};
    AuctionPrint msgAuctionPrint{};
    AuctionPrintBX msgAuctionPrintBX{};
    AuctionPrintRC msgAuctionPrintRC{};
    AuctionPrintSN msgAuctionPrintSN{};
    AuctionState msgAuctionState{};
    AutoResponderBX msgAutoResponderBX{};
    AutoResponderRC msgAutoResponderRC{};
    AutoResponderSN msgAutoResponderSN{};
    AutoResponderVegaDir msgAutoResponderVegaDir{};
    NoticeCancel msgNoticeCancel{};
    NoticeExecReport msgNoticeExecReport{};
    NoticeResponse msgNoticeResponse{};
    ResponderMarkupBX msgResponderMarkupBX{};
    ResponderMarkupRC msgResponderMarkupRC{};
    ResponderMarkupSN msgResponderMarkupSN{};
    ResponderMarkupVegaDir msgResponderMarkupVegaDir{};
    UserAuctionFilter msgUserAuctionFilter{};
    UserAuctionTickerFilter msgUserAuctionTickerFilter{};
    IndustryDefinition msgIndustryDefinition{};
    LiveBasisCurve msgLiveBasisCurve{};
    LiveExpiryAtm msgLiveExpiryAtm{};
    LiveExpirySurface msgLiveExpirySurface{};
    LiveIVarSwapFixedTerm msgLiveIVarSwapFixedTerm{};
    LiveSurfaceAtm msgLiveSurfaceAtm{};
    LiveSurfacePerf msgLiveSurfacePerf{};
    OptionLookback msgOptionLookback{};
    OptionOpenVega msgOptionOpenVega{};
    OptionPrintSetSummary msgOptionPrintSetSummary{};
    SpanRiskCalculator msgSpanRiskCalculator{};
    StockBorrowRate msgStockBorrowRate{};
    StockDetail msgStockDetail{};
    SyntheticExpiryCloseMark msgSyntheticExpiryCloseMark{};
    SyntheticExpiryOpenMark msgSyntheticExpiryOpenMark{};
    VolTimeCalculator msgVolTimeCalculator{};
    StockPrintProbability msgStockPrintProbability{};
    StockQuoteProbability msgStockQuoteProbability{};
    WshFutureQuarters msgWshFutureQuarters{};

    public:

    int process_buffer(const char* buf, int len) {
        int processed = 0;
        const char* msg = buf;
        while ((msg - buf) + 14 <= len) {
            if (msg[0] == '\r' && msg[1] == '\n' && msg[2] == 'P') {
                // Extract messageTypeNumber and messageLength
                int messageTypeNumber = 0;
                for (int i = 3; i < 8; ++i) {
                    if (msg[i] >= '0' && msg[i] <= '9') {
                        messageTypeNumber = messageTypeNumber * 10 + msg[i] - '0';
                    }
                    else {
                        // Handle invalid message format
                         break;
                    }
                }
                int messageLength = 0;
                for (int i = 8; i < 14; ++i) {
                    if (msg[i] >= '0' && msg[i] <= '9') {
                        messageLength = messageLength * 10 + msg[i] - '0';
                    }
                    else {
                        // Handle invalid message format
                        break;
                    }
                }
                // Ensure that the message is long enough
                if ((msg - buf) + 14 + messageLength <= len) {
                    // Dispatch the message with messageTypeNumber and messageLength
                    dispatch_message(messageTypeNumber, msg + 14, messageLength);
                    msg += 14 + messageLength;
                    processed += 14 + messageLength;
                }
                else {
                    // Message is incomplete, break out of the loop
                    break;
                }
            }
            else {
                 // Invalid message format, break out of the loop
                break;
            }
        } // end of while
        return processed;
    }  

    void dispatch_message(int message_number, const char *buf, int len) {
        switch (message_number) {
            case 1810: {  // AccountRouteConfig
			    msgAccountRouteConfig.Clear();
                msgAccountRouteConfig.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const AccountRouteConfig &)msgAccountRouteConfig);
                break;
            }
            case 1815: {  // AltSymbolMap
			    msgAltSymbolMap.Clear();
                msgAltSymbolMap.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const AltSymbolMap &)msgAltSymbolMap);
                break;
            }
            case 1630: {  // AssetAccountControl
			    msgAssetAccountControl.Clear();
                msgAssetAccountControl.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const AssetAccountControl &)msgAssetAccountControl);
                break;
            }
            case 1725: {  // AvailableStockLocates
			    msgAvailableStockLocates.Clear();
                msgAvailableStockLocates.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const AvailableStockLocates &)msgAvailableStockLocates);
                break;
            }
            case 1635: {  // BookControl
			    msgBookControl.Clear();
                msgBookControl.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const BookControl &)msgBookControl);
                break;
            }
            case 1830: {  // ClientAccntStrategyMap
			    msgClientAccntStrategyMap.Clear();
                msgClientAccntStrategyMap.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const ClientAccntStrategyMap &)msgClientAccntStrategyMap);
                break;
            }
            case 1835: {  // ClientAccountConfig
			    msgClientAccountConfig.Clear();
                msgClientAccountConfig.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const ClientAccountConfig &)msgClientAccountConfig);
                break;
            }
            case 1731: {  // ClientStockLocate
			    msgClientStockLocate.Clear();
                msgClientStockLocate.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const ClientStockLocate &)msgClientStockLocate);
                break;
            }
            case 1640: {  // CustomControl
			    msgCustomControl.Clear();
                msgCustomControl.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const CustomControl &)msgCustomControl);
                break;
            }
            case 1645: {  // ExpirationControl
			    msgExpirationControl.Clear();
                msgExpirationControl.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const ExpirationControl &)msgExpirationControl);
                break;
            }
            case 1650: {  // FutureControl
			    msgFutureControl.Clear();
                msgFutureControl.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const FutureControl &)msgFutureControl);
                break;
            }
            case 4540: {  // GlobalRiskControl
			    msgGlobalRiskControl.Clear();
                msgGlobalRiskControl.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const GlobalRiskControl &)msgGlobalRiskControl);
                break;
            }
            case 1655: {  // IndustryControl
			    msgIndustryControl.Clear();
                msgIndustryControl.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const IndustryControl &)msgIndustryControl);
                break;
            }
            case 4550: {  // MarRiskControl
			    msgMarRiskControl.Clear();
                msgMarRiskControl.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const MarRiskControl &)msgMarRiskControl);
                break;
            }
            case 4551: {  // MarRiskControlTkOverride
			    msgMarRiskControlTkOverride.Clear();
                msgMarRiskControlTkOverride.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const MarRiskControlTkOverride &)msgMarRiskControlTkOverride);
                break;
            }
            case 4670: {  // MarRiskCounter
			    msgMarRiskCounter.Clear();
                msgMarRiskCounter.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const MarRiskCounter &)msgMarRiskCounter);
                break;
            }
            case 1660: {  // RiskClassControl
			    msgRiskClassControl.Clear();
                msgRiskClassControl.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const RiskClassControl &)msgRiskClassControl);
                break;
            }
            case 1665: {  // SectorControl
			    msgSectorControl.Clear();
                msgSectorControl.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const SectorControl &)msgSectorControl);
                break;
            }
            case 4560: {  // SpdrRiskControl
			    msgSpdrRiskControl.Clear();
                msgSpdrRiskControl.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const SpdrRiskControl &)msgSpdrRiskControl);
                break;
            }
            case 4660: {  // SpdrRiskCounter
			    msgSpdrRiskCounter.Clear();
                msgSpdrRiskCounter.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const SpdrRiskCounter &)msgSpdrRiskCounter);
                break;
            }
            case 1735: {  // StockLocateRequest
			    msgStockLocateRequest.Clear();
                msgStockLocateRequest.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const StockLocateRequest &)msgStockLocateRequest);
                break;
            }
            case 1740: {  // StockLocateResponse
			    msgStockLocateResponse.Clear();
                msgStockLocateResponse.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const StockLocateResponse &)msgStockLocateResponse);
                break;
            }
            case 1745: {  // StockPoolBorrowRate
			    msgStockPoolBorrowRate.Clear();
                msgStockPoolBorrowRate.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const StockPoolBorrowRate &)msgStockPoolBorrowRate);
                break;
            }
            case 3065: {  // StockThreshold
			    msgStockThreshold.Clear();
                msgStockThreshold.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const StockThreshold &)msgStockThreshold);
                break;
            }
            case 1670: {  // SymbolControl
			    msgSymbolControl.Clear();
                msgSymbolControl.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const SymbolControl &)msgSymbolControl);
                break;
            }
            case 3630: {  // UserDividendOverride
			    msgUserDividendOverride.Clear();
                msgUserDividendOverride.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const UserDividendOverride &)msgUserDividendOverride);
                break;
            }
            case 3635: {  // UserRateOverride
			    msgUserRateOverride.Clear();
                msgUserRateOverride.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const UserRateOverride &)msgUserRateOverride);
                break;
            }
            case 2675: {  // IndexQuote
			    msgIndexQuote.Clear();
                msgIndexQuote.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const IndexQuote &)msgIndexQuote);
                break;
            }
            case 4485: {  // MarketHoursConfig
			    msgMarketHoursConfig.Clear();
                msgMarketHoursConfig.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const MarketHoursConfig &)msgMarketHoursConfig);
                break;
            }
            case 4450: {  // NMSCircuitBreaker
			    msgNMSCircuitBreaker.Clear();
                msgNMSCircuitBreaker.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const NMSCircuitBreaker &)msgNMSCircuitBreaker);
                break;
            }
            case 2750: {  // OpraPrintType
			    msgOpraPrintType.Clear();
                msgOpraPrintType.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const OpraPrintType &)msgOpraPrintType);
                break;
            }
            case 2760: {  // OptionEOP
			    msgOptionEOP.Clear();
                msgOptionEOP.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const OptionEOP &)msgOptionEOP);
                break;
            }
            case 2790: {  // OptionOpenAuction
			    msgOptionOpenAuction.Clear();
                msgOptionOpenAuction.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const OptionOpenAuction &)msgOptionOpenAuction);
                break;
            }
            case 2795: {  // OptionOpenAuctionSummary
			    msgOptionOpenAuctionSummary.Clear();
                msgOptionOpenAuctionSummary.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const OptionOpenAuctionSummary &)msgOptionOpenAuctionSummary);
                break;
            }
            case 2805: {  // OptionPrint2
			    msgOptionPrint2.Clear();
                msgOptionPrint2.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const OptionPrint2 &)msgOptionPrint2);
                break;
            }
            case 2825: {  // OptionPrintSummary
			    msgOptionPrintSummary.Clear();
                msgOptionPrintSummary.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const OptionPrintSummary &)msgOptionPrintSummary);
                break;
            }
            case 3150: {  // OptionSettlementMark
			    msgOptionSettlementMark.Clear();
                msgOptionSettlementMark.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const OptionSettlementMark &)msgOptionSettlementMark);
                break;
            }
            case 4460: {  // ProductPriceBand
			    msgProductPriceBand.Clear();
                msgProductPriceBand.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const ProductPriceBand &)msgProductPriceBand);
                break;
            }
            case 4465: {  // ProductTradingStatus
			    msgProductTradingStatus.Clear();
                msgProductTradingStatus.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const ProductTradingStatus &)msgProductTradingStatus);
                break;
            }
            case 4470: {  // ProductTradingStatusV2
			    msgProductTradingStatusV2.Clear();
                msgProductTradingStatusV2.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const ProductTradingStatusV2 &)msgProductTradingStatusV2);
                break;
            }
            case 6225: {  // RFQQuoteBroadcast
			    msgRFQQuoteBroadcast.Clear();
                msgRFQQuoteBroadcast.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const RFQQuoteBroadcast &)msgRFQQuoteBroadcast);
                break;
            }
            case 2830: {  // SOQConstituentSymbolMap
			    msgSOQConstituentSymbolMap.Clear();
                msgSOQConstituentSymbolMap.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const SOQConstituentSymbolMap &)msgSOQConstituentSymbolMap);
                break;
            }
            case 2835: {  // SOQStrikeRangeUpdate
			    msgSOQStrikeRangeUpdate.Clear();
                msgSOQStrikeRangeUpdate.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const SOQStrikeRangeUpdate &)msgSOQStrikeRangeUpdate);
                break;
            }
            case 2995: {  // StockAuctionSummary
			    msgStockAuctionSummary.Clear();
                msgStockAuctionSummary.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const StockAuctionSummary &)msgStockAuctionSummary);
                break;
            }
            case 3015: {  // StockExchImbalance
			    msgStockExchImbalance.Clear();
                msgStockExchImbalance.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const StockExchImbalance &)msgStockExchImbalance);
                break;
            }
            case 3035: {  // StockImbalance
			    msgStockImbalance.Clear();
                msgStockImbalance.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const StockImbalance &)msgStockImbalance);
                break;
            }
            case 4475: {  // StockRegSHOStatus
			    msgStockRegSHOStatus.Clear();
                msgStockRegSHOStatus.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const StockRegSHOStatus &)msgStockRegSHOStatus);
                break;
            }
            case 2700: {  // SyntheticExpiryQuote
			    msgSyntheticExpiryQuote.Clear();
                msgSyntheticExpiryQuote.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const SyntheticExpiryQuote &)msgSyntheticExpiryQuote);
                break;
            }
            case 2695: {  // SyntheticFutureQuote
			    msgSyntheticFutureQuote.Clear();
                msgSyntheticFutureQuote.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const SyntheticFutureQuote &)msgSyntheticFutureQuote);
                break;
            }
            case 5055: {  // OptionTheoVol
			    msgOptionTheoVol.Clear();
                msgOptionTheoVol.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const OptionTheoVol &)msgOptionTheoVol);
                break;
            }
            case 1950: {  // SpdrOptTheoRecord
			    msgSpdrOptTheoRecord.Clear();
                msgSpdrOptTheoRecord.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const SpdrOptTheoRecord &)msgSpdrOptTheoRecord);
                break;
            }
            case 1955: {  // SpdrTheoExp2PtCurve
			    msgSpdrTheoExp2PtCurve.Clear();
                msgSpdrTheoExp2PtCurve.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const SpdrTheoExp2PtCurve &)msgSpdrTheoExp2PtCurve);
                break;
            }
            case 1960: {  // SpdrTheoExpSurface
			    msgSpdrTheoExpSurface.Clear();
                msgSpdrTheoExpSurface.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const SpdrTheoExpSurface &)msgSpdrTheoExpSurface);
                break;
            }
            case 1105: {  // TheoSurfacePerf
			    msgTheoSurfacePerf.Clear();
                msgTheoSurfacePerf.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const TheoSurfacePerf &)msgTheoSurfacePerf);
                break;
            }
            case 3245: {  // StockBetaExt
			    msgStockBetaExt.Clear();
                msgStockBetaExt.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const StockBetaExt &)msgStockBetaExt);
                break;
            }
            case 3620: {  // StockEarningsCalendar
			    msgStockEarningsCalendar.Clear();
                msgStockEarningsCalendar.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const StockEarningsCalendar &)msgStockEarningsCalendar);
                break;
            }
            case 3055: {  // StockPrintMarkup
			    msgStockPrintMarkup.Clear();
                msgStockPrintMarkup.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const StockPrintMarkup &)msgStockPrintMarkup);
                break;
            }
            case 3060: {  // StockPrintSet
			    msgStockPrintSet.Clear();
                msgStockPrintSet.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const StockPrintSet &)msgStockPrintSet);
                break;
            }
            case 3255: {  // TickerAnalytics
			    msgTickerAnalytics.Clear();
                msgTickerAnalytics.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const TickerAnalytics &)msgTickerAnalytics);
                break;
            }
            case 3640: {  // UserSDivOverride
			    msgUserSDivOverride.Clear();
                msgUserSDivOverride.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const UserSDivOverride &)msgUserSDivOverride);
                break;
            }
            case 3020: {  // StockExchImbalanceV2
			    msgStockExchImbalanceV2.Clear();
                msgStockExchImbalanceV2.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const StockExchImbalanceV2 &)msgStockExchImbalanceV2);
                break;
            }
            case 3165: {  // StockCloseMark
			    msgStockCloseMark.Clear();
                msgStockCloseMark.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const StockCloseMark &)msgStockCloseMark);
                break;
            }
            case 3170: {  // StockOpenMark
			    msgStockOpenMark.Clear();
                msgStockOpenMark.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const StockOpenMark &)msgStockOpenMark);
                break;
            }
            case 3000: {  // StockBookQuote
			    msgStockBookQuote.Clear();
                msgStockBookQuote.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const StockBookQuote &)msgStockBookQuote);
                break;
            }
            case 3045: {  // StockPrint
			    msgStockPrint.Clear();
                msgStockPrint.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const StockPrint &)msgStockPrint);
                break;
            }
            case 3040: {  // StockMarketSummary
			    msgStockMarketSummary.Clear();
                msgStockMarketSummary.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const StockMarketSummary &)msgStockMarketSummary);
                break;
            }
            case 1175: {  // StockMinuteBar
			    msgStockMinuteBar.Clear();
                msgStockMinuteBar.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const StockMinuteBar &)msgStockMinuteBar);
                break;
            }
            case 4400: {  // RegionalUnderlierComposite
			    msgRegionalUnderlierComposite.Clear();
                msgRegionalUnderlierComposite.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const RegionalUnderlierComposite &)msgRegionalUnderlierComposite);
                break;
            }
            case 4375: {  // TickerDefinition
			    msgTickerDefinition.Clear();
                msgTickerDefinition.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const TickerDefinition &)msgTickerDefinition);
                break;
            }
            case 4380: {  // TickerDefinitionExt
			    msgTickerDefinitionExt.Clear();
                msgTickerDefinitionExt.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const TickerDefinitionExt &)msgTickerDefinitionExt);
                break;
            }
            case 2605: {  // FuturePrintMarkup
			    msgFuturePrintMarkup.Clear();
                msgFuturePrintMarkup.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const FuturePrintMarkup &)msgFuturePrintMarkup);
                break;
            }
            case 2610: {  // FuturePrintSet
			    msgFuturePrintSet.Clear();
                msgFuturePrintSet.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const FuturePrintSet &)msgFuturePrintSet);
                break;
            }
            case 3120: {  // FutureCloseMark
			    msgFutureCloseMark.Clear();
                msgFutureCloseMark.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const FutureCloseMark &)msgFutureCloseMark);
                break;
            }
            case 3125: {  // FutureOpenMark
			    msgFutureOpenMark.Clear();
                msgFutureOpenMark.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const FutureOpenMark &)msgFutureOpenMark);
                break;
            }
            case 3130: {  // FutureSettlementMark
			    msgFutureSettlementMark.Clear();
                msgFutureSettlementMark.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const FutureSettlementMark &)msgFutureSettlementMark);
                break;
            }
            case 2580: {  // FutureBookQuote
			    msgFutureBookQuote.Clear();
                msgFutureBookQuote.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const FutureBookQuote &)msgFutureBookQuote);
                break;
            }
            case 2595: {  // FuturePrint
			    msgFuturePrint.Clear();
                msgFuturePrint.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const FuturePrint &)msgFuturePrint);
                break;
            }
            case 4255: {  // FuturePrintProbability
			    msgFuturePrintProbability.Clear();
                msgFuturePrintProbability.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const FuturePrintProbability &)msgFuturePrintProbability);
                break;
            }
            case 4260: {  // FutureQuoteProbability
			    msgFutureQuoteProbability.Clear();
                msgFutureQuoteProbability.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const FutureQuoteProbability &)msgFutureQuoteProbability);
                break;
            }
            case 2590: {  // FutureMarketSummary
			    msgFutureMarketSummary.Clear();
                msgFutureMarketSummary.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const FutureMarketSummary &)msgFutureMarketSummary);
                break;
            }
            case 1160: {  // FutureMinuteBar
			    msgFutureMinuteBar.Clear();
                msgFutureMinuteBar.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const FutureMinuteBar &)msgFutureMinuteBar);
                break;
            }
            case 4335: {  // CCodeDefinition
			    msgCCodeDefinition.Clear();
                msgCCodeDefinition.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const CCodeDefinition &)msgCCodeDefinition);
                break;
            }
            case 4360: {  // ProductDefinitionV2
			    msgProductDefinitionV2.Clear();
                msgProductDefinitionV2.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const ProductDefinitionV2 &)msgProductDefinitionV2);
                break;
            }
            case 2540: {  // CurrencyConversion
			    msgCurrencyConversion.Clear();
                msgCurrencyConversion.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const CurrencyConversion &)msgCurrencyConversion);
                break;
            }
            case 3590: {  // GlobalDividends
			    msgGlobalDividends.Clear();
                msgGlobalDividends.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const GlobalDividends &)msgGlobalDividends);
                break;
            }
            case 3595: {  // GlobalRates
			    msgGlobalRates.Clear();
                msgGlobalRates.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const GlobalRates &)msgGlobalRates);
                break;
            }
            case 2150: {  // StockEarningsCalendar_Extern
			    msgStockEarningsCalendar_Extern.Clear();
                msgStockEarningsCalendar_Extern.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const StockEarningsCalendar_Extern &)msgStockEarningsCalendar_Extern);
                break;
            }
            case 3456: {  // AggregateCount
			    msgAggregateCount.Clear();
                msgAggregateCount.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const AggregateCount &)msgAggregateCount);
                break;
            }
            case 3450: {  // AggregateNumeric
			    msgAggregateNumeric.Clear();
                msgAggregateNumeric.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const AggregateNumeric &)msgAggregateNumeric);
                break;
            }
            case 3455: {  // AggregateString
			    msgAggregateString.Clear();
                msgAggregateString.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const AggregateString &)msgAggregateString);
                break;
            }
            case 3460: {  // BucketRange
			    msgBucketRange.Clear();
                msgBucketRange.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const BucketRange &)msgBucketRange);
                break;
            }
            case 3325: {  // FieldDesc
			    msgFieldDesc.Clear();
                msgFieldDesc.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const FieldDesc &)msgFieldDesc);
                break;
            }
            case 3360: {  // MLinkCount
			    msgMLinkCount.Clear();
                msgMLinkCount.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const MLinkCount &)msgMLinkCount);
                break;
            }
            case 3415: {  // MsgDesc
			    msgMsgDesc.Clear();
                msgMsgDesc.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const MsgDesc &)msgMsgDesc);
                break;
            }
            case 3420: {  // MsgExpiryKey
			    msgMsgExpiryKey.Clear();
                msgMsgExpiryKey.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const MsgExpiryKey &)msgMsgExpiryKey);
                break;
            }
            case 3430: {  // MsgOptionKey
			    msgMsgOptionKey.Clear();
                msgMsgOptionKey.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const MsgOptionKey &)msgMsgOptionKey);
                break;
            }
            case 3435: {  // MsgTickerKey
			    msgMsgTickerKey.Clear();
                msgMsgTickerKey.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const MsgTickerKey &)msgMsgTickerKey);
                break;
            }
            case 3440: {  // PostAck
			    msgPostAck.Clear();
                msgPostAck.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const PostAck &)msgPostAck);
                break;
            }
            case 3445: {  // QueryResult
			    msgQueryResult.Clear();
                msgQueryResult.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const QueryResult &)msgQueryResult);
                break;
            }
            case 3470: {  // UserMetaData
			    msgUserMetaData.Clear();
                msgUserMetaData.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const UserMetaData &)msgUserMetaData);
                break;
            }
            case 3345: {  // MLinkAdmin
			    msgMLinkAdmin.Clear();
                msgMLinkAdmin.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const MLinkAdmin &)msgMLinkAdmin);
                break;
            }
            case 3365: {  // MLinkDataAck
			    msgMLinkDataAck.Clear();
                msgMLinkDataAck.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const MLinkDataAck &)msgMLinkDataAck);
                break;
            }
            case 3368: {  // MLinkHeartbeat
			    msgMLinkHeartbeat.Clear();
                msgMLinkHeartbeat.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const MLinkHeartbeat &)msgMLinkHeartbeat);
                break;
            }
            case 3370: {  // MLinkLogon
			    msgMLinkLogon.Clear();
                msgMLinkLogon.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const MLinkLogon &)msgMLinkLogon);
                break;
            }
            case 3410: {  // MLinkSignalReady
			    msgMLinkSignalReady.Clear();
                msgMLinkSignalReady.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const MLinkSignalReady &)msgMLinkSignalReady);
                break;
            }
            case 3380: {  // MLinkStream
			    msgMLinkStream.Clear();
                msgMLinkStream.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const MLinkStream &)msgMLinkStream);
                break;
            }
            case 3381: {  // MLinkStreamAck
			    msgMLinkStreamAck.Clear();
                msgMLinkStreamAck.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const MLinkStreamAck &)msgMLinkStreamAck);
                break;
            }
            case 3382: {  // MLinkStreamCheckPt
			    msgMLinkStreamCheckPt.Clear();
                msgMLinkStreamCheckPt.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const MLinkStreamCheckPt &)msgMLinkStreamCheckPt);
                break;
            }
            case 3386: {  // MLinkSubscribe
			    msgMLinkSubscribe.Clear();
                msgMLinkSubscribe.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const MLinkSubscribe &)msgMLinkSubscribe);
                break;
            }
            case 3387: {  // MLinkSubscribeAck
			    msgMLinkSubscribeAck.Clear();
                msgMLinkSubscribeAck.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const MLinkSubscribeAck &)msgMLinkSubscribeAck);
                break;
            }
            case 3388: {  // MLinkSubscribeCheckPt
			    msgMLinkSubscribeCheckPt.Clear();
                msgMLinkSubscribeCheckPt.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const MLinkSubscribeCheckPt &)msgMLinkSubscribeCheckPt);
                break;
            }
            case 7800: {  // NationsIndexPrice
			    msgNationsIndexPrice.Clear();
                msgNationsIndexPrice.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const NationsIndexPrice &)msgNationsIndexPrice);
                break;
            }
            case 1015: {  // LiveImpliedQuote
			    msgLiveImpliedQuote.Clear();
                msgLiveImpliedQuote.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const LiveImpliedQuote &)msgLiveImpliedQuote);
                break;
            }
            case 1020: {  // LiveImpliedQuoteAdj
			    msgLiveImpliedQuoteAdj.Clear();
                msgLiveImpliedQuoteAdj.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const LiveImpliedQuoteAdj &)msgLiveImpliedQuoteAdj);
                break;
            }
            case 1125: {  // LiveRevConQuote
			    msgLiveRevConQuote.Clear();
                msgLiveRevConQuote.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const LiveRevConQuote &)msgLiveRevConQuote);
                break;
            }
            case 2815: {  // OptionPrintSet
			    msgOptionPrintSet.Clear();
                msgOptionPrintSet.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const OptionPrintSet &)msgOptionPrintSet);
                break;
            }
            case 1095: {  // OptionRiskFactor
			    msgOptionRiskFactor.Clear();
                msgOptionRiskFactor.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const OptionRiskFactor &)msgOptionRiskFactor);
                break;
            }
            case 3240: {  // StockBeta
			    msgStockBeta.Clear();
                msgStockBeta.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const StockBeta &)msgStockBeta);
                break;
            }
            case 2525: {  // SpdrAuctionState
			    msgSpdrAuctionState.Clear();
                msgSpdrAuctionState.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const SpdrAuctionState &)msgSpdrAuctionState);
                break;
            }
            case 4355: {  // OptExpiryDefinition
			    msgOptExpiryDefinition.Clear();
                msgOptExpiryDefinition.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const OptExpiryDefinition &)msgOptExpiryDefinition);
                break;
            }
            case 4405: {  // RegionalOptionComposite
			    msgRegionalOptionComposite.Clear();
                msgRegionalOptionComposite.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const RegionalOptionComposite &)msgRegionalOptionComposite);
                break;
            }
            case 4365: {  // RootDefinition
			    msgRootDefinition.Clear();
                msgRootDefinition.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const RootDefinition &)msgRootDefinition);
                break;
            }
            case 3140: {  // OptionCloseMark
			    msgOptionCloseMark.Clear();
                msgOptionCloseMark.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const OptionCloseMark &)msgOptionCloseMark);
                break;
            }
            case 3230: {  // OptionOpenInterest
			    msgOptionOpenInterest.Clear();
                msgOptionOpenInterest.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const OptionOpenInterest &)msgOptionOpenInterest);
                break;
            }
            case 3145: {  // OptionOpenMark
			    msgOptionOpenMark.Clear();
                msgOptionOpenMark.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const OptionOpenMark &)msgOptionOpenMark);
                break;
            }
            case 2845: {  // OptionFlexEvent
			    msgOptionFlexEvent.Clear();
                msgOptionFlexEvent.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const OptionFlexEvent &)msgOptionFlexEvent);
                break;
            }
            case 2785: {  // OptionNbboQuote
			    msgOptionNbboQuote.Clear();
                msgOptionNbboQuote.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const OptionNbboQuote &)msgOptionNbboQuote);
                break;
            }
            case 2800: {  // OptionPrint
			    msgOptionPrint.Clear();
                msgOptionPrint.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const OptionPrint &)msgOptionPrint);
                break;
            }
            case 4265: {  // OptionPrintProbability
			    msgOptionPrintProbability.Clear();
                msgOptionPrintProbability.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const OptionPrintProbability &)msgOptionPrintProbability);
                break;
            }
            case 4270: {  // OptionQuoteProbability
			    msgOptionQuoteProbability.Clear();
                msgOptionQuoteProbability.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const OptionQuoteProbability &)msgOptionQuoteProbability);
                break;
            }
            case 2780: {  // OptionMarketSummary
			    msgOptionMarketSummary.Clear();
                msgOptionMarketSummary.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const OptionMarketSummary &)msgOptionMarketSummary);
                break;
            }
            case 3225: {  // HistoricalVolatilities
			    msgHistoricalVolatilities.Clear();
                msgHistoricalVolatilities.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const HistoricalVolatilities &)msgHistoricalVolatilities);
                break;
            }
            case 1010: {  // LiveAtmVol
			    msgLiveAtmVol.Clear();
                msgLiveAtmVol.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const LiveAtmVol &)msgLiveAtmVol);
                break;
            }
            case 1035: {  // LiveSurfaceCurve
			    msgLiveSurfaceCurve.Clear();
                msgLiveSurfaceCurve.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const LiveSurfaceCurve &)msgLiveSurfaceCurve);
                break;
            }
            case 1040: {  // LiveSurfaceFixedGrid
			    msgLiveSurfaceFixedGrid.Clear();
                msgLiveSurfaceFixedGrid.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const LiveSurfaceFixedGrid &)msgLiveSurfaceFixedGrid);
                break;
            }
            case 1045: {  // LiveSurfaceFixedTerm
			    msgLiveSurfaceFixedTerm.Clear();
                msgLiveSurfaceFixedTerm.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const LiveSurfaceFixedTerm &)msgLiveSurfaceFixedTerm);
                break;
            }
            case 6820: {  // OptionAtmMinuteBarData
			    msgOptionAtmMinuteBarData.Clear();
                msgOptionAtmMinuteBarData.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const OptionAtmMinuteBarData &)msgOptionAtmMinuteBarData);
                break;
            }
            case 3485: {  // GetOptionBasket
			    msgGetOptionBasket.Clear();
                msgGetOptionBasket.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const GetOptionBasket &)msgGetOptionBasket);
                break;
            }
            case 3335: {  // GetOptionPrice
			    msgGetOptionPrice.Clear();
                msgGetOptionPrice.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const GetOptionPrice &)msgGetOptionPrice);
                break;
            }
            case 3340: {  // GetOptionVolatility
			    msgGetOptionVolatility.Clear();
                msgGetOptionVolatility.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const GetOptionVolatility &)msgGetOptionVolatility);
                break;
            }
            case 3487: {  // OptionItemCalc
			    msgOptionItemCalc.Clear();
                msgOptionItemCalc.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const OptionItemCalc &)msgOptionItemCalc);
                break;
            }
            case 3486: {  // OptionItemDef
			    msgOptionItemDef.Clear();
                msgOptionItemDef.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const OptionItemDef &)msgOptionItemDef);
                break;
            }
            case 4390: {  // SpreadDefinition
			    msgSpreadDefinition.Clear();
                msgSpreadDefinition.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const SpreadDefinition &)msgSpreadDefinition);
                break;
            }
            case 4395: {  // SpreadExchDefinition
			    msgSpreadExchDefinition.Clear();
                msgSpreadExchDefinition.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const SpreadExchDefinition &)msgSpreadExchDefinition);
                break;
            }
            case 2915: {  // SpreadExchOrder
			    msgSpreadExchOrder.Clear();
                msgSpreadExchOrder.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const SpreadExchOrder &)msgSpreadExchOrder);
                break;
            }
            case 2895: {  // SpreadBookMarkup
			    msgSpreadBookMarkup.Clear();
                msgSpreadBookMarkup.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const SpreadBookMarkup &)msgSpreadBookMarkup);
                break;
            }
            case 2900: {  // SpreadBookQuote
			    msgSpreadBookQuote.Clear();
                msgSpreadBookQuote.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const SpreadBookQuote &)msgSpreadBookQuote);
                break;
            }
            case 3155: {  // SpreadCloseMark
			    msgSpreadCloseMark.Clear();
                msgSpreadCloseMark.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const SpreadCloseMark &)msgSpreadCloseMark);
                break;
            }
            case 2925: {  // SpreadMarketSummary
			    msgSpreadMarketSummary.Clear();
                msgSpreadMarketSummary.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const SpreadMarketSummary &)msgSpreadMarketSummary);
                break;
            }
            case 3160: {  // SpreadOpenMark
			    msgSpreadOpenMark.Clear();
                msgSpreadOpenMark.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const SpreadOpenMark &)msgSpreadOpenMark);
                break;
            }
            case 2930: {  // SpreadPrint
			    msgSpreadPrint.Clear();
                msgSpreadPrint.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const SpreadPrint &)msgSpreadPrint);
                break;
            }
            case 2465: {  // AuctionNotice
			    msgAuctionNotice.Clear();
                msgAuctionNotice.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const AuctionNotice &)msgAuctionNotice);
                break;
            }
            case 2468: {  // AuctionNoticeBX
			    msgAuctionNoticeBX.Clear();
                msgAuctionNoticeBX.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const AuctionNoticeBX &)msgAuctionNoticeBX);
                break;
            }
            case 2466: {  // AuctionNoticeRC
			    msgAuctionNoticeRC.Clear();
                msgAuctionNoticeRC.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const AuctionNoticeRC &)msgAuctionNoticeRC);
                break;
            }
            case 2467: {  // AuctionNoticeSN
			    msgAuctionNoticeSN.Clear();
                msgAuctionNoticeSN.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const AuctionNoticeSN &)msgAuctionNoticeSN);
                break;
            }
            case 2485: {  // AuctionPrint
			    msgAuctionPrint.Clear();
                msgAuctionPrint.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const AuctionPrint &)msgAuctionPrint);
                break;
            }
            case 2488: {  // AuctionPrintBX
			    msgAuctionPrintBX.Clear();
                msgAuctionPrintBX.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const AuctionPrintBX &)msgAuctionPrintBX);
                break;
            }
            case 2486: {  // AuctionPrintRC
			    msgAuctionPrintRC.Clear();
                msgAuctionPrintRC.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const AuctionPrintRC &)msgAuctionPrintRC);
                break;
            }
            case 2487: {  // AuctionPrintSN
			    msgAuctionPrintSN.Clear();
                msgAuctionPrintSN.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const AuctionPrintSN &)msgAuctionPrintSN);
                break;
            }
            case 2464: {  // AuctionState
			    msgAuctionState.Clear();
                msgAuctionState.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const AuctionState &)msgAuctionState);
                break;
            }
            case 2498: {  // AutoResponderBX
			    msgAutoResponderBX.Clear();
                msgAutoResponderBX.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const AutoResponderBX &)msgAutoResponderBX);
                break;
            }
            case 2496: {  // AutoResponderRC
			    msgAutoResponderRC.Clear();
                msgAutoResponderRC.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const AutoResponderRC &)msgAutoResponderRC);
                break;
            }
            case 2497: {  // AutoResponderSN
			    msgAutoResponderSN.Clear();
                msgAutoResponderSN.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const AutoResponderSN &)msgAutoResponderSN);
                break;
            }
            case 2495: {  // AutoResponderVegaDir
			    msgAutoResponderVegaDir.Clear();
                msgAutoResponderVegaDir.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const AutoResponderVegaDir &)msgAutoResponderVegaDir);
                break;
            }
            case 2480: {  // NoticeCancel
			    msgNoticeCancel.Clear();
                msgNoticeCancel.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const NoticeCancel &)msgNoticeCancel);
                break;
            }
            case 2475: {  // NoticeExecReport
			    msgNoticeExecReport.Clear();
                msgNoticeExecReport.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const NoticeExecReport &)msgNoticeExecReport);
                break;
            }
            case 2470: {  // NoticeResponse
			    msgNoticeResponse.Clear();
                msgNoticeResponse.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const NoticeResponse &)msgNoticeResponse);
                break;
            }
            case 2503: {  // ResponderMarkupBX
			    msgResponderMarkupBX.Clear();
                msgResponderMarkupBX.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const ResponderMarkupBX &)msgResponderMarkupBX);
                break;
            }
            case 2501: {  // ResponderMarkupRC
			    msgResponderMarkupRC.Clear();
                msgResponderMarkupRC.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const ResponderMarkupRC &)msgResponderMarkupRC);
                break;
            }
            case 2502: {  // ResponderMarkupSN
			    msgResponderMarkupSN.Clear();
                msgResponderMarkupSN.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const ResponderMarkupSN &)msgResponderMarkupSN);
                break;
            }
            case 2500: {  // ResponderMarkupVegaDir
			    msgResponderMarkupVegaDir.Clear();
                msgResponderMarkupVegaDir.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const ResponderMarkupVegaDir &)msgResponderMarkupVegaDir);
                break;
            }
            case 1915: {  // UserAuctionFilter
			    msgUserAuctionFilter.Clear();
                msgUserAuctionFilter.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const UserAuctionFilter &)msgUserAuctionFilter);
                break;
            }
            case 1916: {  // UserAuctionTickerFilter
			    msgUserAuctionTickerFilter.Clear();
                msgUserAuctionTickerFilter.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const UserAuctionTickerFilter &)msgUserAuctionTickerFilter);
                break;
            }
            case 4350: {  // IndustryDefinition
			    msgIndustryDefinition.Clear();
                msgIndustryDefinition.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const IndustryDefinition &)msgIndustryDefinition);
                break;
            }
            case 1131: {  // LiveBasisCurve
			    msgLiveBasisCurve.Clear();
                msgLiveBasisCurve.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const LiveBasisCurve &)msgLiveBasisCurve);
                break;
            }
            case 1134: {  // LiveExpiryAtm
			    msgLiveExpiryAtm.Clear();
                msgLiveExpiryAtm.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const LiveExpiryAtm &)msgLiveExpiryAtm);
                break;
            }
            case 1132: {  // LiveExpirySurface
			    msgLiveExpirySurface.Clear();
                msgLiveExpirySurface.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const LiveExpirySurface &)msgLiveExpirySurface);
                break;
            }
            case 1025: {  // LiveIVarSwapFixedTerm
			    msgLiveIVarSwapFixedTerm.Clear();
                msgLiveIVarSwapFixedTerm.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const LiveIVarSwapFixedTerm &)msgLiveIVarSwapFixedTerm);
                break;
            }
            case 1030: {  // LiveSurfaceAtm
			    msgLiveSurfaceAtm.Clear();
                msgLiveSurfaceAtm.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const LiveSurfaceAtm &)msgLiveSurfaceAtm);
                break;
            }
            case 1055: {  // LiveSurfacePerf
			    msgLiveSurfacePerf.Clear();
                msgLiveSurfacePerf.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const LiveSurfacePerf &)msgLiveSurfacePerf);
                break;
            }
            case 1090: {  // OptionLookback
			    msgOptionLookback.Clear();
                msgOptionLookback.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const OptionLookback &)msgOptionLookback);
                break;
            }
            case 3235: {  // OptionOpenVega
			    msgOptionOpenVega.Clear();
                msgOptionOpenVega.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const OptionOpenVega &)msgOptionOpenVega);
                break;
            }
            case 2820: {  // OptionPrintSetSummary
			    msgOptionPrintSetSummary.Clear();
                msgOptionPrintSetSummary.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const OptionPrintSetSummary &)msgOptionPrintSetSummary);
                break;
            }
            case 5060: {  // SpanRiskCalculator
			    msgSpanRiskCalculator.Clear();
                msgSpanRiskCalculator.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const SpanRiskCalculator &)msgSpanRiskCalculator);
                break;
            }
            case 1730: {  // StockBorrowRate
			    msgStockBorrowRate.Clear();
                msgStockBorrowRate.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const StockBorrowRate &)msgStockBorrowRate);
                break;
            }
            case 3250: {  // StockDetail
			    msgStockDetail.Clear();
                msgStockDetail.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const StockDetail &)msgStockDetail);
                break;
            }
            case 3175: {  // SyntheticExpiryCloseMark
			    msgSyntheticExpiryCloseMark.Clear();
                msgSyntheticExpiryCloseMark.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const SyntheticExpiryCloseMark &)msgSyntheticExpiryCloseMark);
                break;
            }
            case 3180: {  // SyntheticExpiryOpenMark
			    msgSyntheticExpiryOpenMark.Clear();
                msgSyntheticExpiryOpenMark.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const SyntheticExpiryOpenMark &)msgSyntheticExpiryOpenMark);
                break;
            }
            case 5065: {  // VolTimeCalculator
			    msgVolTimeCalculator.Clear();
                msgVolTimeCalculator.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const VolTimeCalculator &)msgVolTimeCalculator);
                break;
            }
            case 4275: {  // StockPrintProbability
			    msgStockPrintProbability.Clear();
                msgStockPrintProbability.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const StockPrintProbability &)msgStockPrintProbability);
                break;
            }
            case 4280: {  // StockQuoteProbability
			    msgStockQuoteProbability.Clear();
                msgStockQuoteProbability.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const StockQuoteProbability &)msgStockQuoteProbability);
                break;
            }
            case 7600: {  // WshFutureQuarters
			    msgWshFutureQuarters.Clear();
                msgWshFutureQuarters.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const WshFutureQuarters &)msgWshFutureQuarters);
                break;
            }
            default:
                break;
        }
    }
};

class Dumper : public Observer<Dumper> {
    std::ostream *_o;
    
    public:
    Dumper(std::ostream *o = &std::cout) : _o(o) {}

    template <typename T>
    void handle(const T& t) {
        *_o << t << std::endl;
    }
};


}
}
}