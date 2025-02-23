// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: Protobuf/ClientLive/SyntheticFutureQuote.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021, 8981
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Spiderrock.Protobuf {

  /// <summary>Holder for reflection information generated from Protobuf/ClientLive/SyntheticFutureQuote.proto</summary>
  public static partial class SyntheticFutureQuoteReflection {

    #region Descriptor
    /// <summary>File descriptor for Protobuf/ClientLive/SyntheticFutureQuote.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static SyntheticFutureQuoteReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "Ci5Qcm90b2J1Zi9DbGllbnRMaXZlL1N5bnRoZXRpY0Z1dHVyZVF1b3RlLnBy",
            "b3RvEhNzcGlkZXJyb2NrLnByb3RvYnVmGhdzcGlkZXJyb2NrX2NvbW1vbi5w",
            "cm90byLOAwoUU3ludGhldGljRnV0dXJlUXVvdGUSMwoFX21ldGEYASABKAsy",
            "JC5zcGlkZXJyb2NrLnByb3RvYnVmLk1lc3NhZ2VNZXRhZGF0YRI8CgRwa2V5",
            "GAIgASgLMi4uc3BpZGVycm9jay5wcm90b2J1Zi5TeW50aGV0aWNGdXR1cmVR",
            "dW90ZS5QS2V5EhEKCWJpZF9wcmljZRhkIAEoARIRCglhc2tfcHJpY2UYZyAB",
            "KAESEAoIYmlkX3NpemUYaiABKAUSEAoIYXNrX3NpemUYbSABKAUSOAoKYmlk",
            "X3NvdXJjZRhwIAEoDjIkLnNwaWRlcnJvY2sucHJvdG9idWYuU3ludGhldGlj",
            "U291cmNlEjgKCmFza19zb3VyY2UYcyABKA4yJC5zcGlkZXJyb2NrLnByb3Rv",
            "YnVmLlN5bnRoZXRpY1NvdXJjZRI4Cg1tYXJrZXRfc3RhdHVzGHYgASgOMiEu",
            "c3BpZGVycm9jay5wcm90b2J1Zi5NYXJrZXRTdGF0dXMSFQoNbmV0X3RpbWVz",
            "dGFtcBh5IAEoAxo0CgRQS2V5EiwKBGZrZXkYCiABKAsyHi5zcGlkZXJyb2Nr",
            "LnByb3RvYnVmLkV4cGlyeUtleWIGcHJvdG8z"));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Spiderrock.Protobuf.SpiderrockCommonReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Spiderrock.Protobuf.SyntheticFutureQuote), global::Spiderrock.Protobuf.SyntheticFutureQuote.Parser, new[]{ "Meta", "Pkey", "BidPrice", "AskPrice", "BidSize", "AskSize", "BidSource", "AskSource", "MarketStatus", "NetTimestamp" }, null, null, null, new pbr::GeneratedClrTypeInfo[] { new pbr::GeneratedClrTypeInfo(typeof(global::Spiderrock.Protobuf.SyntheticFutureQuote.Types.PKey), global::Spiderrock.Protobuf.SyntheticFutureQuote.Types.PKey.Parser, new[]{ "Fkey" }, null, null, null, null)})
          }));
    }
    #endregion

  }
  #region Messages
  /// <summary>
  ///
  ///Live synthetic future quotes are SpiderRock implied futures quotes derived from roll prices.
  /// </summary>
  public sealed partial class SyntheticFutureQuote : pb::IMessage<SyntheticFutureQuote>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<SyntheticFutureQuote> _parser = new pb::MessageParser<SyntheticFutureQuote>(() => new SyntheticFutureQuote());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pb::MessageParser<SyntheticFutureQuote> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Spiderrock.Protobuf.SyntheticFutureQuoteReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public SyntheticFutureQuote() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public SyntheticFutureQuote(SyntheticFutureQuote other) : this() {
      Meta_ = other.Meta_ != null ? other.Meta_.Clone() : null;
      pkey_ = other.pkey_ != null ? other.pkey_.Clone() : null;
      bidPrice_ = other.bidPrice_;
      askPrice_ = other.askPrice_;
      bidSize_ = other.bidSize_;
      askSize_ = other.askSize_;
      bidSource_ = other.bidSource_;
      askSource_ = other.askSource_;
      marketStatus_ = other.marketStatus_;
      netTimestamp_ = other.netTimestamp_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public SyntheticFutureQuote Clone() {
      return new SyntheticFutureQuote(this);
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
    private global::Spiderrock.Protobuf.SyntheticFutureQuote.Types.PKey pkey_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Spiderrock.Protobuf.SyntheticFutureQuote.Types.PKey Pkey {
      get { return pkey_; }
      set {
        pkey_ = value;
      }
    }

    /// <summary>Field number for the "bid_price" field.</summary>
    public const int BidPriceFieldNumber = 100;
    private double bidPrice_;
    /// <summary>
    /// best implied future bid price (adjusted for option expiry)
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public double BidPrice {
      get { return bidPrice_; }
      set {
        bidPrice_ = value;
      }
    }

    /// <summary>Field number for the "ask_price" field.</summary>
    public const int AskPriceFieldNumber = 103;
    private double askPrice_;
    /// <summary>
    /// best implied future ask price (adjusted for option expiry)
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public double AskPrice {
      get { return askPrice_; }
      set {
        askPrice_ = value;
      }
    }

    /// <summary>Field number for the "bid_size" field.</summary>
    public const int BidSizeFieldNumber = 106;
    private int bidSize_;
    /// <summary>
    /// best implied future bid size
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public int BidSize {
      get { return bidSize_; }
      set {
        bidSize_ = value;
      }
    }

    /// <summary>Field number for the "ask_size" field.</summary>
    public const int AskSizeFieldNumber = 109;
    private int askSize_;
    /// <summary>
    /// best implied future ask size
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public int AskSize {
      get { return askSize_; }
      set {
        askSize_ = value;
      }
    }

    /// <summary>Field number for the "bid_source" field.</summary>
    public const int BidSourceFieldNumber = 112;
    private global::Spiderrock.Protobuf.SyntheticSource bidSource_ = global::Spiderrock.Protobuf.SyntheticSource.Unspecified;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Spiderrock.Protobuf.SyntheticSource BidSource {
      get { return bidSource_; }
      set {
        bidSource_ = value;
      }
    }

    /// <summary>Field number for the "ask_source" field.</summary>
    public const int AskSourceFieldNumber = 115;
    private global::Spiderrock.Protobuf.SyntheticSource askSource_ = global::Spiderrock.Protobuf.SyntheticSource.Unspecified;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Spiderrock.Protobuf.SyntheticSource AskSource {
      get { return askSource_; }
      set {
        askSource_ = value;
      }
    }

    /// <summary>Field number for the "market_status" field.</summary>
    public const int MarketStatusFieldNumber = 118;
    private global::Spiderrock.Protobuf.MarketStatus marketStatus_ = global::Spiderrock.Protobuf.MarketStatus.Unspecified;
    /// <summary>
    /// composite market status of all dependent markets
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Spiderrock.Protobuf.MarketStatus MarketStatus {
      get { return marketStatus_; }
      set {
        marketStatus_ = value;
      }
    }

    /// <summary>Field number for the "net_timestamp" field.</summary>
    public const int NetTimestampFieldNumber = 121;
    private long netTimestamp_;
    /// <summary>
    /// most recent net timestamp of any market affecting this record
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public long NetTimestamp {
      get { return netTimestamp_; }
      set {
        netTimestamp_ = value;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override bool Equals(object other) {
      return Equals(other as SyntheticFutureQuote);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public bool Equals(SyntheticFutureQuote other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (!object.Equals(Meta, other.Meta)) return false;
      if (!object.Equals(Pkey, other.Pkey)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(BidPrice, other.BidPrice)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.Equals(AskPrice, other.AskPrice)) return false;
      if (BidSize != other.BidSize) return false;
      if (AskSize != other.AskSize) return false;
      if (BidSource != other.BidSource) return false;
      if (AskSource != other.AskSource) return false;
      if (MarketStatus != other.MarketStatus) return false;
      if (NetTimestamp != other.NetTimestamp) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override int GetHashCode() {
      int hash = 1;
      if (Meta_ != null) hash ^= Meta.GetHashCode();
      if (pkey_ != null) hash ^= Pkey.GetHashCode();
      if (BidPrice != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(BidPrice);
      if (AskPrice != 0D) hash ^= pbc::ProtobufEqualityComparers.BitwiseDoubleEqualityComparer.GetHashCode(AskPrice);
      if (BidSize != 0) hash ^= BidSize.GetHashCode();
      if (AskSize != 0) hash ^= AskSize.GetHashCode();
      if (BidSource != global::Spiderrock.Protobuf.SyntheticSource.Unspecified) hash ^= BidSource.GetHashCode();
      if (AskSource != global::Spiderrock.Protobuf.SyntheticSource.Unspecified) hash ^= AskSource.GetHashCode();
      if (MarketStatus != global::Spiderrock.Protobuf.MarketStatus.Unspecified) hash ^= MarketStatus.GetHashCode();
      if (NetTimestamp != 0L) hash ^= NetTimestamp.GetHashCode();
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
      if (BidPrice != 0D) {
        output.WriteRawTag(161, 6);
        output.WriteDouble(BidPrice);
      }
      if (AskPrice != 0D) {
        output.WriteRawTag(185, 6);
        output.WriteDouble(AskPrice);
      }
      if (BidSize != 0) {
        output.WriteRawTag(208, 6);
        output.WriteInt32(BidSize);
      }
      if (AskSize != 0) {
        output.WriteRawTag(232, 6);
        output.WriteInt32(AskSize);
      }
      if (BidSource != global::Spiderrock.Protobuf.SyntheticSource.Unspecified) {
        output.WriteRawTag(128, 7);
        output.WriteEnum((int) BidSource);
      }
      if (AskSource != global::Spiderrock.Protobuf.SyntheticSource.Unspecified) {
        output.WriteRawTag(152, 7);
        output.WriteEnum((int) AskSource);
      }
      if (MarketStatus != global::Spiderrock.Protobuf.MarketStatus.Unspecified) {
        output.WriteRawTag(176, 7);
        output.WriteEnum((int) MarketStatus);
      }
      if (NetTimestamp != 0L) {
        output.WriteRawTag(200, 7);
        output.WriteInt64(NetTimestamp);
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
      if (BidPrice != 0D) {
        output.WriteRawTag(161, 6);
        output.WriteDouble(BidPrice);
      }
      if (AskPrice != 0D) {
        output.WriteRawTag(185, 6);
        output.WriteDouble(AskPrice);
      }
      if (BidSize != 0) {
        output.WriteRawTag(208, 6);
        output.WriteInt32(BidSize);
      }
      if (AskSize != 0) {
        output.WriteRawTag(232, 6);
        output.WriteInt32(AskSize);
      }
      if (BidSource != global::Spiderrock.Protobuf.SyntheticSource.Unspecified) {
        output.WriteRawTag(128, 7);
        output.WriteEnum((int) BidSource);
      }
      if (AskSource != global::Spiderrock.Protobuf.SyntheticSource.Unspecified) {
        output.WriteRawTag(152, 7);
        output.WriteEnum((int) AskSource);
      }
      if (MarketStatus != global::Spiderrock.Protobuf.MarketStatus.Unspecified) {
        output.WriteRawTag(176, 7);
        output.WriteEnum((int) MarketStatus);
      }
      if (NetTimestamp != 0L) {
        output.WriteRawTag(200, 7);
        output.WriteInt64(NetTimestamp);
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
      if (BidPrice != 0D) {
        size += 2 + 8;
      }
      if (AskPrice != 0D) {
        size += 2 + 8;
      }
      if (BidSize != 0) {
        size += 2 + pb::CodedOutputStream.ComputeInt32Size(BidSize);
      }
      if (AskSize != 0) {
        size += 2 + pb::CodedOutputStream.ComputeInt32Size(AskSize);
      }
      if (BidSource != global::Spiderrock.Protobuf.SyntheticSource.Unspecified) {
        size += 2 + pb::CodedOutputStream.ComputeEnumSize((int) BidSource);
      }
      if (AskSource != global::Spiderrock.Protobuf.SyntheticSource.Unspecified) {
        size += 2 + pb::CodedOutputStream.ComputeEnumSize((int) AskSource);
      }
      if (MarketStatus != global::Spiderrock.Protobuf.MarketStatus.Unspecified) {
        size += 2 + pb::CodedOutputStream.ComputeEnumSize((int) MarketStatus);
      }
      if (NetTimestamp != 0L) {
        size += 2 + pb::CodedOutputStream.ComputeInt64Size(NetTimestamp);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void MergeFrom(SyntheticFutureQuote other) {
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
          Pkey = new global::Spiderrock.Protobuf.SyntheticFutureQuote.Types.PKey();
        }
        Pkey.MergeFrom(other.Pkey);
      }
      if (other.BidPrice != 0D) {
        BidPrice = other.BidPrice;
      }
      if (other.AskPrice != 0D) {
        AskPrice = other.AskPrice;
      }
      if (other.BidSize != 0) {
        BidSize = other.BidSize;
      }
      if (other.AskSize != 0) {
        AskSize = other.AskSize;
      }
      if (other.BidSource != global::Spiderrock.Protobuf.SyntheticSource.Unspecified) {
        BidSource = other.BidSource;
      }
      if (other.AskSource != global::Spiderrock.Protobuf.SyntheticSource.Unspecified) {
        AskSource = other.AskSource;
      }
      if (other.MarketStatus != global::Spiderrock.Protobuf.MarketStatus.Unspecified) {
        MarketStatus = other.MarketStatus;
      }
      if (other.NetTimestamp != 0L) {
        NetTimestamp = other.NetTimestamp;
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
              Pkey = new global::Spiderrock.Protobuf.SyntheticFutureQuote.Types.PKey();
            }
            input.ReadMessage(Pkey);
            break;
          }
          case 801: {
            BidPrice = input.ReadDouble();
            break;
          }
          case 825: {
            AskPrice = input.ReadDouble();
            break;
          }
          case 848: {
            BidSize = input.ReadInt32();
            break;
          }
          case 872: {
            AskSize = input.ReadInt32();
            break;
          }
          case 896: {
            BidSource = (global::Spiderrock.Protobuf.SyntheticSource) input.ReadEnum();
            break;
          }
          case 920: {
            AskSource = (global::Spiderrock.Protobuf.SyntheticSource) input.ReadEnum();
            break;
          }
          case 944: {
            MarketStatus = (global::Spiderrock.Protobuf.MarketStatus) input.ReadEnum();
            break;
          }
          case 968: {
            NetTimestamp = input.ReadInt64();
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
              Pkey = new global::Spiderrock.Protobuf.SyntheticFutureQuote.Types.PKey();
            }
            input.ReadMessage(Pkey);
            break;
          }
          case 801: {
            BidPrice = input.ReadDouble();
            break;
          }
          case 825: {
            AskPrice = input.ReadDouble();
            break;
          }
          case 848: {
            BidSize = input.ReadInt32();
            break;
          }
          case 872: {
            AskSize = input.ReadInt32();
            break;
          }
          case 896: {
            BidSource = (global::Spiderrock.Protobuf.SyntheticSource) input.ReadEnum();
            break;
          }
          case 920: {
            AskSource = (global::Spiderrock.Protobuf.SyntheticSource) input.ReadEnum();
            break;
          }
          case 944: {
            MarketStatus = (global::Spiderrock.Protobuf.MarketStatus) input.ReadEnum();
            break;
          }
          case 968: {
            NetTimestamp = input.ReadInt64();
            break;
          }
        }
      }
    }
    #endif

    #region Nested types
    /// <summary>Container for nested types declared in the SyntheticFutureQuote message type.</summary>
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
          get { return global::Spiderrock.Protobuf.SyntheticFutureQuote.Descriptor.NestedTypes[0]; }
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
          fkey_ = other.fkey_ != null ? other.fkey_.Clone() : null;
          _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public PKey Clone() {
          return new PKey(this);
        }

        /// <summary>Field number for the "fkey" field.</summary>
        public const int FkeyFieldNumber = 10;
        private global::Spiderrock.Protobuf.ExpiryKey fkey_;
        /// <summary>
        /// ccode + expiry
        /// </summary>
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public global::Spiderrock.Protobuf.ExpiryKey Fkey {
          get { return fkey_; }
          set {
            fkey_ = value;
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
          if (!object.Equals(Fkey, other.Fkey)) return false;
          return Equals(_unknownFields, other._unknownFields);
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public override int GetHashCode() {
          int hash = 1;
          if (fkey_ != null) hash ^= Fkey.GetHashCode();
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
          if (fkey_ != null) {
            output.WriteRawTag(82);
            output.WriteMessage(Fkey);
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
          if (fkey_ != null) {
            output.WriteRawTag(82);
            output.WriteMessage(Fkey);
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
          if (fkey_ != null) {
            size += 1 + pb::CodedOutputStream.ComputeMessageSize(Fkey);
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
          if (other.fkey_ != null) {
            if (fkey_ == null) {
              Fkey = new global::Spiderrock.Protobuf.ExpiryKey();
            }
            Fkey.MergeFrom(other.Fkey);
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
                if (fkey_ == null) {
                  Fkey = new global::Spiderrock.Protobuf.ExpiryKey();
                }
                input.ReadMessage(Fkey);
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
                if (fkey_ == null) {
                  Fkey = new global::Spiderrock.Protobuf.ExpiryKey();
                }
                input.ReadMessage(Fkey);
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
