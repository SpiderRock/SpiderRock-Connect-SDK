// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: Protobuf/ClientLive/OptionOpenAuction.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021, 8981
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Spiderrock.Protobuf {

  /// <summary>Holder for reflection information generated from Protobuf/ClientLive/OptionOpenAuction.proto</summary>
  public static partial class OptionOpenAuctionReflection {

    #region Descriptor
    /// <summary>File descriptor for Protobuf/ClientLive/OptionOpenAuction.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static OptionOpenAuctionReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "CitQcm90b2J1Zi9DbGllbnRMaXZlL09wdGlvbk9wZW5BdWN0aW9uLnByb3Rv",
            "EhNzcGlkZXJyb2NrLnByb3RvYnVmGhdzcGlkZXJyb2NrX2NvbW1vbi5wcm90",
            "bxofZ29vZ2xlL3Byb3RvYnVmL3RpbWVzdGFtcC5wcm90byK+BAoRT3B0aW9u",
            "T3BlbkF1Y3Rpb24SMwoFX21ldGEYASABKAsyJC5zcGlkZXJyb2NrLnByb3Rv",
            "YnVmLk1lc3NhZ2VNZXRhZGF0YRI5CgRwa2V5GAIgASgLMisuc3BpZGVycm9j",
            "ay5wcm90b2J1Zi5PcHRpb25PcGVuQXVjdGlvbi5QS2V5EjoKDGF1Y3Rpb25f",
            "dHlwZRhkIAEoDjIkLnNwaWRlcnJvY2sucHJvdG9idWYuT3BlbkF1Y3Rpb25U",
            "eXBlEg8KB3JlZl9wcmMYZyABKAISFQoNYnV5X2NvbnRyYWN0cxhqIAEoBRIW",
            "Cg5zZWxsX2NvbnRyYWN0cxhtIAEoBRIWCg5pbmRpY2F0aXZlX3ByYxhwIAEo",
            "AhIYChBhdWN0aW9uX29ubHlfcHJjGHMgASgCEkIKDG9wZW5pbmdfY29uZBh2",
            "IAEoDjIsLnNwaWRlcnJvY2sucHJvdG9idWYuT3B0QXVjdGlvbk9wZW5Db25k",
            "aXRpb24SGAoQY29tcF9ta3RfYmlkX3ByYxh5IAEoAhIYChBjb21wX21rdF9h",
            "c2tfcHJjGHwgASgCEhUKDXNyY190aW1lc3RhbXAYfyABKAMSFgoNbmV0X3Rp",
            "bWVzdGFtcBiCASABKAMSLgoJdGltZXN0YW1wGIUBIAEoCzIaLmdvb2dsZS5w",
            "cm90b2J1Zi5UaW1lc3RhbXAaNAoEUEtleRIsCgRva2V5GAogASgLMh4uc3Bp",
            "ZGVycm9jay5wcm90b2J1Zi5PcHRpb25LZXliBnByb3RvMw=="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Spiderrock.Protobuf.SpiderrockCommonReflection.Descriptor, global::Google.Protobuf.WellKnownTypes.TimestampReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Spiderrock.Protobuf.OptionOpenAuction), global::Spiderrock.Protobuf.OptionOpenAuction.Parser, new[]{ "Meta", "Pkey", "AuctionType", "RefPrc", "BuyContracts", "SellContracts", "IndicativePrc", "AuctionOnlyPrc", "OpeningCond", "CompMktBidPrc", "CompMktAskPrc", "SrcTimestamp", "NetTimestamp", "Timestamp" }, null, null, null, new pbr::GeneratedClrTypeInfo[] { new pbr::GeneratedClrTypeInfo(typeof(global::Spiderrock.Protobuf.OptionOpenAuction.Types.PKey), global::Spiderrock.Protobuf.OptionOpenAuction.Types.PKey.Parser, new[]{ "Okey" }, null, null, null, null)})
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class OptionOpenAuction : pb::IMessage<OptionOpenAuction>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<OptionOpenAuction> _parser = new pb::MessageParser<OptionOpenAuction>(() => new OptionOpenAuction());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pb::MessageParser<OptionOpenAuction> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Spiderrock.Protobuf.OptionOpenAuctionReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public OptionOpenAuction() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public OptionOpenAuction(OptionOpenAuction other) : this() {
      Meta_ = other.Meta_ != null ? other.Meta_.Clone() : null;
      pkey_ = other.pkey_ != null ? other.pkey_.Clone() : null;
      auctionType_ = other.auctionType_;
      refPrc_ = other.refPrc_;
      buyContracts_ = other.buyContracts_;
      sellContracts_ = other.sellContracts_;
      indicativePrc_ = other.indicativePrc_;
      auctionOnlyPrc_ = other.auctionOnlyPrc_;
      openingCond_ = other.openingCond_;
      compMktBidPrc_ = other.compMktBidPrc_;
      compMktAskPrc_ = other.compMktAskPrc_;
      srcTimestamp_ = other.srcTimestamp_;
      netTimestamp_ = other.netTimestamp_;
      timestamp_ = other.timestamp_ != null ? other.timestamp_.Clone() : null;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public OptionOpenAuction Clone() {
      return new OptionOpenAuction(this);
    }

    /// <summary>Field number for the "_meta" field.</summary>
    public const int MetaFieldNumber = 1;
    private global::Spiderrock.Protobuf.MessageMetadata Meta_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Spiderrock.Protobuf.MessageMetadata Meta {
      get { return Meta_; }
      set {
        Meta_ = value;
      }
    }

    /// <summary>Field number for the "pkey" field.</summary>
    public const int PkeyFieldNumber = 2;
    private global::Spiderrock.Protobuf.OptionOpenAuction.Types.PKey pkey_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Spiderrock.Protobuf.OptionOpenAuction.Types.PKey Pkey {
      get { return pkey_; }
      set {
        pkey_ = value;
      }
    }

    /// <summary>Field number for the "auction_type" field.</summary>
    public const int AuctionTypeFieldNumber = 100;
    private global::Spiderrock.Protobuf.OpenAuctionType auctionType_ = global::Spiderrock.Protobuf.OpenAuctionType.Unspecified;
    /// <summary>
    /// Opening auction type
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Spiderrock.Protobuf.OpenAuctionType AuctionType {
      get { return auctionType_; }
      set {
        auctionType_ = value;
      }
    }

    /// <summary>Field number for the "ref_prc" field.</summary>
    public const int RefPrcFieldNumber = 103;
    private float refPrc_;
    /// <summary>
    /// Current collared VMIM (Volume Maximizing/Imbalance Minimizing) price
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public float RefPrc {
      get { return refPrc_; }
      set {
        refPrc_ = value;
      }
    }

    /// <summary>Field number for the "buy_contracts" field.</summary>
    public const int BuyContractsFieldNumber = 106;
    private int buyContracts_;
    /// <summary>
    /// Cumulative buy contracts at and above the reference price
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public int BuyContracts {
      get { return buyContracts_; }
      set {
        buyContracts_ = value;
      }
    }

    /// <summary>Field number for the "sell_contracts" field.</summary>
    public const int SellContractsFieldNumber = 109;
    private int sellContracts_;
    /// <summary>
    /// Cumulative sell contracts at or below the reference price
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public int SellContracts {
      get { return sellContracts_; }
      set {
        sellContracts_ = value;
      }
    }

    /// <summary>Field number for the "indicative_prc" field.</summary>
    public const int IndicativePrcFieldNumber = 112;
    private float indicativePrc_;
    /// <summary>
    /// Current collared VMIM price on the queueing book and continuous book, equal to reference price for options without GTH sessions
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public float IndicativePrc {
      get { return indicativePrc_; }
      set {
        indicativePrc_ = value;
      }
    }

    /// <summary>Field number for the "auction_only_prc" field.</summary>
    public const int AuctionOnlyPrcFieldNumber = 115;
    private float auctionOnlyPrc_;
    /// <summary>
    /// Uncollared VMIM price on the queueing book only
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public float AuctionOnlyPrc {
      get { return auctionOnlyPrc_; }
      set {
        auctionOnlyPrc_ = value;
      }
    }

    /// <summary>Field number for the "opening_cond" field.</summary>
    public const int OpeningCondFieldNumber = 118;
    private global::Spiderrock.Protobuf.OptAuctionOpenCondition openingCond_ = global::Spiderrock.Protobuf.OptAuctionOpenCondition.Unspecified;
    /// <summary>
    /// Current opening condition based on the auction
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Spiderrock.Protobuf.OptAuctionOpenCondition OpeningCond {
      get { return openingCond_; }
      set {
        openingCond_ = value;
      }
    }

    /// <summary>Field number for the "comp_mkt_bid_prc" field.</summary>
    public const int CompMktBidPrcFieldNumber = 121;
    private float compMktBidPrc_;
    /// <summary>
    /// Current bid price of prevailing composite market
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public float CompMktBidPrc {
      get { return compMktBidPrc_; }
      set {
        compMktBidPrc_ = value;
      }
    }

    /// <summary>Field number for the "comp_mkt_ask_prc" field.</summary>
    public const int CompMktAskPrcFieldNumber = 124;
    private float compMktAskPrc_;
    /// <summary>
    /// Current ask price of prevailing composite market
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public float CompMktAskPrc {
      get { return compMktAskPrc_; }
      set {
        compMktAskPrc_ = value;
      }
    }

    /// <summary>Field number for the "src_timestamp" field.</summary>
    public const int SrcTimestampFieldNumber = 127;
    private long srcTimestamp_;
    /// <summary>
    /// exchange high precision timestamp (if available)
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public long SrcTimestamp {
      get { return srcTimestamp_; }
      set {
        srcTimestamp_ = value;
      }
    }

    /// <summary>Field number for the "net_timestamp" field.</summary>
    public const int NetTimestampFieldNumber = 130;
    private long netTimestamp_;
    /// <summary>
    /// inbound packet PTP timestamp from SR gateway switch;usually syncronized with f
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public long NetTimestamp {
      get { return netTimestamp_; }
      set {
        netTimestamp_ = value;
      }
    }

    /// <summary>Field number for the "timestamp" field.</summary>
    public const int TimestampFieldNumber = 133;
    private global::Google.Protobuf.WellKnownTypes.Timestamp timestamp_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Google.Protobuf.WellKnownTypes.Timestamp Timestamp {
      get { return timestamp_; }
      set {
        timestamp_ = value;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override bool Equals(object other) {
      return Equals(other as OptionOpenAuction);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public bool Equals(OptionOpenAuction other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (!object.Equals(Meta, other.Meta)) return false;
      if (!object.Equals(Pkey, other.Pkey)) return false;
      if (AuctionType != other.AuctionType) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(RefPrc, other.RefPrc)) return false;
      if (BuyContracts != other.BuyContracts) return false;
      if (SellContracts != other.SellContracts) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(IndicativePrc, other.IndicativePrc)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(AuctionOnlyPrc, other.AuctionOnlyPrc)) return false;
      if (OpeningCond != other.OpeningCond) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(CompMktBidPrc, other.CompMktBidPrc)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(CompMktAskPrc, other.CompMktAskPrc)) return false;
      if (SrcTimestamp != other.SrcTimestamp) return false;
      if (NetTimestamp != other.NetTimestamp) return false;
      if (!object.Equals(Timestamp, other.Timestamp)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override int GetHashCode() {
      int hash = 1;
      if (Meta_ != null) hash ^= Meta.GetHashCode();
      if (pkey_ != null) hash ^= Pkey.GetHashCode();
      if (AuctionType != global::Spiderrock.Protobuf.OpenAuctionType.Unspecified) hash ^= AuctionType.GetHashCode();
      if (RefPrc != 0F) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(RefPrc);
      if (BuyContracts != 0) hash ^= BuyContracts.GetHashCode();
      if (SellContracts != 0) hash ^= SellContracts.GetHashCode();
      if (IndicativePrc != 0F) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(IndicativePrc);
      if (AuctionOnlyPrc != 0F) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(AuctionOnlyPrc);
      if (OpeningCond != global::Spiderrock.Protobuf.OptAuctionOpenCondition.Unspecified) hash ^= OpeningCond.GetHashCode();
      if (CompMktBidPrc != 0F) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(CompMktBidPrc);
      if (CompMktAskPrc != 0F) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(CompMktAskPrc);
      if (SrcTimestamp != 0L) hash ^= SrcTimestamp.GetHashCode();
      if (NetTimestamp != 0L) hash ^= NetTimestamp.GetHashCode();
      if (timestamp_ != null) hash ^= Timestamp.GetHashCode();
      if (_unknownFields != null) {
        hash ^= _unknownFields.GetHashCode();
      }
      return hash;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void WriteTo(pb::CodedOutputStream output) {
    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      output.WriteRawMessage(this);
    #else
      if (Meta_ != null) {
        output.WriteRawTag(10);
        output.WriteMessage(Meta);
      }
      if (pkey_ != null) {
        output.WriteRawTag(18);
        output.WriteMessage(Pkey);
      }
      if (AuctionType != global::Spiderrock.Protobuf.OpenAuctionType.Unspecified) {
        output.WriteRawTag(160, 6);
        output.WriteEnum((int) AuctionType);
      }
      if (RefPrc != 0F) {
        output.WriteRawTag(189, 6);
        output.WriteFloat(RefPrc);
      }
      if (BuyContracts != 0) {
        output.WriteRawTag(208, 6);
        output.WriteInt32(BuyContracts);
      }
      if (SellContracts != 0) {
        output.WriteRawTag(232, 6);
        output.WriteInt32(SellContracts);
      }
      if (IndicativePrc != 0F) {
        output.WriteRawTag(133, 7);
        output.WriteFloat(IndicativePrc);
      }
      if (AuctionOnlyPrc != 0F) {
        output.WriteRawTag(157, 7);
        output.WriteFloat(AuctionOnlyPrc);
      }
      if (OpeningCond != global::Spiderrock.Protobuf.OptAuctionOpenCondition.Unspecified) {
        output.WriteRawTag(176, 7);
        output.WriteEnum((int) OpeningCond);
      }
      if (CompMktBidPrc != 0F) {
        output.WriteRawTag(205, 7);
        output.WriteFloat(CompMktBidPrc);
      }
      if (CompMktAskPrc != 0F) {
        output.WriteRawTag(229, 7);
        output.WriteFloat(CompMktAskPrc);
      }
      if (SrcTimestamp != 0L) {
        output.WriteRawTag(248, 7);
        output.WriteInt64(SrcTimestamp);
      }
      if (NetTimestamp != 0L) {
        output.WriteRawTag(144, 8);
        output.WriteInt64(NetTimestamp);
      }
      if (timestamp_ != null) {
        output.WriteRawTag(170, 8);
        output.WriteMessage(Timestamp);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
      if (Meta_ != null) {
        output.WriteRawTag(10);
        output.WriteMessage(Meta);
      }
      if (pkey_ != null) {
        output.WriteRawTag(18);
        output.WriteMessage(Pkey);
      }
      if (AuctionType != global::Spiderrock.Protobuf.OpenAuctionType.Unspecified) {
        output.WriteRawTag(160, 6);
        output.WriteEnum((int) AuctionType);
      }
      if (RefPrc != 0F) {
        output.WriteRawTag(189, 6);
        output.WriteFloat(RefPrc);
      }
      if (BuyContracts != 0) {
        output.WriteRawTag(208, 6);
        output.WriteInt32(BuyContracts);
      }
      if (SellContracts != 0) {
        output.WriteRawTag(232, 6);
        output.WriteInt32(SellContracts);
      }
      if (IndicativePrc != 0F) {
        output.WriteRawTag(133, 7);
        output.WriteFloat(IndicativePrc);
      }
      if (AuctionOnlyPrc != 0F) {
        output.WriteRawTag(157, 7);
        output.WriteFloat(AuctionOnlyPrc);
      }
      if (OpeningCond != global::Spiderrock.Protobuf.OptAuctionOpenCondition.Unspecified) {
        output.WriteRawTag(176, 7);
        output.WriteEnum((int) OpeningCond);
      }
      if (CompMktBidPrc != 0F) {
        output.WriteRawTag(205, 7);
        output.WriteFloat(CompMktBidPrc);
      }
      if (CompMktAskPrc != 0F) {
        output.WriteRawTag(229, 7);
        output.WriteFloat(CompMktAskPrc);
      }
      if (SrcTimestamp != 0L) {
        output.WriteRawTag(248, 7);
        output.WriteInt64(SrcTimestamp);
      }
      if (NetTimestamp != 0L) {
        output.WriteRawTag(144, 8);
        output.WriteInt64(NetTimestamp);
      }
      if (timestamp_ != null) {
        output.WriteRawTag(170, 8);
        output.WriteMessage(Timestamp);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(ref output);
      }
    }
    #endif

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public int CalculateSize() {
      int size = 0;
      if (Meta_ != null) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(Meta);
      }
      if (pkey_ != null) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(Pkey);
      }
      if (AuctionType != global::Spiderrock.Protobuf.OpenAuctionType.Unspecified) {
        size += 2 + pb::CodedOutputStream.ComputeEnumSize((int) AuctionType);
      }
      if (RefPrc != 0F) {
        size += 2 + 4;
      }
      if (BuyContracts != 0) {
        size += 2 + pb::CodedOutputStream.ComputeInt32Size(BuyContracts);
      }
      if (SellContracts != 0) {
        size += 2 + pb::CodedOutputStream.ComputeInt32Size(SellContracts);
      }
      if (IndicativePrc != 0F) {
        size += 2 + 4;
      }
      if (AuctionOnlyPrc != 0F) {
        size += 2 + 4;
      }
      if (OpeningCond != global::Spiderrock.Protobuf.OptAuctionOpenCondition.Unspecified) {
        size += 2 + pb::CodedOutputStream.ComputeEnumSize((int) OpeningCond);
      }
      if (CompMktBidPrc != 0F) {
        size += 2 + 4;
      }
      if (CompMktAskPrc != 0F) {
        size += 2 + 4;
      }
      if (SrcTimestamp != 0L) {
        size += 2 + pb::CodedOutputStream.ComputeInt64Size(SrcTimestamp);
      }
      if (NetTimestamp != 0L) {
        size += 2 + pb::CodedOutputStream.ComputeInt64Size(NetTimestamp);
      }
      if (timestamp_ != null) {
        size += 2 + pb::CodedOutputStream.ComputeMessageSize(Timestamp);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void MergeFrom(OptionOpenAuction other) {
      if (other == null) {
        return;
      }
      if (other.Meta_ != null) {
        if (Meta_ == null) {
          Meta = new global::Spiderrock.Protobuf.MessageMetadata();
        }
        Meta.MergeFrom(other.Meta);
      }
      if (other.pkey_ != null) {
        if (pkey_ == null) {
          Pkey = new global::Spiderrock.Protobuf.OptionOpenAuction.Types.PKey();
        }
        Pkey.MergeFrom(other.Pkey);
      }
      if (other.AuctionType != global::Spiderrock.Protobuf.OpenAuctionType.Unspecified) {
        AuctionType = other.AuctionType;
      }
      if (other.RefPrc != 0F) {
        RefPrc = other.RefPrc;
      }
      if (other.BuyContracts != 0) {
        BuyContracts = other.BuyContracts;
      }
      if (other.SellContracts != 0) {
        SellContracts = other.SellContracts;
      }
      if (other.IndicativePrc != 0F) {
        IndicativePrc = other.IndicativePrc;
      }
      if (other.AuctionOnlyPrc != 0F) {
        AuctionOnlyPrc = other.AuctionOnlyPrc;
      }
      if (other.OpeningCond != global::Spiderrock.Protobuf.OptAuctionOpenCondition.Unspecified) {
        OpeningCond = other.OpeningCond;
      }
      if (other.CompMktBidPrc != 0F) {
        CompMktBidPrc = other.CompMktBidPrc;
      }
      if (other.CompMktAskPrc != 0F) {
        CompMktAskPrc = other.CompMktAskPrc;
      }
      if (other.SrcTimestamp != 0L) {
        SrcTimestamp = other.SrcTimestamp;
      }
      if (other.NetTimestamp != 0L) {
        NetTimestamp = other.NetTimestamp;
      }
      if (other.timestamp_ != null) {
        if (timestamp_ == null) {
          Timestamp = new global::Google.Protobuf.WellKnownTypes.Timestamp();
        }
        Timestamp.MergeFrom(other.Timestamp);
      }
      _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void MergeFrom(pb::CodedInputStream input) {
    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      input.ReadRawMessage(this);
    #else
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
            break;
          case 10: {
            if (Meta_ == null) {
              Meta = new global::Spiderrock.Protobuf.MessageMetadata();
            }
            input.ReadMessage(Meta);
            break;
          }
          case 18: {
            if (pkey_ == null) {
              Pkey = new global::Spiderrock.Protobuf.OptionOpenAuction.Types.PKey();
            }
            input.ReadMessage(Pkey);
            break;
          }
          case 800: {
            AuctionType = (global::Spiderrock.Protobuf.OpenAuctionType) input.ReadEnum();
            break;
          }
          case 829: {
            RefPrc = input.ReadFloat();
            break;
          }
          case 848: {
            BuyContracts = input.ReadInt32();
            break;
          }
          case 872: {
            SellContracts = input.ReadInt32();
            break;
          }
          case 901: {
            IndicativePrc = input.ReadFloat();
            break;
          }
          case 925: {
            AuctionOnlyPrc = input.ReadFloat();
            break;
          }
          case 944: {
            OpeningCond = (global::Spiderrock.Protobuf.OptAuctionOpenCondition) input.ReadEnum();
            break;
          }
          case 973: {
            CompMktBidPrc = input.ReadFloat();
            break;
          }
          case 997: {
            CompMktAskPrc = input.ReadFloat();
            break;
          }
          case 1016: {
            SrcTimestamp = input.ReadInt64();
            break;
          }
          case 1040: {
            NetTimestamp = input.ReadInt64();
            break;
          }
          case 1066: {
            if (timestamp_ == null) {
              Timestamp = new global::Google.Protobuf.WellKnownTypes.Timestamp();
            }
            input.ReadMessage(Timestamp);
            break;
          }
        }
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    void pb::IBufferMessage.InternalMergeFrom(ref pb::ParseContext input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
            break;
          case 10: {
            if (Meta_ == null) {
              Meta = new global::Spiderrock.Protobuf.MessageMetadata();
            }
            input.ReadMessage(Meta);
            break;
          }
          case 18: {
            if (pkey_ == null) {
              Pkey = new global::Spiderrock.Protobuf.OptionOpenAuction.Types.PKey();
            }
            input.ReadMessage(Pkey);
            break;
          }
          case 800: {
            AuctionType = (global::Spiderrock.Protobuf.OpenAuctionType) input.ReadEnum();
            break;
          }
          case 829: {
            RefPrc = input.ReadFloat();
            break;
          }
          case 848: {
            BuyContracts = input.ReadInt32();
            break;
          }
          case 872: {
            SellContracts = input.ReadInt32();
            break;
          }
          case 901: {
            IndicativePrc = input.ReadFloat();
            break;
          }
          case 925: {
            AuctionOnlyPrc = input.ReadFloat();
            break;
          }
          case 944: {
            OpeningCond = (global::Spiderrock.Protobuf.OptAuctionOpenCondition) input.ReadEnum();
            break;
          }
          case 973: {
            CompMktBidPrc = input.ReadFloat();
            break;
          }
          case 997: {
            CompMktAskPrc = input.ReadFloat();
            break;
          }
          case 1016: {
            SrcTimestamp = input.ReadInt64();
            break;
          }
          case 1040: {
            NetTimestamp = input.ReadInt64();
            break;
          }
          case 1066: {
            if (timestamp_ == null) {
              Timestamp = new global::Google.Protobuf.WellKnownTypes.Timestamp();
            }
            input.ReadMessage(Timestamp);
            break;
          }
        }
      }
    }
    #endif

    #region Nested types
    /// <summary>Container for nested types declared in the OptionOpenAuction message type.</summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static partial class Types {
      public sealed partial class PKey : pb::IMessage<PKey>
      #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
          , pb::IBufferMessage
      #endif
      {
        private static readonly pb::MessageParser<PKey> _parser = new pb::MessageParser<PKey>(() => new PKey());
        private pb::UnknownFieldSet _unknownFields;
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public static pb::MessageParser<PKey> Parser { get { return _parser; } }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public static pbr::MessageDescriptor Descriptor {
          get { return global::Spiderrock.Protobuf.OptionOpenAuction.Descriptor.NestedTypes[0]; }
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        pbr::MessageDescriptor pb::IMessage.Descriptor {
          get { return Descriptor; }
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public PKey() {
          OnConstruction();
        }

        partial void OnConstruction();

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public PKey(PKey other) : this() {
          okey_ = other.okey_ != null ? other.okey_.Clone() : null;
          _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public PKey Clone() {
          return new PKey(this);
        }

        /// <summary>Field number for the "okey" field.</summary>
        public const int OkeyFieldNumber = 10;
        private global::Spiderrock.Protobuf.OptionKey okey_;
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public global::Spiderrock.Protobuf.OptionKey Okey {
          get { return okey_; }
          set {
            okey_ = value;
          }
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public override bool Equals(object other) {
          return Equals(other as PKey);
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public bool Equals(PKey other) {
          if (ReferenceEquals(other, null)) {
            return false;
          }
          if (ReferenceEquals(other, this)) {
            return true;
          }
          if (!object.Equals(Okey, other.Okey)) return false;
          return Equals(_unknownFields, other._unknownFields);
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public override int GetHashCode() {
          int hash = 1;
          if (okey_ != null) hash ^= Okey.GetHashCode();
          if (_unknownFields != null) {
            hash ^= _unknownFields.GetHashCode();
          }
          return hash;
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public override string ToString() {
          return pb::JsonFormatter.ToDiagnosticString(this);
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public void WriteTo(pb::CodedOutputStream output) {
        #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
          output.WriteRawMessage(this);
        #else
          if (okey_ != null) {
            output.WriteRawTag(82);
            output.WriteMessage(Okey);
          }
          if (_unknownFields != null) {
            _unknownFields.WriteTo(output);
          }
        #endif
        }

        #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
          if (okey_ != null) {
            output.WriteRawTag(82);
            output.WriteMessage(Okey);
          }
          if (_unknownFields != null) {
            _unknownFields.WriteTo(ref output);
          }
        }
        #endif

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public int CalculateSize() {
          int size = 0;
          if (okey_ != null) {
            size += 1 + pb::CodedOutputStream.ComputeMessageSize(Okey);
          }
          if (_unknownFields != null) {
            size += _unknownFields.CalculateSize();
          }
          return size;
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public void MergeFrom(PKey other) {
          if (other == null) {
            return;
          }
          if (other.okey_ != null) {
            if (okey_ == null) {
              Okey = new global::Spiderrock.Protobuf.OptionKey();
            }
            Okey.MergeFrom(other.Okey);
          }
          _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public void MergeFrom(pb::CodedInputStream input) {
        #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
          input.ReadRawMessage(this);
        #else
          uint tag;
          while ((tag = input.ReadTag()) != 0) {
            switch(tag) {
              default:
                _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
                break;
              case 82: {
                if (okey_ == null) {
                  Okey = new global::Spiderrock.Protobuf.OptionKey();
                }
                input.ReadMessage(Okey);
                break;
              }
            }
          }
        #endif
        }

        #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        void pb::IBufferMessage.InternalMergeFrom(ref pb::ParseContext input) {
          uint tag;
          while ((tag = input.ReadTag()) != 0) {
            switch(tag) {
              default:
                _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
                break;
              case 82: {
                if (okey_ == null) {
                  Okey = new global::Spiderrock.Protobuf.OptionKey();
                }
                input.ReadMessage(Okey);
                break;
              }
            }
          }
        }
        #endif

      }

    }
    #endregion

  }

  #endregion

}

#endregion Designer generated code
