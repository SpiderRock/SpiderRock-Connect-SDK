#include <iostream>
#include <memory>
#include <string>
#include <chrono>
#include <iomanip>
#include <netdb.h>
#include <chrono>
#include <thread>

#include "SpiderStream.h"

using namespace SpiderRock::Net;
using namespace SpiderRock::SpiderStream;

using namespace std;
using namespace std::chrono;

/*

This handler demonstrates event handler implementation but
does not contain any meaningful logic in the handlers

*/

class ExampleHandler : public UpdateEventObserver<StockBookQuote>,
					   public ChangeEventObserver<StockPrint>,

					   public ChangeEventObserver<OptionNbboQuote>,

					   public ChangeEventObserver<FutureBookQuote>,
					   public CreateEventObserver<FuturePrint>
{
	Float bidPrice_;
	Ticker ticker_;

public:
	ExampleHandler(std::string ticker_filter) : ticker_(ticker_filter) {}

	void OnChange(const FutureBookQuote &, bool drops)
	{
		if (drops)
		{
			cerr << "FutureBookQuote drops" << endl;
		}
	}

	void OnCreate(const FuturePrint &obj, bool drops)
	{
		if (drops)
		{
			cerr << "FuturePrint drops" << endl;
		}

		cout
			<< *obj.pkey().fkey().ticker().str()
			<< " printed"
			<< endl;
	}

	void OnUpdate(const StockBookQuote &previous, const StockBookQuote &current, bool drops)
	{
		if (drops)
		{
			cerr << "StockBookQuote drops" << endl;
		}

		if (previous.pkey().ticker().ticker() != ticker_)
		{
			return;
		}

		bidPrice_ = current.bidPrice1();

		auto bidDelta = previous.bidPrice1() - current.bidPrice1();

		if (abs(bidDelta) < 0.05)
		{
			return;
		}

		cout
			<< "Bid price change for " << *previous.pkey().ticker().ticker().str()
			<< " from " << to_string(previous.bidPrice1())
			<< " to " << to_string(current.bidPrice1()) << endl;
	}

	inline std::tm to_tm(int64_t nanosSinceUnixEpoch)
	{
		system_clock::time_point timePoint{nanoseconds{nanosSinceUnixEpoch}};
		std::time_t time = system_clock::to_time_t(timePoint);
		return *std::localtime(&time);
	}

	void OnChange(const StockPrint &obj, bool drops)
	{
		if (drops)
		{
			cerr << "StockPrint drops" << endl;
		}

		if (obj.pkey().ticker().ticker() != ticker_)
		{
			return;
		}

		auto prtTimestamp = to_tm(obj.prtTimestamp());

		cout << "Print: "
			 << obj.prtSize() << " shares"
			 << " of " << *obj.pkey().ticker().ticker().str()
			 << " at $" << obj.prtPrice()
			 << " [" << std::put_time(&prtTimestamp, "%F %T") << "]"
			 << endl;
	}

	void OnChange(const OptionNbboQuote &obj, bool drops)
	{
		if (drops)
		{
			cerr << "OptionNbboQuote drops" << endl;
		}

		if (obj.pkey().okey().ticker() != ticker_)
		{
			return;
		}

		auto xx = obj.pkey().okey().strike();

		if (abs(xx - bidPrice_) > 1)
		{
			return;
		}

		cout << *obj.pkey().okey().ticker().str()
			 << " @ " << xx
			 << " bid: " << obj.bidPrice()
			 << ", ask: " << obj.askPrice()
			 << endl;
	}
};

int main()
{
	try
	{
		in_addr ifaddr { s_addr :inet_addr("local_interface") };

		MbusClient client(SysEnvironment::Saturn, ifaddr);

		// ExampleHandler implements the API for receiving 
		// create/change/update callbacks of the message types
		// it's interested in
		auto handler = make_shared<ExampleHandler>("SPY");

		// The wire-up of the callbacks to the MbusClient happens here
		client.RegisterObserver(dynamic_pointer_cast<UpdateEventObserver<StockBookQuote>>(handler));
		client.RegisterObserver(dynamic_pointer_cast<ChangeEventObserver<StockPrint>>(handler));
		client.RegisterObserver(dynamic_pointer_cast<ChangeEventObserver<OptionNbboQuote>>(handler));
		client.RegisterObserver(dynamic_pointer_cast<ChangeEventObserver<FutureBookQuote>>(handler));
		client.RegisterObserver(dynamic_pointer_cast<CreateEventObserver<FuturePrint>>(handler));

		// Below, we organize our incoming data into worker threads that 
		// are termed "channel thread groups".  Each such group is assigned
		// a unique channel set and its worker thread will spin block
		// receiving data corresponding to its channels, parse the normalized MBUS
		// packets into objects that are passed along to the callbacks.

		// The organization of channels into groups provided below is 
		// merely an example.  

		// A good rule of thumb is to use as few thread groups as the 
		// performance of the callbacks allows and only those channels
		// that are absolutely necessary

		// // stripes A, B, C, and D
		// client.CreateThreadGroup(
		// 	MbusClient::Protocol::UDP,
		// 	{DataChannel::StkNbboQuoteAB,
		// 	 DataChannel::StkNbboQuoteCD,
		// 	 DataChannel::OptNbboQuoteA,
		// 	 DataChannel::OptNbboQuoteB,
		// 	 DataChannel::OptNbboQuoteC,
		// 	 DataChannel::OptNbboQuoteD});

		// // stripes E, F, G, and H
		// client.CreateThreadGroup(
		// 	MbusClient::Protocol::UDP,
		// 	{DataChannel::StkNbboQuoteEF,
		// 	 DataChannel::StkNbboQuoteGH,
		// 	 DataChannel::OptNbboQuoteE,
		// 	 DataChannel::OptNbboQuoteF,
		// 	 DataChannel::OptNbboQuoteG,
		// 	 DataChannel::OptNbboQuoteH});

		// // stripe S
		// client.CreateThreadGroup(
		// 	MbusClient::Protocol::UDP,
		// 	{DataChannel::StkNbboQuoteS,
		// 	 DataChannel::OptNbboQuoteS});

		// stripe M
		client.CreateThreadGroup(
			MbusClient::Protocol::UDP,
			{DataChannel::StkNbboQuoteM,
			 DataChannel::OptNbboQuoteM});

		// // stripe X
		// client.CreateThreadGroup(
		// 	MbusClient::Protocol::UDP,
		// 	{DataChannel::OptNbboQuoteX1,
		// 	 DataChannel::OptNbboQuoteX2,
		// 	 DataChannel::OptNbboQuoteX3,
		// 	 DataChannel::OptNbboQuoteX4,
		// 	 DataChannel::FutNbboQuoteX});

		client.Start();

		auto start = clock();

		client.MakeCacheRequest(
			{MessageType::StockBookQuote,
			 MessageType::OptionNbboQuote,
			 MessageType::FutureBookQuote},
			"API KEY assigned by SpiderRock");

		cout << "Cache request time: " << ((double)clock() - start) / CLOCKS_PER_SEC << "s" << endl;
		cout << "Press Enter to exit..." << std::endl;

		// Clear the input buffer
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cin.get();
	}
	catch (const runtime_error &e)
	{
		cerr << e.what() << endl;
	}

	return 0;
}
