// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: Protobuf/ClientTheo/SpdrOptTheoRecord.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021, 8981
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Spiderrock.Protobuf {

  /// <summary>Holder for reflection information generated from Protobuf/ClientTheo/SpdrOptTheoRecord.proto</summary>
  public static partial class SpdrOptTheoRecordReflection {

    #region Descriptor
    /// <summary>File descriptor for Protobuf/ClientTheo/SpdrOptTheoRecord.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static SpdrOptTheoRecordReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "CitQcm90b2J1Zi9DbGllbnRUaGVvL1NwZHJPcHRUaGVvUmVjb3JkLnByb3Rv",
            "EhNzcGlkZXJyb2NrLnByb3RvYnVmGhdzcGlkZXJyb2NrX2NvbW1vbi5wcm90",
            "bxofZ29vZ2xlL3Byb3RvYnVmL3RpbWVzdGFtcC5wcm90byL+AwoRU3Bkck9w",
            "dFRoZW9SZWNvcmQSMwoFX21ldGEYASABKAsyJC5zcGlkZXJyb2NrLnByb3Rv",
            "YnVmLk1lc3NhZ2VNZXRhZGF0YRI5CgRwa2V5GAIgASgLMisuc3BpZGVycm9j",
            "ay5wcm90b2J1Zi5TcGRyT3B0VGhlb1JlY29yZC5QS2V5EhAKCHRoZW9fdm9s",
            "GGQgASgCEgwKBGJWb2wYZyABKAISDAoEc1ZvbBhqIAEoAhINCgViRWRnZRht",
            "IAEoAhINCgVzRWRnZRhwIAEoAhJDChNidXlfc2VsbF9jb252ZW50aW9uGHMg",
            "ASgOMiYuc3BpZGVycm9jay5wcm90b2J1Zi5CdXlTZWxsQ29udmVudGlvbhIQ",
            "CghyZWZfdVByYxh2IAEoAhISCgp2ZWdhX3Nsb3BlGHkgASgCEjQKC3RoZW9f",
            "c3RhdHVzGHwgASgOMh8uc3BpZGVycm9jay5wcm90b2J1Zi5UaGVvU3RhdHVz",
            "Ei0KCXRpbWVzdGFtcBh/IAEoCzIaLmdvb2dsZS5wcm90b2J1Zi5UaW1lc3Rh",
            "bXAaXQoEUEtleRIsCgRva2V5GAogASgLMh4uc3BpZGVycm9jay5wcm90b2J1",
            "Zi5PcHRpb25LZXkSEgoKdGhlb19tb2RlbBgLIAEoCRITCgtjbGllbnRfZmly",
            "bRgMIAEoCWIGcHJvdG8z"));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Spiderrock.Protobuf.SpiderrockCommonReflection.Descriptor, global::Google.Protobuf.WellKnownTypes.TimestampReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Spiderrock.Protobuf.SpdrOptTheoRecord), global::Spiderrock.Protobuf.SpdrOptTheoRecord.Parser, new[]{ "Meta", "Pkey", "TheoVol", "BVol", "SVol", "BEdge", "SEdge", "BuySellConvention", "RefUPrc", "VegaSlope", "TheoStatus", "Timestamp" }, null, null, null, new pbr::GeneratedClrTypeInfo[] { new pbr::GeneratedClrTypeInfo(typeof(global::Spiderrock.Protobuf.SpdrOptTheoRecord.Types.PKey), global::Spiderrock.Protobuf.SpdrOptTheoRecord.Types.PKey.Parser, new[]{ "Okey", "TheoModel", "ClientFirm" }, null, null, null, null)})
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class SpdrOptTheoRecord : pb::IMessage<SpdrOptTheoRecord>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<SpdrOptTheoRecord> _parser = new pb::MessageParser<SpdrOptTheoRecord>(() => new SpdrOptTheoRecord());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pb::MessageParser<SpdrOptTheoRecord> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Spiderrock.Protobuf.SpdrOptTheoRecordReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public SpdrOptTheoRecord() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public SpdrOptTheoRecord(SpdrOptTheoRecord other) : this() {
      Meta_ = other.Meta_ != null ? other.Meta_.Clone() : null;
      pkey_ = other.pkey_ != null ? other.pkey_.Clone() : null;
      theoVol_ = other.theoVol_;
      bVol_ = other.bVol_;
      sVol_ = other.sVol_;
      bEdge_ = other.bEdge_;
      sEdge_ = other.sEdge_;
      buySellConvention_ = other.buySellConvention_;
      refUPrc_ = other.refUPrc_;
      vegaSlope_ = other.vegaSlope_;
      theoStatus_ = other.theoStatus_;
      timestamp_ = other.timestamp_ != null ? other.timestamp_.Clone() : null;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public SpdrOptTheoRecord Clone() {
      return new SpdrOptTheoRecord(this);
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
    private global::Spiderrock.Protobuf.SpdrOptTheoRecord.Types.PKey pkey_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Spiderrock.Protobuf.SpdrOptTheoRecord.Types.PKey Pkey {
      get { return pkey_; }
      set {
        pkey_ = value;
      }
    }

    /// <summary>Field number for the "theo_vol" field.</summary>
    public const int TheoVolFieldNumber = 100;
    private float theoVol_;
    /// <summary>
    /// mid-point (fair) volatility
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public float TheoVol {
      get { return theoVol_; }
      set {
        theoVol_ = value;
      }
    }

    /// <summary>Field number for the "bVol" field.</summary>
    public const int BVolFieldNumber = 103;
    private float bVol_;
    /// <summary>
    /// buy vol
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public float BVol {
      get { return bVol_; }
      set {
        bVol_ = value;
      }
    }

    /// <summary>Field number for the "sVol" field.</summary>
    public const int SVolFieldNumber = 106;
    private float sVol_;
    /// <summary>
    /// sell vol
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public float SVol {
      get { return sVol_; }
      set {
        sVol_ = value;
      }
    }

    /// <summary>Field number for the "bEdge" field.</summary>
    public const int BEdgeFieldNumber = 109;
    private float bEdge_;
    /// <summary>
    /// edge premium spread when buying
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public float BEdge {
      get { return bEdge_; }
      set {
        bEdge_ = value;
      }
    }

    /// <summary>Field number for the "sEdge" field.</summary>
    public const int SEdgeFieldNumber = 112;
    private float sEdge_;
    /// <summary>
    /// edge premium spread when selling
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public float SEdge {
      get { return sEdge_; }
      set {
        sEdge_ = value;
      }
    }

    /// <summary>Field number for the "buy_sell_convention" field.</summary>
    public const int BuySellConventionFieldNumber = 115;
    private global::Spiderrock.Protobuf.BuySellConvention buySellConvention_ = global::Spiderrock.Protobuf.BuySellConvention.Unspecified;
    /// <summary>
    /// rule used to interpret BVol, SVol, BEdge, and SEdge
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Spiderrock.Protobuf.BuySellConvention BuySellConvention {
      get { return buySellConvention_; }
      set {
        buySellConvention_ = value;
      }
    }

    /// <summary>Field number for the "ref_uPrc" field.</summary>
    public const int RefUPrcFieldNumber = 118;
    private float refUPrc_;
    /// <summary>
    /// Reference uPrc for dynamic vol: vol = TheoVol + vegaSlope * (uPrc - refUPrc).
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public float RefUPrc {
      get { return refUPrc_; }
      set {
        refUPrc_ = value;
      }
    }

    /// <summary>Field number for the "vega_slope" field.</summary>
    public const int VegaSlopeFieldNumber = 121;
    private float vegaSlope_;
    /// <summary>
    /// Set to zero for no dynamic.  hedge delta = delta + vegaSlope * vega;requires account.hedgeType = [TVol (theo delta + vegaSlope) or TvS (surface delta + vegaSlope)] (default is surface delta only)
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public float VegaSlope {
      get { return vegaSlope_; }
      set {
        vegaSlope_ = value;
      }
    }

    /// <summary>Field number for the "theo_status" field.</summary>
    public const int TheoStatusFieldNumber = 124;
    private global::Spiderrock.Protobuf.TheoStatus theoStatus_ = global::Spiderrock.Protobuf.TheoStatus.Unspecified;
    /// <summary>
    /// indicates where theos for this ticker will be utilized
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Spiderrock.Protobuf.TheoStatus TheoStatus {
      get { return theoStatus_; }
      set {
        theoStatus_ = value;
      }
    }

    /// <summary>Field number for the "timestamp" field.</summary>
    public const int TimestampFieldNumber = 127;
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
      return Equals(other as SpdrOptTheoRecord);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public bool Equals(SpdrOptTheoRecord other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (!object.Equals(Meta, other.Meta)) return false;
      if (!object.Equals(Pkey, other.Pkey)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(TheoVol, other.TheoVol)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(BVol, other.BVol)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(SVol, other.SVol)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(BEdge, other.BEdge)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(SEdge, other.SEdge)) return false;
      if (BuySellConvention != other.BuySellConvention) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(RefUPrc, other.RefUPrc)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(VegaSlope, other.VegaSlope)) return false;
      if (TheoStatus != other.TheoStatus) return false;
      if (!object.Equals(Timestamp, other.Timestamp)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override int GetHashCode() {
      int hash = 1;
      if (Meta_ != null) hash ^= Meta.GetHashCode();
      if (pkey_ != null) hash ^= Pkey.GetHashCode();
      if (TheoVol != 0F) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(TheoVol);
      if (BVol != 0F) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(BVol);
      if (SVol != 0F) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(SVol);
      if (BEdge != 0F) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(BEdge);
      if (SEdge != 0F) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(SEdge);
      if (BuySellConvention != global::Spiderrock.Protobuf.BuySellConvention.Unspecified) hash ^= BuySellConvention.GetHashCode();
      if (RefUPrc != 0F) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(RefUPrc);
      if (VegaSlope != 0F) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(VegaSlope);
      if (TheoStatus != global::Spiderrock.Protobuf.TheoStatus.Unspecified) hash ^= TheoStatus.GetHashCode();
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
      if (TheoVol != 0F) {
        output.WriteRawTag(165, 6);
        output.WriteFloat(TheoVol);
      }
      if (BVol != 0F) {
        output.WriteRawTag(189, 6);
        output.WriteFloat(BVol);
      }
      if (SVol != 0F) {
        output.WriteRawTag(213, 6);
        output.WriteFloat(SVol);
      }
      if (BEdge != 0F) {
        output.WriteRawTag(237, 6);
        output.WriteFloat(BEdge);
      }
      if (SEdge != 0F) {
        output.WriteRawTag(133, 7);
        output.WriteFloat(SEdge);
      }
      if (BuySellConvention != global::Spiderrock.Protobuf.BuySellConvention.Unspecified) {
        output.WriteRawTag(152, 7);
        output.WriteEnum((int) BuySellConvention);
      }
      if (RefUPrc != 0F) {
        output.WriteRawTag(181, 7);
        output.WriteFloat(RefUPrc);
      }
      if (VegaSlope != 0F) {
        output.WriteRawTag(205, 7);
        output.WriteFloat(VegaSlope);
      }
      if (TheoStatus != global::Spiderrock.Protobuf.TheoStatus.Unspecified) {
        output.WriteRawTag(224, 7);
        output.WriteEnum((int) TheoStatus);
      }
      if (timestamp_ != null) {
        output.WriteRawTag(250, 7);
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
      if (TheoVol != 0F) {
        output.WriteRawTag(165, 6);
        output.WriteFloat(TheoVol);
      }
      if (BVol != 0F) {
        output.WriteRawTag(189, 6);
        output.WriteFloat(BVol);
      }
      if (SVol != 0F) {
        output.WriteRawTag(213, 6);
        output.WriteFloat(SVol);
      }
      if (BEdge != 0F) {
        output.WriteRawTag(237, 6);
        output.WriteFloat(BEdge);
      }
      if (SEdge != 0F) {
        output.WriteRawTag(133, 7);
        output.WriteFloat(SEdge);
      }
      if (BuySellConvention != global::Spiderrock.Protobuf.BuySellConvention.Unspecified) {
        output.WriteRawTag(152, 7);
        output.WriteEnum((int) BuySellConvention);
      }
      if (RefUPrc != 0F) {
        output.WriteRawTag(181, 7);
        output.WriteFloat(RefUPrc);
      }
      if (VegaSlope != 0F) {
        output.WriteRawTag(205, 7);
        output.WriteFloat(VegaSlope);
      }
      if (TheoStatus != global::Spiderrock.Protobuf.TheoStatus.Unspecified) {
        output.WriteRawTag(224, 7);
        output.WriteEnum((int) TheoStatus);
      }
      if (timestamp_ != null) {
        output.WriteRawTag(250, 7);
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
      if (TheoVol != 0F) {
        size += 2 + 4;
      }
      if (BVol != 0F) {
        size += 2 + 4;
      }
      if (SVol != 0F) {
        size += 2 + 4;
      }
      if (BEdge != 0F) {
        size += 2 + 4;
      }
      if (SEdge != 0F) {
        size += 2 + 4;
      }
      if (BuySellConvention != global::Spiderrock.Protobuf.BuySellConvention.Unspecified) {
        size += 2 + pb::CodedOutputStream.ComputeEnumSize((int) BuySellConvention);
      }
      if (RefUPrc != 0F) {
        size += 2 + 4;
      }
      if (VegaSlope != 0F) {
        size += 2 + 4;
      }
      if (TheoStatus != global::Spiderrock.Protobuf.TheoStatus.Unspecified) {
        size += 2 + pb::CodedOutputStream.ComputeEnumSize((int) TheoStatus);
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
    public void MergeFrom(SpdrOptTheoRecord other) {
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
          Pkey = new global::Spiderrock.Protobuf.SpdrOptTheoRecord.Types.PKey();
        }
        Pkey.MergeFrom(other.Pkey);
      }
      if (other.TheoVol != 0F) {
        TheoVol = other.TheoVol;
      }
      if (other.BVol != 0F) {
        BVol = other.BVol;
      }
      if (other.SVol != 0F) {
        SVol = other.SVol;
      }
      if (other.BEdge != 0F) {
        BEdge = other.BEdge;
      }
      if (other.SEdge != 0F) {
        SEdge = other.SEdge;
      }
      if (other.BuySellConvention != global::Spiderrock.Protobuf.BuySellConvention.Unspecified) {
        BuySellConvention = other.BuySellConvention;
      }
      if (other.RefUPrc != 0F) {
        RefUPrc = other.RefUPrc;
      }
      if (other.VegaSlope != 0F) {
        VegaSlope = other.VegaSlope;
      }
      if (other.TheoStatus != global::Spiderrock.Protobuf.TheoStatus.Unspecified) {
        TheoStatus = other.TheoStatus;
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
              Pkey = new global::Spiderrock.Protobuf.SpdrOptTheoRecord.Types.PKey();
            }
            input.ReadMessage(Pkey);
            break;
          }
          case 805: {
            TheoVol = input.ReadFloat();
            break;
          }
          case 829: {
            BVol = input.ReadFloat();
            break;
          }
          case 853: {
            SVol = input.ReadFloat();
            break;
          }
          case 877: {
            BEdge = input.ReadFloat();
            break;
          }
          case 901: {
            SEdge = input.ReadFloat();
            break;
          }
          case 920: {
            BuySellConvention = (global::Spiderrock.Protobuf.BuySellConvention) input.ReadEnum();
            break;
          }
          case 949: {
            RefUPrc = input.ReadFloat();
            break;
          }
          case 973: {
            VegaSlope = input.ReadFloat();
            break;
          }
          case 992: {
            TheoStatus = (global::Spiderrock.Protobuf.TheoStatus) input.ReadEnum();
            break;
          }
          case 1018: {
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
              Pkey = new global::Spiderrock.Protobuf.SpdrOptTheoRecord.Types.PKey();
            }
            input.ReadMessage(Pkey);
            break;
          }
          case 805: {
            TheoVol = input.ReadFloat();
            break;
          }
          case 829: {
            BVol = input.ReadFloat();
            break;
          }
          case 853: {
            SVol = input.ReadFloat();
            break;
          }
          case 877: {
            BEdge = input.ReadFloat();
            break;
          }
          case 901: {
            SEdge = input.ReadFloat();
            break;
          }
          case 920: {
            BuySellConvention = (global::Spiderrock.Protobuf.BuySellConvention) input.ReadEnum();
            break;
          }
          case 949: {
            RefUPrc = input.ReadFloat();
            break;
          }
          case 973: {
            VegaSlope = input.ReadFloat();
            break;
          }
          case 992: {
            TheoStatus = (global::Spiderrock.Protobuf.TheoStatus) input.ReadEnum();
            break;
          }
          case 1018: {
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
    /// <summary>Container for nested types declared in the SpdrOptTheoRecord message type.</summary>
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
          get { return global::Spiderrock.Protobuf.SpdrOptTheoRecord.Descriptor.NestedTypes[0]; }
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
          theoModel_ = other.theoModel_;
          clientFirm_ = other.clientFirm_;
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

        /// <summary>Field number for the "theo_model" field.</summary>
        public const int TheoModelFieldNumber = 11;
        private string theoModel_ = "";
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public string TheoModel {
          get { return theoModel_; }
          set {
            theoModel_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
          }
        }

        /// <summary>Field number for the "client_firm" field.</summary>
        public const int ClientFirmFieldNumber = 12;
        private string clientFirm_ = "";
        /// <summary>
        /// client firm this theo model is associated with (controls visibility)
        /// </summary>
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public string ClientFirm {
          get { return clientFirm_; }
          set {
            clientFirm_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
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
          if (TheoModel != other.TheoModel) return false;
          if (ClientFirm != other.ClientFirm) return false;
          return Equals(_unknownFields, other._unknownFields);
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public override int GetHashCode() {
          int hash = 1;
          if (okey_ != null) hash ^= Okey.GetHashCode();
          if (TheoModel.Length != 0) hash ^= TheoModel.GetHashCode();
          if (ClientFirm.Length != 0) hash ^= ClientFirm.GetHashCode();
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
          if (TheoModel.Length != 0) {
            output.WriteRawTag(90);
            output.WriteString(TheoModel);
          }
          if (ClientFirm.Length != 0) {
            output.WriteRawTag(98);
            output.WriteString(ClientFirm);
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
          if (TheoModel.Length != 0) {
            output.WriteRawTag(90);
            output.WriteString(TheoModel);
          }
          if (ClientFirm.Length != 0) {
            output.WriteRawTag(98);
            output.WriteString(ClientFirm);
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
          if (TheoModel.Length != 0) {
            size += 1 + pb::CodedOutputStream.ComputeStringSize(TheoModel);
          }
          if (ClientFirm.Length != 0) {
            size += 1 + pb::CodedOutputStream.ComputeStringSize(ClientFirm);
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
          if (other.TheoModel.Length != 0) {
            TheoModel = other.TheoModel;
          }
          if (other.ClientFirm.Length != 0) {
            ClientFirm = other.ClientFirm;
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
              case 90: {
                TheoModel = input.ReadString();
                break;
              }
              case 98: {
                ClientFirm = input.ReadString();
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
              case 90: {
                TheoModel = input.ReadString();
                break;
              }
              case 98: {
                ClientFirm = input.ReadString();
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