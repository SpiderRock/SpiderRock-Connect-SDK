// ------------------------------------------------------------------------------------------------------------------------------
//
// Machine generated.  Do not edit directly.
//
// Copyright 2023, SpiderRock Technology
//
// ------------------------------------------------------------------------------------------------------------------------------

#include "SpiderRock/SpiderStream/MbusClient.Auto.h"

#include <vector>

#include "SpiderRock/Net/IPAddress.h"
#include "SpiderRock/Net/Proto/Receiver.h"
#include "SpiderRock/Net/Proto/UDP/Receiver.h"
#include "SpiderRock/SpiderStream/MessageEventSource.h"
#include "SpiderRock/SpiderStream/FrameHandler.h"

using namespace std;
using namespace SpiderRock::SpiderStream;
using namespace SpiderRock::Net;
using namespace SpiderRock::Net::Proto;

class MbusClient::impl {
public:
	SysEnvironment environment;
	FrameHandler frame_handler;
	vector<unique_ptr<Receiver<Channel>>> receivers;
	vector<shared_ptr<Channel>> channels;
	IPAddress if_addr;

	MessageEventSource<FutureBookQuote::Key, FutureBookQuote> futurebookquote;
	MessageEventSource<FuturePrint::Key, FuturePrint> futureprint;
	MessageEventSource<FuturePrintMarkup::Key, FuturePrintMarkup> futureprintmarkup;
	MessageEventSource<IndexQuote::Key, IndexQuote> indexquote;
	MessageEventSource<LiveImpliedQuote::Key, LiveImpliedQuote> liveimpliedquote;
	MessageEventSource<LiveRevConQuote::Key, LiveRevConQuote> liverevconquote;
	MessageEventSource<LiveSurfaceAtm::Key, LiveSurfaceAtm> livesurfaceatm;
	MessageEventSource<OptionCloseMark::Key, OptionCloseMark> optionclosemark;
	MessageEventSource<OptionExchOrder::Key, OptionExchOrder> optionexchorder;
	MessageEventSource<OptionExchPrint::Key, OptionExchPrint> optionexchprint;
	MessageEventSource<OptionMarketSummary::Key, OptionMarketSummary> optionmarketsummary;
	MessageEventSource<OptionNbboQuote::Key, OptionNbboQuote> optionnbboquote;
	MessageEventSource<OptionOpenInterest::Key, OptionOpenInterest> optionopeninterest;
	MessageEventSource<OptionPrint::Key, OptionPrint> optionprint;
	MessageEventSource<OptionPrint2::Key, OptionPrint2> optionprint2;
	MessageEventSource<OptionPrintMarkup::Key, OptionPrintMarkup> optionprintmarkup;
	MessageEventSource<OptionRiskFactor::Key, OptionRiskFactor> optionriskfactor;
	MessageEventSource<ProductDefinitionV2::Key, ProductDefinitionV2> productdefinitionv2;
	MessageEventSource<RootDefinition::Key, RootDefinition> rootdefinition;
	MessageEventSource<SpdrAuctionState::Key, SpdrAuctionState> spdrauctionstate;
	MessageEventSource<SpreadBookQuote::Key, SpreadBookQuote> spreadbookquote;
	MessageEventSource<SpreadDefinition::Key, SpreadDefinition> spreaddefinition;
	MessageEventSource<SpreadExchDefinition::Key, SpreadExchDefinition> spreadexchdefinition;
	MessageEventSource<SpreadExchOrder::Key, SpreadExchOrder> spreadexchorder;
	MessageEventSource<SpreadExchPrint::Key, SpreadExchPrint> spreadexchprint;
	MessageEventSource<StockBookQuote::Key, StockBookQuote> stockbookquote;
	MessageEventSource<StockExchImbalanceV2::Key, StockExchImbalanceV2> stockexchimbalancev2;
	MessageEventSource<StockImbalance::Key, StockImbalance> stockimbalance;
	MessageEventSource<StockMarketSummary::Key, StockMarketSummary> stockmarketsummary;
	MessageEventSource<StockPrint::Key, StockPrint> stockprint;
	MessageEventSource<StockPrintMarkup::Key, StockPrintMarkup> stockprintmarkup;
	MessageEventSource<SyntheticExpiryQuote::Key, SyntheticExpiryQuote> syntheticexpiryquote;
	MessageEventSource<SyntheticFutureQuote::Key, SyntheticFutureQuote> syntheticfuturequote;
	MessageEventSource<TickerDefinitionExt::Key, TickerDefinitionExt> tickerdefinitionext;			

	impl(SysEnvironment environment, IPAddress if_addr)
		: environment(environment), frame_handler(environment), if_addr(if_addr)
	{
	}

	~impl()
	{
		receivers.clear();
		channels.clear();
	}
};
