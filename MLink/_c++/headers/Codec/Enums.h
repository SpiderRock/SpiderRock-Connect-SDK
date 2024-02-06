#pragma once

namespace SRProtobufCPP {
	enum class AssetType : uint8_t {
		None = 0,
		EQT = 1,
		IDX = 2,
		BND = 3,
		CUR = 4,
		COM = 5,
		FUT = 6,
		SYN = 7,
		WAR = 8,
		FLX = 9,
		MUT = 10,
		SPD = 11,
		MM = 12,
		MF = 13,
		COIN = 14,
		TOKEN = 15
	};
	enum class TickerSrc : uint8_t {
		None = 0, SR = 1, NMS = 2, CME = 3, ICE = 4, CFE = 5, CBOT = 6, NYMEX = 7, COMEX = 8, RUT = 9, CIDX = 10, ARCA = 11, NYSE = 12, OTC = 13, NSDQ = 14, MFQS = 15, MIAX = 16, DJI = 17, CUSIP = 18, ISIN = 19
	};
	enum class CallPut : uint8_t {
		Call = 0, Put = 1, Pair = 2, None = 3
	};
	enum class SysRealm : uint8_t { None = 0, SysTest = 1, NMS = 2, CME = 3 };
	enum class SysEnvironment : uint8_t { None = 0, Saturn = 1, Unused1 = 2, Neptune = 3, Venus = 4, Unused2 = 5, Unused3 = 6, Unused4 = 7, SysTest = 8 };
    enum class ImpliedQuoteError : uint8_t { None = 0, InvalidUPrc = 1, InvalidSVol = 2, PricingError = 3 };
    enum class CalcSource : uint8_t { None = 0, Tick = 1, Loop = 2 };
    enum class DataAckResult : uint8_t { None = 0, OK = 1, FrameError = 2, JsonError = 3, ProtoError = 4, BinaryError = 5, Exception = 6, AuthError = 7, InvldMsgType = 8, OtherError = 9 };
    enum class YesNo : uint8_t { Yes = 0, No = 1 };
    enum class MLinkCompression : uint8_t { None = 0, FieldChangesOnly = 1 };
    enum class MLinkSubscribeState : uint8_t { None = 0, Begin = 1, Active = 2, Terminated = 3 };
    enum class ReadyScan : uint8_t { None = 0, Incremental = 2, FullScan = 3 };
    enum class MLinkStreamState : uint8_t { None = 0, Begin = 1, Active = 2, Complete = 3, Replaced = 4, Terminated = 5 };
    enum class SubscribeMsgResult : uint8_t { None = 0, OK = 1, InvldMsgType = 2, UnkwnMsgType = 3, UnauthMsgType = 4, InvldPKey = 5, UnkwnPKey = 6, MissingPKey = 7, UnauthPKey = 8, ViewErr = 9 };
    enum class AckResult : uint8_t { None = 0, OK = 1, InvldMsgType = 2, UnkwnMsgType = 3, UnauthMsgType = 4, Error = 5, Warn = 6 };



}
