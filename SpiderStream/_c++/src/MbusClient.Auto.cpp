// ------------------------------------------------------------------------------------------------------------------------------
//
// Machine generated.  Do not edit directly.
//
// Copyright 2023, SpiderRock Technology
//
// ------------------------------------------------------------------------------------------------------------------------------

#include "SpiderRock/SpiderStream/FrameHandler.h"
#include "SpiderRock/SpiderStream/MbusClient.Auto.h"
#include "MbusClient.impl.Auto.h"

using namespace SpiderRock::SpiderStream;

MbusClient::MbusClient(SysEnvironment environment, in_addr device_address)
	: impl_{ new impl(environment, device_address) }
{
	impl_->frame_handler.RegisterMessageHandler(&impl_->futurebookquote, { MessageType::FutureBookQuote });
	impl_->frame_handler.RegisterMessageHandler(&impl_->futureprint, { MessageType::FuturePrint });
	impl_->frame_handler.RegisterMessageHandler(&impl_->futureprintmarkup, { MessageType::FuturePrintMarkup });
	impl_->frame_handler.RegisterMessageHandler(&impl_->indexquote, { MessageType::IndexQuote });
	impl_->frame_handler.RegisterMessageHandler(&impl_->liveimpliedquote, { MessageType::LiveImpliedQuote });
	impl_->frame_handler.RegisterMessageHandler(&impl_->liverevconquote, { MessageType::LiveRevConQuote });
	impl_->frame_handler.RegisterMessageHandler(&impl_->livesurfaceatm, { MessageType::LiveSurfaceAtm });
	impl_->frame_handler.RegisterMessageHandler(&impl_->optionclosemark, { MessageType::OptionCloseMark });
	impl_->frame_handler.RegisterMessageHandler(&impl_->optionexchorder, { MessageType::OptionExchOrder });
	impl_->frame_handler.RegisterMessageHandler(&impl_->optionexchprint, { MessageType::OptionExchPrint });
	impl_->frame_handler.RegisterMessageHandler(&impl_->optionmarketsummary, { MessageType::OptionMarketSummary });
	impl_->frame_handler.RegisterMessageHandler(&impl_->optionnbboquote, { MessageType::OptionNbboQuote });
	impl_->frame_handler.RegisterMessageHandler(&impl_->optionopeninterest, { MessageType::OptionOpenInterest });
	impl_->frame_handler.RegisterMessageHandler(&impl_->optionprint, { MessageType::OptionPrint });
	impl_->frame_handler.RegisterMessageHandler(&impl_->optionprint2, { MessageType::OptionPrint2 });
	impl_->frame_handler.RegisterMessageHandler(&impl_->optionprintmarkup, { MessageType::OptionPrintMarkup });
	impl_->frame_handler.RegisterMessageHandler(&impl_->optionriskfactor, { MessageType::OptionRiskFactor });
	impl_->frame_handler.RegisterMessageHandler(&impl_->productdefinitionv2, { MessageType::ProductDefinitionV2 });
	impl_->frame_handler.RegisterMessageHandler(&impl_->rootdefinition, { MessageType::RootDefinition });
	impl_->frame_handler.RegisterMessageHandler(&impl_->spdrauctionstate, { MessageType::SpdrAuctionState });
	impl_->frame_handler.RegisterMessageHandler(&impl_->spreadbookquote, { MessageType::SpreadBookQuote });
	impl_->frame_handler.RegisterMessageHandler(&impl_->spreaddefinition, { MessageType::SpreadDefinition });
	impl_->frame_handler.RegisterMessageHandler(&impl_->spreadexchdefinition, { MessageType::SpreadExchDefinition });
	impl_->frame_handler.RegisterMessageHandler(&impl_->spreadexchorder, { MessageType::SpreadExchOrder });
	impl_->frame_handler.RegisterMessageHandler(&impl_->spreadexchprint, { MessageType::SpreadExchPrint });
	impl_->frame_handler.RegisterMessageHandler(&impl_->stockbookquote, { MessageType::StockBookQuote });
	impl_->frame_handler.RegisterMessageHandler(&impl_->stockexchimbalancev2, { MessageType::StockExchImbalanceV2 });
	impl_->frame_handler.RegisterMessageHandler(&impl_->stockimbalance, { MessageType::StockImbalance });
	impl_->frame_handler.RegisterMessageHandler(&impl_->stockmarketsummary, { MessageType::StockMarketSummary });
	impl_->frame_handler.RegisterMessageHandler(&impl_->stockprint, { MessageType::StockPrint });
	impl_->frame_handler.RegisterMessageHandler(&impl_->stockprintmarkup, { MessageType::StockPrintMarkup });
	impl_->frame_handler.RegisterMessageHandler(&impl_->syntheticexpiryquote, { MessageType::SyntheticExpiryQuote });
	impl_->frame_handler.RegisterMessageHandler(&impl_->syntheticfuturequote, { MessageType::SyntheticFutureQuote });
	impl_->frame_handler.RegisterMessageHandler(&impl_->tickerdefinitionext, { MessageType::TickerDefinitionExt });
}

