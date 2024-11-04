// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: Protobuf/SRMLinkAnalytics/OptionPrintSetSummary.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021, 8981
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Spiderrock.Protobuf {

  /// <summary>Holder for reflection information generated from Protobuf/SRMLinkAnalytics/OptionPrintSetSummary.proto</summary>
  public static partial class OptionPrintSetSummaryReflection {

    #region Descriptor
    /// <summary>File descriptor for Protobuf/SRMLinkAnalytics/OptionPrintSetSummary.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static OptionPrintSetSummaryReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "CjVQcm90b2J1Zi9TUk1MaW5rQW5hbHl0aWNzL09wdGlvblByaW50U2V0U3Vt",
            "bWFyeS5wcm90bxITc3BpZGVycm9jay5wcm90b2J1ZhoXc3BpZGVycm9ja19j",
            "b21tb24ucHJvdG8i8AQKFU9wdGlvblByaW50U2V0U3VtbWFyeRIzCgVfbWV0",
            "YRgBIAEoCzIkLnNwaWRlcnJvY2sucHJvdG9idWYuTWVzc2FnZU1ldGFkYXRh",
            "Ej0KBHBrZXkYAiABKAsyLy5zcGlkZXJyb2NrLnByb3RvYnVmLk9wdGlvblBy",
            "aW50U2V0U3VtbWFyeS5QS2V5EhIKCm51bV9wcmludHMYZCABKAUSFgoOc3Vt",
            "X3ByaW50X3NpemUYZyABKAUSGwoTc3VtX2V4Y2hfcXVvdGVfc2l6ZRhqIAEo",
            "BRIZChFzdW1fcHJpbnRfbTFfcG5fbBhtIAEoAhIaChJzdW1fcHJpbnRfbTEw",
            "X3BuX2wYcCABKAISDwoHYXZnX3ZvbBhzIAEoAhIQCghhdmdfdmVnYRh2IAEo",
            "AhIRCglhdmdfZGVsdGEYeSABKAISFgoOYXZnX3ByaW50X3Byb2IYfCABKAIS",
            "GAoQc3VtX3N1cmZhY2VfZWRnZRh/IAEoAhr6AQoEUEtleRIsCgRva2V5GAog",
            "ASgLMh4uc3BpZGVycm9jay5wcm90b2J1Zi5PcHRpb25LZXkSLgoIcHJ0X2V4",
            "Y2gYCyABKA4yHC5zcGlkZXJyb2NrLnByb3RvYnVmLk9wdEV4Y2gSLgoIcHJ0",
            "X3NpZGUYDCABKA4yHC5zcGlkZXJyb2NrLnByb3RvYnVmLkJ1eVNlbGwSLgoI",
            "cHJ0X3R5cGUYDSABKA4yHC5zcGlkZXJyb2NrLnByb3RvYnVmLlBydFR5cGUS",
            "NAoOdHJhZGluZ19wZXJpb2QYDiABKAsyHC5zcGlkZXJyb2NrLnByb3RvYnVm",
            "LkRhdGVLZXliBnByb3RvMw=="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Spiderrock.Protobuf.SpiderrockCommonReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Spiderrock.Protobuf.OptionPrintSetSummary), global::Spiderrock.Protobuf.OptionPrintSetSummary.Parser, new[]{ "Meta", "Pkey", "NumPrints", "SumPrintSize", "SumExchQuoteSize", "SumPrintM1PnL", "SumPrintM10PnL", "AvgVol", "AvgVega", "AvgDelta", "AvgPrintProb", "SumSurfaceEdge" }, null, null, null, new pbr::GeneratedClrTypeInfo[] { new pbr::GeneratedClrTypeInfo(typeof(global::Spiderrock.Protobuf.OptionPrintSetSummary.Types.PKey), global::Spiderrock.Protobuf.OptionPrintSetSummary.Types.PKey.Parser, new[]{ "Okey", "PrtExch", "PrtSide", "PrtType", "TradingPeriod" }, null, null, null, null)})
          }));
    }
    #endregion

  }
  #region Messages
  /// <summary>
  ///
  ///OptionPrintSetSummary records are created at the end of each trading period and contain a summary of the activity for the period; Summary of OptionPrintSet records
  /// </summary>
  public sealed partial class OptionPrintSetSummary : pb::IMessage<OptionPrintSetSummary>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<OptionPrintSetSummary> _parser = new pb::MessageParser<OptionPrintSetSummary>(() => new OptionPrintSetSummary());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pb::MessageParser<OptionPrintSetSummary> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Spiderrock.Protobuf.OptionPrintSetSummaryReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public OptionPrintSetSummary() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public OptionPrintSetSummary(OptionPrintSetSummary other) : this() {
      Meta_ = other.Meta_ != null ? other.Meta_.Clone() : null;
      pkey_ = other.pkey_ != null ? other.pkey_.Clone() : null;
      numPrints_ = other.numPrints_;
      sumPrintSize_ = other.sumPrintSize_;
      sumExchQuoteSize_ = other.sumExchQuoteSize_;
      sumPrintM1PnL_ = other.sumPrintM1PnL_;
      sumPrintM10PnL_ = other.sumPrintM10PnL_;
      avgVol_ = other.avgVol_;
      avgVega_ = other.avgVega_;
      avgDelta_ = other.avgDelta_;
      avgPrintProb_ = other.avgPrintProb_;
      sumSurfaceEdge_ = other.sumSurfaceEdge_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public OptionPrintSetSummary Clone() {
      return new OptionPrintSetSummary(this);
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
    private global::Spiderrock.Protobuf.OptionPrintSetSummary.Types.PKey pkey_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Spiderrock.Protobuf.OptionPrintSetSummary.Types.PKey Pkey {
      get { return pkey_; }
      set {
        pkey_ = value;
      }
    }

    /// <summary>Field number for the "num_prints" field.</summary>
    public const int NumPrintsFieldNumber = 100;
    private int numPrints_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public int NumPrints {
      get { return numPrints_; }
      set {
        numPrints_ = value;
      }
    }

    /// <summary>Field number for the "sum_print_size" field.</summary>
    public const int SumPrintSizeFieldNumber = 103;
    private int sumPrintSize_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public int SumPrintSize {
      get { return sumPrintSize_; }
      set {
        sumPrintSize_ = value;
      }
    }

    /// <summary>Field number for the "sum_exch_quote_size" field.</summary>
    public const int SumExchQuoteSizeFieldNumber = 106;
    private int sumExchQuoteSize_;
    /// <summary>
    /// exch quote size at the time of print
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public int SumExchQuoteSize {
      get { return sumExchQuoteSize_; }
      set {
        sumExchQuoteSize_ = value;
      }
    }

    /// <summary>Field number for the "sum_print_m1_pn_l" field.</summary>
    public const int SumPrintM1PnLFieldNumber = 109;
    private float sumPrintM1PnL_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public float SumPrintM1PnL {
      get { return sumPrintM1PnL_; }
      set {
        sumPrintM1PnL_ = value;
      }
    }

    /// <summary>Field number for the "sum_print_m10_pn_l" field.</summary>
    public const int SumPrintM10PnLFieldNumber = 112;
    private float sumPrintM10PnL_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public float SumPrintM10PnL {
      get { return sumPrintM10PnL_; }
      set {
        sumPrintM10PnL_ = value;
      }
    }

    /// <summary>Field number for the "avg_vol" field.</summary>
    public const int AvgVolFieldNumber = 115;
    private float avgVol_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public float AvgVol {
      get { return avgVol_; }
      set {
        avgVol_ = value;
      }
    }

    /// <summary>Field number for the "avg_vega" field.</summary>
    public const int AvgVegaFieldNumber = 118;
    private float avgVega_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public float AvgVega {
      get { return avgVega_; }
      set {
        avgVega_ = value;
      }
    }

    /// <summary>Field number for the "avg_delta" field.</summary>
    public const int AvgDeltaFieldNumber = 121;
    private float avgDelta_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public float AvgDelta {
      get { return avgDelta_; }
      set {
        avgDelta_ = value;
      }
    }

    /// <summary>Field number for the "avg_print_prob" field.</summary>
    public const int AvgPrintProbFieldNumber = 124;
    private float avgPrintProb_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public float AvgPrintProb {
      get { return avgPrintProb_; }
      set {
        avgPrintProb_ = value;
      }
    }

    /// <summary>Field number for the "sum_surface_edge" field.</summary>
    public const int SumSurfaceEdgeFieldNumber = 127;
    private float sumSurfaceEdge_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public float SumSurfaceEdge {
      get { return sumSurfaceEdge_; }
      set {
        sumSurfaceEdge_ = value;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override bool Equals(object other) {
      return Equals(other as OptionPrintSetSummary);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public bool Equals(OptionPrintSetSummary other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (!object.Equals(Meta, other.Meta)) return false;
      if (!object.Equals(Pkey, other.Pkey)) return false;
      if (NumPrints != other.NumPrints) return false;
      if (SumPrintSize != other.SumPrintSize) return false;
      if (SumExchQuoteSize != other.SumExchQuoteSize) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(SumPrintM1PnL, other.SumPrintM1PnL)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(SumPrintM10PnL, other.SumPrintM10PnL)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(AvgVol, other.AvgVol)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(AvgVega, other.AvgVega)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(AvgDelta, other.AvgDelta)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(AvgPrintProb, other.AvgPrintProb)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(SumSurfaceEdge, other.SumSurfaceEdge)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override int GetHashCode() {
      int hash = 1;
      if (Meta_ != null) hash ^= Meta.GetHashCode();
      if (pkey_ != null) hash ^= Pkey.GetHashCode();
      if (NumPrints != 0) hash ^= NumPrints.GetHashCode();
      if (SumPrintSize != 0) hash ^= SumPrintSize.GetHashCode();
      if (SumExchQuoteSize != 0) hash ^= SumExchQuoteSize.GetHashCode();
      if (SumPrintM1PnL != 0F) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(SumPrintM1PnL);
      if (SumPrintM10PnL != 0F) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(SumPrintM10PnL);
      if (AvgVol != 0F) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(AvgVol);
      if (AvgVega != 0F) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(AvgVega);
      if (AvgDelta != 0F) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(AvgDelta);
      if (AvgPrintProb != 0F) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(AvgPrintProb);
      if (SumSurfaceEdge != 0F) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(SumSurfaceEdge);
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
      if (NumPrints != 0) {
        output.WriteRawTag(160, 6);
        output.WriteInt32(NumPrints);
      }
      if (SumPrintSize != 0) {
        output.WriteRawTag(184, 6);
        output.WriteInt32(SumPrintSize);
      }
      if (SumExchQuoteSize != 0) {
        output.WriteRawTag(208, 6);
        output.WriteInt32(SumExchQuoteSize);
      }
      if (SumPrintM1PnL != 0F) {
        output.WriteRawTag(237, 6);
        output.WriteFloat(SumPrintM1PnL);
      }
      if (SumPrintM10PnL != 0F) {
        output.WriteRawTag(133, 7);
        output.WriteFloat(SumPrintM10PnL);
      }
      if (AvgVol != 0F) {
        output.WriteRawTag(157, 7);
        output.WriteFloat(AvgVol);
      }
      if (AvgVega != 0F) {
        output.WriteRawTag(181, 7);
        output.WriteFloat(AvgVega);
      }
      if (AvgDelta != 0F) {
        output.WriteRawTag(205, 7);
        output.WriteFloat(AvgDelta);
      }
      if (AvgPrintProb != 0F) {
        output.WriteRawTag(229, 7);
        output.WriteFloat(AvgPrintProb);
      }
      if (SumSurfaceEdge != 0F) {
        output.WriteRawTag(253, 7);
        output.WriteFloat(SumSurfaceEdge);
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
      if (NumPrints != 0) {
        output.WriteRawTag(160, 6);
        output.WriteInt32(NumPrints);
      }
      if (SumPrintSize != 0) {
        output.WriteRawTag(184, 6);
        output.WriteInt32(SumPrintSize);
      }
      if (SumExchQuoteSize != 0) {
        output.WriteRawTag(208, 6);
        output.WriteInt32(SumExchQuoteSize);
      }
      if (SumPrintM1PnL != 0F) {
        output.WriteRawTag(237, 6);
        output.WriteFloat(SumPrintM1PnL);
      }
      if (SumPrintM10PnL != 0F) {
        output.WriteRawTag(133, 7);
        output.WriteFloat(SumPrintM10PnL);
      }
      if (AvgVol != 0F) {
        output.WriteRawTag(157, 7);
        output.WriteFloat(AvgVol);
      }
      if (AvgVega != 0F) {
        output.WriteRawTag(181, 7);
        output.WriteFloat(AvgVega);
      }
      if (AvgDelta != 0F) {
        output.WriteRawTag(205, 7);
        output.WriteFloat(AvgDelta);
      }
      if (AvgPrintProb != 0F) {
        output.WriteRawTag(229, 7);
        output.WriteFloat(AvgPrintProb);
      }
      if (SumSurfaceEdge != 0F) {
        output.WriteRawTag(253, 7);
        output.WriteFloat(SumSurfaceEdge);
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
      if (NumPrints != 0) {
        size += 2 + pb::CodedOutputStream.ComputeInt32Size(NumPrints);
      }
      if (SumPrintSize != 0) {
        size += 2 + pb::CodedOutputStream.ComputeInt32Size(SumPrintSize);
      }
      if (SumExchQuoteSize != 0) {
        size += 2 + pb::CodedOutputStream.ComputeInt32Size(SumExchQuoteSize);
      }
      if (SumPrintM1PnL != 0F) {
        size += 2 + 4;
      }
      if (SumPrintM10PnL != 0F) {
        size += 2 + 4;
      }
      if (AvgVol != 0F) {
        size += 2 + 4;
      }
      if (AvgVega != 0F) {
        size += 2 + 4;
      }
      if (AvgDelta != 0F) {
        size += 2 + 4;
      }
      if (AvgPrintProb != 0F) {
        size += 2 + 4;
      }
      if (SumSurfaceEdge != 0F) {
        size += 2 + 4;
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void MergeFrom(OptionPrintSetSummary other) {
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
          Pkey = new global::Spiderrock.Protobuf.OptionPrintSetSummary.Types.PKey();
        }
        Pkey.MergeFrom(other.Pkey);
      }
      if (other.NumPrints != 0) {
        NumPrints = other.NumPrints;
      }
      if (other.SumPrintSize != 0) {
        SumPrintSize = other.SumPrintSize;
      }
      if (other.SumExchQuoteSize != 0) {
        SumExchQuoteSize = other.SumExchQuoteSize;
      }
      if (other.SumPrintM1PnL != 0F) {
        SumPrintM1PnL = other.SumPrintM1PnL;
      }
      if (other.SumPrintM10PnL != 0F) {
        SumPrintM10PnL = other.SumPrintM10PnL;
      }
      if (other.AvgVol != 0F) {
        AvgVol = other.AvgVol;
      }
      if (other.AvgVega != 0F) {
        AvgVega = other.AvgVega;
      }
      if (other.AvgDelta != 0F) {
        AvgDelta = other.AvgDelta;
      }
      if (other.AvgPrintProb != 0F) {
        AvgPrintProb = other.AvgPrintProb;
      }
      if (other.SumSurfaceEdge != 0F) {
        SumSurfaceEdge = other.SumSurfaceEdge;
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
              Pkey = new global::Spiderrock.Protobuf.OptionPrintSetSummary.Types.PKey();
            }
            input.ReadMessage(Pkey);
            break;
          }
          case 800: {
            NumPrints = input.ReadInt32();
            break;
          }
          case 824: {
            SumPrintSize = input.ReadInt32();
            break;
          }
          case 848: {
            SumExchQuoteSize = input.ReadInt32();
            break;
          }
          case 877: {
            SumPrintM1PnL = input.ReadFloat();
            break;
          }
          case 901: {
            SumPrintM10PnL = input.ReadFloat();
            break;
          }
          case 925: {
            AvgVol = input.ReadFloat();
            break;
          }
          case 949: {
            AvgVega = input.ReadFloat();
            break;
          }
          case 973: {
            AvgDelta = input.ReadFloat();
            break;
          }
          case 997: {
            AvgPrintProb = input.ReadFloat();
            break;
          }
          case 1021: {
            SumSurfaceEdge = input.ReadFloat();
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
              Pkey = new global::Spiderrock.Protobuf.OptionPrintSetSummary.Types.PKey();
            }
            input.ReadMessage(Pkey);
            break;
          }
          case 800: {
            NumPrints = input.ReadInt32();
            break;
          }
          case 824: {
            SumPrintSize = input.ReadInt32();
            break;
          }
          case 848: {
            SumExchQuoteSize = input.ReadInt32();
            break;
          }
          case 877: {
            SumPrintM1PnL = input.ReadFloat();
            break;
          }
          case 901: {
            SumPrintM10PnL = input.ReadFloat();
            break;
          }
          case 925: {
            AvgVol = input.ReadFloat();
            break;
          }
          case 949: {
            AvgVega = input.ReadFloat();
            break;
          }
          case 973: {
            AvgDelta = input.ReadFloat();
            break;
          }
          case 997: {
            AvgPrintProb = input.ReadFloat();
            break;
          }
          case 1021: {
            SumSurfaceEdge = input.ReadFloat();
            break;
          }
        }
      }
    }
    #endif

    #region Nested types
    /// <summary>Container for nested types declared in the OptionPrintSetSummary message type.</summary>
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
          get { return global::Spiderrock.Protobuf.OptionPrintSetSummary.Descriptor.NestedTypes[0]; }
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
          prtExch_ = other.prtExch_;
          prtSide_ = other.prtSide_;
          prtType_ = other.prtType_;
          tradingPeriod_ = other.tradingPeriod_ != null ? other.tradingPeriod_.Clone() : null;
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

        /// <summary>Field number for the "prt_exch" field.</summary>
        public const int PrtExchFieldNumber = 11;
        private global::Spiderrock.Protobuf.OptExch prtExch_ = global::Spiderrock.Protobuf.OptExch.Unspecified;
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public global::Spiderrock.Protobuf.OptExch PrtExch {
          get { return prtExch_; }
          set {
            prtExch_ = value;
          }
        }

        /// <summary>Field number for the "prt_side" field.</summary>
        public const int PrtSideFieldNumber = 12;
        private global::Spiderrock.Protobuf.BuySell prtSide_ = global::Spiderrock.Protobuf.BuySell.Unspecified;
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public global::Spiderrock.Protobuf.BuySell PrtSide {
          get { return prtSide_; }
          set {
            prtSide_ = value;
          }
        }

        /// <summary>Field number for the "prt_type" field.</summary>
        public const int PrtTypeFieldNumber = 13;
        private global::Spiderrock.Protobuf.PrtType prtType_ = global::Spiderrock.Protobuf.PrtType.Unspecified;
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public global::Spiderrock.Protobuf.PrtType PrtType {
          get { return prtType_; }
          set {
            prtType_ = value;
          }
        }

        /// <summary>Field number for the "trading_period" field.</summary>
        public const int TradingPeriodFieldNumber = 14;
        private global::Spiderrock.Protobuf.DateKey tradingPeriod_;
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public global::Spiderrock.Protobuf.DateKey TradingPeriod {
          get { return tradingPeriod_; }
          set {
            tradingPeriod_ = value;
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
          if (PrtExch != other.PrtExch) return false;
          if (PrtSide != other.PrtSide) return false;
          if (PrtType != other.PrtType) return false;
          if (!object.Equals(TradingPeriod, other.TradingPeriod)) return false;
          return Equals(_unknownFields, other._unknownFields);
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public override int GetHashCode() {
          int hash = 1;
          if (okey_ != null) hash ^= Okey.GetHashCode();
          if (PrtExch != global::Spiderrock.Protobuf.OptExch.Unspecified) hash ^= PrtExch.GetHashCode();
          if (PrtSide != global::Spiderrock.Protobuf.BuySell.Unspecified) hash ^= PrtSide.GetHashCode();
          if (PrtType != global::Spiderrock.Protobuf.PrtType.Unspecified) hash ^= PrtType.GetHashCode();
          if (tradingPeriod_ != null) hash ^= TradingPeriod.GetHashCode();
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
          if (PrtExch != global::Spiderrock.Protobuf.OptExch.Unspecified) {
            output.WriteRawTag(88);
            output.WriteEnum((int) PrtExch);
          }
          if (PrtSide != global::Spiderrock.Protobuf.BuySell.Unspecified) {
            output.WriteRawTag(96);
            output.WriteEnum((int) PrtSide);
          }
          if (PrtType != global::Spiderrock.Protobuf.PrtType.Unspecified) {
            output.WriteRawTag(104);
            output.WriteEnum((int) PrtType);
          }
          if (tradingPeriod_ != null) {
            output.WriteRawTag(114);
            output.WriteMessage(TradingPeriod);
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
          if (PrtExch != global::Spiderrock.Protobuf.OptExch.Unspecified) {
            output.WriteRawTag(88);
            output.WriteEnum((int) PrtExch);
          }
          if (PrtSide != global::Spiderrock.Protobuf.BuySell.Unspecified) {
            output.WriteRawTag(96);
            output.WriteEnum((int) PrtSide);
          }
          if (PrtType != global::Spiderrock.Protobuf.PrtType.Unspecified) {
            output.WriteRawTag(104);
            output.WriteEnum((int) PrtType);
          }
          if (tradingPeriod_ != null) {
            output.WriteRawTag(114);
            output.WriteMessage(TradingPeriod);
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
          if (PrtExch != global::Spiderrock.Protobuf.OptExch.Unspecified) {
            size += 1 + pb::CodedOutputStream.ComputeEnumSize((int) PrtExch);
          }
          if (PrtSide != global::Spiderrock.Protobuf.BuySell.Unspecified) {
            size += 1 + pb::CodedOutputStream.ComputeEnumSize((int) PrtSide);
          }
          if (PrtType != global::Spiderrock.Protobuf.PrtType.Unspecified) {
            size += 1 + pb::CodedOutputStream.ComputeEnumSize((int) PrtType);
          }
          if (tradingPeriod_ != null) {
            size += 1 + pb::CodedOutputStream.ComputeMessageSize(TradingPeriod);
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
          if (other.PrtExch != global::Spiderrock.Protobuf.OptExch.Unspecified) {
            PrtExch = other.PrtExch;
          }
          if (other.PrtSide != global::Spiderrock.Protobuf.BuySell.Unspecified) {
            PrtSide = other.PrtSide;
          }
          if (other.PrtType != global::Spiderrock.Protobuf.PrtType.Unspecified) {
            PrtType = other.PrtType;
          }
          if (other.tradingPeriod_ != null) {
            if (tradingPeriod_ == null) {
              TradingPeriod = new global::Spiderrock.Protobuf.DateKey();
            }
            TradingPeriod.MergeFrom(other.TradingPeriod);
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
              case 88: {
                PrtExch = (global::Spiderrock.Protobuf.OptExch) input.ReadEnum();
                break;
              }
              case 96: {
                PrtSide = (global::Spiderrock.Protobuf.BuySell) input.ReadEnum();
                break;
              }
              case 104: {
                PrtType = (global::Spiderrock.Protobuf.PrtType) input.ReadEnum();
                break;
              }
              case 114: {
                if (tradingPeriod_ == null) {
                  TradingPeriod = new global::Spiderrock.Protobuf.DateKey();
                }
                input.ReadMessage(TradingPeriod);
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
              case 88: {
                PrtExch = (global::Spiderrock.Protobuf.OptExch) input.ReadEnum();
                break;
              }
              case 96: {
                PrtSide = (global::Spiderrock.Protobuf.BuySell) input.ReadEnum();
                break;
              }
              case 104: {
                PrtType = (global::Spiderrock.Protobuf.PrtType) input.ReadEnum();
                break;
              }
              case 114: {
                if (tradingPeriod_ == null) {
                  TradingPeriod = new global::Spiderrock.Protobuf.DateKey();
                }
                input.ReadMessage(TradingPeriod);
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