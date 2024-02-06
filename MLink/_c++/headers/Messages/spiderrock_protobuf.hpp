#pragma once

#include <ostream>
#include <iostream>

#include "spiderrock_protobuf_base.hpp"

#include "spiderrock_common.hpp"
#include "EqtExchImbalance/StockExchImbalanceV2.hpp"
#include "EqtMarkData/StockCloseMark.hpp"
#include "EqtMarkData/StockOpenMark.hpp"
#include "EqtMktData/StockBookQuote.hpp"
#include "EqtMktData/StockPrint.hpp"
#include "EqtSummaryData/StockMarketSummary.hpp"
#include "EqtSummaryData/StockMinuteBar.hpp"
#include "EquityDefinition/TickerDefinition.hpp"
#include "FutMarkData/FutureCloseMark.hpp"
#include "FutMarkData/FutureOpenMark.hpp"
#include "FutMktData/FutureBookQuote.hpp"
#include "FutMktData/FuturePrint.hpp"
#include "FutProbModel/FuturePrintProbability.hpp"
#include "FutProbModel/FutureQuoteProbability.hpp"
#include "FutSummaryData/FutureMarketSummary.hpp"
#include "FutSummaryData/FutureMinuteBar.hpp"
#include "FutureDefinition/CCodeDefinition.hpp"
#include "FutureDefinition/ProductDefinitionV2.hpp"
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
#include "OptAnalytics/LiveImpliedQuote.hpp"
#include "OptAnalytics/LiveImpliedQuoteAdj.hpp"
#include "OptAnalytics/OptionPrintSet.hpp"
#include "OptAnalytics/OptionRiskFactor.hpp"
#include "OptAnalytics/StockBeta.hpp"
#include "OptExchAuction/SpdrAuctionState.hpp"
#include "OptionDefinition/OpraPrintType.hpp"
#include "OptionDefinition/OptExpiryDefinition.hpp"
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
#include "OptSurface/LiveAtmVolV4.hpp"
#include "OptSurface/LiveSurfaceCurve.hpp"
#include "OptSurface/LiveSurfaceCurveV4.hpp"
#include "OptSurface/LiveSurfaceFixedGrid.hpp"
#include "OptSurface/LiveSurfaceFixedTerm.hpp"
#include "OptSurface/OptionAtmMinuteBarData.hpp"
#include "OptSurface/SkewBasisCurveV4.hpp"
#include "RiskCalc/GetOptionPrice.hpp"
#include "RiskCalc/GetOptionVolatility.hpp"
#include "SpreadExchData/SpreadExchOrder.hpp"
#include "SpreadMktData/SpreadBookMarkup.hpp"
#include "SpreadMktData/SpreadBookQuote.hpp"
#include "StkProbModel/StockPrintProbability.hpp"
#include "StkProbModel/StockQuoteProbability.hpp"
#include "WSHCorporateEvent/WshFutureQuarters.hpp"

namespace spiderrock {
namespace protobuf {
namespace api {

template <typename Derived>
class Observer {
    StockExchImbalanceV2 msgStockExchImbalanceV2{};
    StockCloseMark msgStockCloseMark{};
    StockOpenMark msgStockOpenMark{};
    StockBookQuote msgStockBookQuote{};
    StockPrint msgStockPrint{};
    StockMarketSummary msgStockMarketSummary{};
    StockMinuteBar msgStockMinuteBar{};
    TickerDefinition msgTickerDefinition{};
    FutureCloseMark msgFutureCloseMark{};
    FutureOpenMark msgFutureOpenMark{};
    FutureBookQuote msgFutureBookQuote{};
    FuturePrint msgFuturePrint{};
    FuturePrintProbability msgFuturePrintProbability{};
    FutureQuoteProbability msgFutureQuoteProbability{};
    FutureMarketSummary msgFutureMarketSummary{};
    FutureMinuteBar msgFutureMinuteBar{};
    CCodeDefinition msgCCodeDefinition{};
    ProductDefinitionV2 msgProductDefinitionV2{};
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
    LiveImpliedQuote msgLiveImpliedQuote{};
    LiveImpliedQuoteAdj msgLiveImpliedQuoteAdj{};
    OptionPrintSet msgOptionPrintSet{};
    OptionRiskFactor msgOptionRiskFactor{};
    StockBeta msgStockBeta{};
    SpdrAuctionState msgSpdrAuctionState{};
    OpraPrintType msgOpraPrintType{};
    OptExpiryDefinition msgOptExpiryDefinition{};
    RootDefinition msgRootDefinition{};
    OptionCloseMark msgOptionCloseMark{};
    OptionOpenInterest msgOptionOpenInterest{};
    OptionOpenMark msgOptionOpenMark{};
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
    GetOptionPrice msgGetOptionPrice{};
    GetOptionVolatility msgGetOptionVolatility{};
    SpreadExchOrder msgSpreadExchOrder{};
    SpreadBookMarkup msgSpreadBookMarkup{};
    SpreadBookQuote msgSpreadBookQuote{};
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
            case 4375: {  // TickerDefinition
			    msgTickerDefinition.Clear();
                msgTickerDefinition.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const TickerDefinition &)msgTickerDefinition);
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
            case 2750: {  // OpraPrintType
			    msgOpraPrintType.Clear();
                msgOpraPrintType.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const OpraPrintType &)msgOpraPrintType);
                break;
            }
            case 4355: {  // OptExpiryDefinition
			    msgOptExpiryDefinition.Clear();
                msgOptExpiryDefinition.ParseFromArray(buf, len);
                static_cast<Derived*>(this)->handle((const OptExpiryDefinition &)msgOptExpiryDefinition);
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
            case 7200: {  // WshFutureQuarters
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