MbusClient::~MbusClient()
{
}

void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<FutureBookQuote>> observer) { impl_->futurebookquote.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<FuturePrint>> observer) { impl_->futureprint.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<FuturePrintMarkup>> observer) { impl_->futureprintmarkup.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<IndexQuote>> observer) { impl_->indexquote.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<LiveImpliedQuote>> observer) { impl_->liveimpliedquote.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<LiveRevConQuote>> observer) { impl_->liverevconquote.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<LiveSurfaceAtm>> observer) { impl_->livesurfaceatm.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<OptionCloseMark>> observer) { impl_->optionclosemark.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<OptionExchOrder>> observer) { impl_->optionexchorder.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<OptionExchPrint>> observer) { impl_->optionexchprint.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<OptionMarketSummary>> observer) { impl_->optionmarketsummary.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<OptionNbboQuote>> observer) { impl_->optionnbboquote.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<OptionOpenInterest>> observer) { impl_->optionopeninterest.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<OptionPrint>> observer) { impl_->optionprint.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<OptionPrint2>> observer) { impl_->optionprint2.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<OptionPrintMarkup>> observer) { impl_->optionprintmarkup.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<OptionRiskFactor>> observer) { impl_->optionriskfactor.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<ProductDefinitionV2>> observer) { impl_->productdefinitionv2.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<RootDefinition>> observer) { impl_->rootdefinition.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<SpdrAuctionState>> observer) { impl_->spdrauctionstate.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<SpreadBookQuote>> observer) { impl_->spreadbookquote.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<SpreadDefinition>> observer) { impl_->spreaddefinition.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<SpreadExchDefinition>> observer) { impl_->spreadexchdefinition.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<SpreadExchOrder>> observer) { impl_->spreadexchorder.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<SpreadExchPrint>> observer) { impl_->spreadexchprint.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<StockBookQuote>> observer) { impl_->stockbookquote.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<StockExchImbalanceV2>> observer) { impl_->stockexchimbalancev2.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<StockImbalance>> observer) { impl_->stockimbalance.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<StockMarketSummary>> observer) { impl_->stockmarketsummary.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<StockPrint>> observer) { impl_->stockprint.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<StockPrintMarkup>> observer) { impl_->stockprintmarkup.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<SyntheticExpiryQuote>> observer) { impl_->syntheticexpiryquote.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<SyntheticFutureQuote>> observer) { impl_->syntheticfuturequote.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<CreateEventObserver<TickerDefinitionExt>> observer) { impl_->tickerdefinitionext.RegisterObserver(observer); }

void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<FutureBookQuote>> observer) { impl_->futurebookquote.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<FuturePrint>> observer) { impl_->futureprint.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<FuturePrintMarkup>> observer) { impl_->futureprintmarkup.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<IndexQuote>> observer) { impl_->indexquote.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<LiveImpliedQuote>> observer) { impl_->liveimpliedquote.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<LiveRevConQuote>> observer) { impl_->liverevconquote.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<LiveSurfaceAtm>> observer) { impl_->livesurfaceatm.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<OptionCloseMark>> observer) { impl_->optionclosemark.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<OptionExchOrder>> observer) { impl_->optionexchorder.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<OptionExchPrint>> observer) { impl_->optionexchprint.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<OptionMarketSummary>> observer) { impl_->optionmarketsummary.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<OptionNbboQuote>> observer) { impl_->optionnbboquote.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<OptionOpenInterest>> observer) { impl_->optionopeninterest.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<OptionPrint>> observer) { impl_->optionprint.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<OptionPrint2>> observer) { impl_->optionprint2.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<OptionPrintMarkup>> observer) { impl_->optionprintmarkup.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<OptionRiskFactor>> observer) { impl_->optionriskfactor.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<ProductDefinitionV2>> observer) { impl_->productdefinitionv2.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<RootDefinition>> observer) { impl_->rootdefinition.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<SpdrAuctionState>> observer) { impl_->spdrauctionstate.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<SpreadBookQuote>> observer) { impl_->spreadbookquote.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<SpreadDefinition>> observer) { impl_->spreaddefinition.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<SpreadExchDefinition>> observer) { impl_->spreadexchdefinition.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<SpreadExchOrder>> observer) { impl_->spreadexchorder.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<SpreadExchPrint>> observer) { impl_->spreadexchprint.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<StockBookQuote>> observer) { impl_->stockbookquote.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<StockExchImbalanceV2>> observer) { impl_->stockexchimbalancev2.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<StockImbalance>> observer) { impl_->stockimbalance.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<StockMarketSummary>> observer) { impl_->stockmarketsummary.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<StockPrint>> observer) { impl_->stockprint.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<StockPrintMarkup>> observer) { impl_->stockprintmarkup.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<SyntheticExpiryQuote>> observer) { impl_->syntheticexpiryquote.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<SyntheticFutureQuote>> observer) { impl_->syntheticfuturequote.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<ChangeEventObserver<TickerDefinitionExt>> observer) { impl_->tickerdefinitionext.RegisterObserver(observer); }

void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<FutureBookQuote>> observer) { impl_->futurebookquote.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<FuturePrint>> observer) { impl_->futureprint.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<FuturePrintMarkup>> observer) { impl_->futureprintmarkup.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<IndexQuote>> observer) { impl_->indexquote.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<LiveImpliedQuote>> observer) { impl_->liveimpliedquote.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<LiveRevConQuote>> observer) { impl_->liverevconquote.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<LiveSurfaceAtm>> observer) { impl_->livesurfaceatm.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<OptionCloseMark>> observer) { impl_->optionclosemark.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<OptionExchOrder>> observer) { impl_->optionexchorder.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<OptionExchPrint>> observer) { impl_->optionexchprint.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<OptionMarketSummary>> observer) { impl_->optionmarketsummary.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<OptionNbboQuote>> observer) { impl_->optionnbboquote.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<OptionOpenInterest>> observer) { impl_->optionopeninterest.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<OptionPrint>> observer) { impl_->optionprint.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<OptionPrint2>> observer) { impl_->optionprint2.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<OptionPrintMarkup>> observer) { impl_->optionprintmarkup.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<OptionRiskFactor>> observer) { impl_->optionriskfactor.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<ProductDefinitionV2>> observer) { impl_->productdefinitionv2.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<RootDefinition>> observer) { impl_->rootdefinition.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<SpdrAuctionState>> observer) { impl_->spdrauctionstate.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<SpreadBookQuote>> observer) { impl_->spreadbookquote.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<SpreadDefinition>> observer) { impl_->spreaddefinition.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<SpreadExchDefinition>> observer) { impl_->spreadexchdefinition.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<SpreadExchOrder>> observer) { impl_->spreadexchorder.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<SpreadExchPrint>> observer) { impl_->spreadexchprint.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<StockBookQuote>> observer) { impl_->stockbookquote.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<StockExchImbalanceV2>> observer) { impl_->stockexchimbalancev2.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<StockImbalance>> observer) { impl_->stockimbalance.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<StockMarketSummary>> observer) { impl_->stockmarketsummary.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<StockPrint>> observer) { impl_->stockprint.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<StockPrintMarkup>> observer) { impl_->stockprintmarkup.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<SyntheticExpiryQuote>> observer) { impl_->syntheticexpiryquote.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<SyntheticFutureQuote>> observer) { impl_->syntheticfuturequote.RegisterObserver(observer); }
void MbusClient::RegisterObserver(shared_ptr<UpdateEventObserver<TickerDefinitionExt>> observer) { impl_->tickerdefinitionext.RegisterObserver(observer); }
