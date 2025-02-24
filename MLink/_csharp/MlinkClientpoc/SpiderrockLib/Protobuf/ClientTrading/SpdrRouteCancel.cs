// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: Protobuf/ClientTrading/SpdrRouteCancel.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021, 8981
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Spiderrock.Protobuf {

  /// <summary>Holder for reflection information generated from Protobuf/ClientTrading/SpdrRouteCancel.proto</summary>
  public static partial class SpdrRouteCancelReflection {

    #region Descriptor
    /// <summary>File descriptor for Protobuf/ClientTrading/SpdrRouteCancel.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static SpdrRouteCancelReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "CixQcm90b2J1Zi9DbGllbnRUcmFkaW5nL1NwZHJSb3V0ZUNhbmNlbC5wcm90",
            "bxITc3BpZGVycm9jay5wcm90b2J1ZhoXc3BpZGVycm9ja19jb21tb24ucHJv",
            "dG8aH2dvb2dsZS9wcm90b2J1Zi90aW1lc3RhbXAucHJvdG8izQMKD1NwZHJS",
            "b3V0ZUNhbmNlbBIzCgVfbWV0YRgBIAEoCzIkLnNwaWRlcnJvY2sucHJvdG9i",
            "dWYuTWVzc2FnZU1ldGFkYXRhEjcKBHBrZXkYAiABKAsyKS5zcGlkZXJyb2Nr",
            "LnByb3RvYnVmLlNwZHJSb3V0ZUNhbmNlbC5QS2V5EjwKD3N5c19lbnZpcm9u",
            "bWVudBhkIAEoDjIjLnNwaWRlcnJvY2sucHJvdG9idWYuU3lzRW52aXJvbm1l",
            "bnQSMgoKcnVuX3N0YXR1cxhnIAEoDjIeLnNwaWRlcnJvY2sucHJvdG9idWYu",
            "UnVuU3RhdHVzEhIKCmN4bF9yZWFzb24YaiABKAkSFQoNYWx0X2NhbmNlbF9p",
            "ZBhtIAEoCRITCgtlbmdpbmVfbmFtZRh6IAEoCRITCgttb2RpZmllZF9ieRhz",
            "IAEoCRI4Cgttb2RpZmllZF9pbhh2IAEoDjIjLnNwaWRlcnJvY2sucHJvdG9i",
            "dWYuU3lzRW52aXJvbm1lbnQSLQoJdGltZXN0YW1wGHkgASgLMhouZ29vZ2xl",
            "LnByb3RvYnVmLlRpbWVzdGFtcBocCgRQS2V5EhQKDHJvdXRpbmdfY29kZRgK",
            "IAEoCWIGcHJvdG8z"));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Spiderrock.Protobuf.SpiderrockCommonReflection.Descriptor, global::Google.Protobuf.WellKnownTypes.TimestampReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Spiderrock.Protobuf.SpdrRouteCancel), global::Spiderrock.Protobuf.SpdrRouteCancel.Parser, new[]{ "Meta", "Pkey", "SysEnvironment", "RunStatus", "CxlReason", "AltCancelId", "EngineName", "ModifiedBy", "ModifiedIn", "Timestamp" }, null, null, null, new pbr::GeneratedClrTypeInfo[] { new pbr::GeneratedClrTypeInfo(typeof(global::Spiderrock.Protobuf.SpdrRouteCancel.Types.PKey), global::Spiderrock.Protobuf.SpdrRouteCancel.Types.PKey.Parser, new[]{ "RoutingCode" }, null, null, null, null)})
          }));
    }
    #endregion

  }
  #region Messages
  /// <summary>
  ///
  ///Records inserted into this table will result in the cancellation of all active/cancelable orders for the indicated SpiderRock routing code
  /// </summary>
  public sealed partial class SpdrRouteCancel : pb::IMessage<SpdrRouteCancel>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<SpdrRouteCancel> _parser = new pb::MessageParser<SpdrRouteCancel>(() => new SpdrRouteCancel());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pb::MessageParser<SpdrRouteCancel> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Spiderrock.Protobuf.SpdrRouteCancelReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public SpdrRouteCancel() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public SpdrRouteCancel(SpdrRouteCancel other) : this() {
      Meta_ = other.Meta_ != null ? other.Meta_.Clone() : null;
      pkey_ = other.pkey_ != null ? other.pkey_.Clone() : null;
      sysEnvironment_ = other.sysEnvironment_;
      runStatus_ = other.runStatus_;
      cxlReason_ = other.cxlReason_;
      altCancelId_ = other.altCancelId_;
      engineName_ = other.engineName_;
      modifiedBy_ = other.modifiedBy_;
      modifiedIn_ = other.modifiedIn_;
      timestamp_ = other.timestamp_ != null ? other.timestamp_.Clone() : null;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public SpdrRouteCancel Clone() {
      return new SpdrRouteCancel(this);
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
    private global::Spiderrock.Protobuf.SpdrRouteCancel.Types.PKey pkey_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Spiderrock.Protobuf.SpdrRouteCancel.Types.PKey Pkey {
      get { return pkey_; }
      set {
        pkey_ = value;
      }
    }

    /// <summary>Field number for the "sys_environment" field.</summary>
    public const int SysEnvironmentFieldNumber = 100;
    private global::Spiderrock.Protobuf.SysEnvironment sysEnvironment_ = global::Spiderrock.Protobuf.SysEnvironment.Unspecified;
    /// <summary>
    /// original (source) sys environment [Stable, Current, etc]
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Spiderrock.Protobuf.SysEnvironment SysEnvironment {
      get { return sysEnvironment_; }
      set {
        sysEnvironment_ = value;
      }
    }

    /// <summary>Field number for the "run_status" field.</summary>
    public const int RunStatusFieldNumber = 103;
    private global::Spiderrock.Protobuf.RunStatus runStatus_ = global::Spiderrock.Protobuf.RunStatus.Unspecified;
    /// <summary>
    /// original (source) run status [Prod,Beta]
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Spiderrock.Protobuf.RunStatus RunStatus {
      get { return runStatus_; }
      set {
        runStatus_ = value;
      }
    }

    /// <summary>Field number for the "cxl_reason" field.</summary>
    public const int CxlReasonFieldNumber = 106;
    private string cxlReason_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public string CxlReason {
      get { return cxlReason_; }
      set {
        cxlReason_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "alt_cancel_id" field.</summary>
    public const int AltCancelIdFieldNumber = 109;
    private string altCancelId_ = "";
    /// <summary>
    /// usually client FIX clOrdId of the inbound OrderCancel request
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public string AltCancelId {
      get { return altCancelId_; }
      set {
        altCancelId_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "engine_name" field.</summary>
    public const int EngineNameFieldNumber = 122;
    private string engineName_ = "";
    /// <summary>
    /// set by the engine handling event (should be blank on arrival)
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public string EngineName {
      get { return engineName_; }
      set {
        engineName_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "modified_by" field.</summary>
    public const int ModifiedByFieldNumber = 115;
    private string modifiedBy_ = "";
    /// <summary>
    /// user who last modified this record
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public string ModifiedBy {
      get { return modifiedBy_; }
      set {
        modifiedBy_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "modified_in" field.</summary>
    public const int ModifiedInFieldNumber = 118;
    private global::Spiderrock.Protobuf.SysEnvironment modifiedIn_ = global::Spiderrock.Protobuf.SysEnvironment.Unspecified;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Spiderrock.Protobuf.SysEnvironment ModifiedIn {
      get { return modifiedIn_; }
      set {
        modifiedIn_ = value;
      }
    }

    /// <summary>Field number for the "timestamp" field.</summary>
    public const int TimestampFieldNumber = 121;
    private global::Google.Protobuf.WellKnownTypes.Timestamp timestamp_;
    /// <summary>
    /// timestamp of last modification
    /// </summary>
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
      return Equals(other as SpdrRouteCancel);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public bool Equals(SpdrRouteCancel other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (!object.Equals(Meta, other.Meta)) return false;
      if (!object.Equals(Pkey, other.Pkey)) return false;
      if (SysEnvironment != other.SysEnvironment) return false;
      if (RunStatus != other.RunStatus) return false;
      if (CxlReason != other.CxlReason) return false;
      if (AltCancelId != other.AltCancelId) return false;
      if (EngineName != other.EngineName) return false;
      if (ModifiedBy != other.ModifiedBy) return false;
      if (ModifiedIn != other.ModifiedIn) return false;
      if (!object.Equals(Timestamp, other.Timestamp)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override int GetHashCode() {
      int hash = 1;
      if (Meta_ != null) hash ^= Meta.GetHashCode();
      if (pkey_ != null) hash ^= Pkey.GetHashCode();
      if (SysEnvironment != global::Spiderrock.Protobuf.SysEnvironment.Unspecified) hash ^= SysEnvironment.GetHashCode();
      if (RunStatus != global::Spiderrock.Protobuf.RunStatus.Unspecified) hash ^= RunStatus.GetHashCode();
      if (CxlReason.Length != 0) hash ^= CxlReason.GetHashCode();
      if (AltCancelId.Length != 0) hash ^= AltCancelId.GetHashCode();
      if (EngineName.Length != 0) hash ^= EngineName.GetHashCode();
      if (ModifiedBy.Length != 0) hash ^= ModifiedBy.GetHashCode();
      if (ModifiedIn != global::Spiderrock.Protobuf.SysEnvironment.Unspecified) hash ^= ModifiedIn.GetHashCode();
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
      if (SysEnvironment != global::Spiderrock.Protobuf.SysEnvironment.Unspecified) {
        output.WriteRawTag(160, 6);
        output.WriteEnum((int) SysEnvironment);
      }
      if (RunStatus != global::Spiderrock.Protobuf.RunStatus.Unspecified) {
        output.WriteRawTag(184, 6);
        output.WriteEnum((int) RunStatus);
      }
      if (CxlReason.Length != 0) {
        output.WriteRawTag(210, 6);
        output.WriteString(CxlReason);
      }
      if (AltCancelId.Length != 0) {
        output.WriteRawTag(234, 6);
        output.WriteString(AltCancelId);
      }
      if (ModifiedBy.Length != 0) {
        output.WriteRawTag(154, 7);
        output.WriteString(ModifiedBy);
      }
      if (ModifiedIn != global::Spiderrock.Protobuf.SysEnvironment.Unspecified) {
        output.WriteRawTag(176, 7);
        output.WriteEnum((int) ModifiedIn);
      }
      if (timestamp_ != null) {
        output.WriteRawTag(202, 7);
        output.WriteMessage(Timestamp);
      }
      if (EngineName.Length != 0) {
        output.WriteRawTag(210, 7);
        output.WriteString(EngineName);
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
      if (SysEnvironment != global::Spiderrock.Protobuf.SysEnvironment.Unspecified) {
        output.WriteRawTag(160, 6);
        output.WriteEnum((int) SysEnvironment);
      }
      if (RunStatus != global::Spiderrock.Protobuf.RunStatus.Unspecified) {
        output.WriteRawTag(184, 6);
        output.WriteEnum((int) RunStatus);
      }
      if (CxlReason.Length != 0) {
        output.WriteRawTag(210, 6);
        output.WriteString(CxlReason);
      }
      if (AltCancelId.Length != 0) {
        output.WriteRawTag(234, 6);
        output.WriteString(AltCancelId);
      }
      if (ModifiedBy.Length != 0) {
        output.WriteRawTag(154, 7);
        output.WriteString(ModifiedBy);
      }
      if (ModifiedIn != global::Spiderrock.Protobuf.SysEnvironment.Unspecified) {
        output.WriteRawTag(176, 7);
        output.WriteEnum((int) ModifiedIn);
      }
      if (timestamp_ != null) {
        output.WriteRawTag(202, 7);
        output.WriteMessage(Timestamp);
      }
      if (EngineName.Length != 0) {
        output.WriteRawTag(210, 7);
        output.WriteString(EngineName);
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
      if (SysEnvironment != global::Spiderrock.Protobuf.SysEnvironment.Unspecified) {
        size += 2 + pb::CodedOutputStream.ComputeEnumSize((int) SysEnvironment);
      }
      if (RunStatus != global::Spiderrock.Protobuf.RunStatus.Unspecified) {
        size += 2 + pb::CodedOutputStream.ComputeEnumSize((int) RunStatus);
      }
      if (CxlReason.Length != 0) {
        size += 2 + pb::CodedOutputStream.ComputeStringSize(CxlReason);
      }
      if (AltCancelId.Length != 0) {
        size += 2 + pb::CodedOutputStream.ComputeStringSize(AltCancelId);
      }
      if (EngineName.Length != 0) {
        size += 2 + pb::CodedOutputStream.ComputeStringSize(EngineName);
      }
      if (ModifiedBy.Length != 0) {
        size += 2 + pb::CodedOutputStream.ComputeStringSize(ModifiedBy);
      }
      if (ModifiedIn != global::Spiderrock.Protobuf.SysEnvironment.Unspecified) {
        size += 2 + pb::CodedOutputStream.ComputeEnumSize((int) ModifiedIn);
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
    public void MergeFrom(SpdrRouteCancel other) {
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
          Pkey = new global::Spiderrock.Protobuf.SpdrRouteCancel.Types.PKey();
        }
        Pkey.MergeFrom(other.Pkey);
      }
      if (other.SysEnvironment != global::Spiderrock.Protobuf.SysEnvironment.Unspecified) {
        SysEnvironment = other.SysEnvironment;
      }
      if (other.RunStatus != global::Spiderrock.Protobuf.RunStatus.Unspecified) {
        RunStatus = other.RunStatus;
      }
      if (other.CxlReason.Length != 0) {
        CxlReason = other.CxlReason;
      }
      if (other.AltCancelId.Length != 0) {
        AltCancelId = other.AltCancelId;
      }
      if (other.EngineName.Length != 0) {
        EngineName = other.EngineName;
      }
      if (other.ModifiedBy.Length != 0) {
        ModifiedBy = other.ModifiedBy;
      }
      if (other.ModifiedIn != global::Spiderrock.Protobuf.SysEnvironment.Unspecified) {
        ModifiedIn = other.ModifiedIn;
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
              Pkey = new global::Spiderrock.Protobuf.SpdrRouteCancel.Types.PKey();
            }
            input.ReadMessage(Pkey);
            break;
          }
          case 800: {
            SysEnvironment = (global::Spiderrock.Protobuf.SysEnvironment) input.ReadEnum();
            break;
          }
          case 824: {
            RunStatus = (global::Spiderrock.Protobuf.RunStatus) input.ReadEnum();
            break;
          }
          case 850: {
            CxlReason = input.ReadString();
            break;
          }
          case 874: {
            AltCancelId = input.ReadString();
            break;
          }
          case 922: {
            ModifiedBy = input.ReadString();
            break;
          }
          case 944: {
            ModifiedIn = (global::Spiderrock.Protobuf.SysEnvironment) input.ReadEnum();
            break;
          }
          case 970: {
            if (timestamp_ == null) {
              Timestamp = new global::Google.Protobuf.WellKnownTypes.Timestamp();
            }
            input.ReadMessage(Timestamp);
            break;
          }
          case 978: {
            EngineName = input.ReadString();
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
              Pkey = new global::Spiderrock.Protobuf.SpdrRouteCancel.Types.PKey();
            }
            input.ReadMessage(Pkey);
            break;
          }
          case 800: {
            SysEnvironment = (global::Spiderrock.Protobuf.SysEnvironment) input.ReadEnum();
            break;
          }
          case 824: {
            RunStatus = (global::Spiderrock.Protobuf.RunStatus) input.ReadEnum();
            break;
          }
          case 850: {
            CxlReason = input.ReadString();
            break;
          }
          case 874: {
            AltCancelId = input.ReadString();
            break;
          }
          case 922: {
            ModifiedBy = input.ReadString();
            break;
          }
          case 944: {
            ModifiedIn = (global::Spiderrock.Protobuf.SysEnvironment) input.ReadEnum();
            break;
          }
          case 970: {
            if (timestamp_ == null) {
              Timestamp = new global::Google.Protobuf.WellKnownTypes.Timestamp();
            }
            input.ReadMessage(Timestamp);
            break;
          }
          case 978: {
            EngineName = input.ReadString();
            break;
          }
        }
      }
    }
    #endif

    #region Nested types
    /// <summary>Container for nested types declared in the SpdrRouteCancel message type.</summary>
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
          get { return global::Spiderrock.Protobuf.SpdrRouteCancel.Descriptor.NestedTypes[0]; }
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
          routingCode_ = other.routingCode_;
          _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public PKey Clone() {
          return new PKey(this);
        }

        /// <summary>Field number for the "routing_code" field.</summary>
        public const int RoutingCodeFieldNumber = 10;
        private string routingCode_ = "";
        /// <summary>
        /// SR routing code
        /// </summary>
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public string RoutingCode {
          get { return routingCode_; }
          set {
            routingCode_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
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
          if (RoutingCode != other.RoutingCode) return false;
          return Equals(_unknownFields, other._unknownFields);
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public override int GetHashCode() {
          int hash = 1;
          if (RoutingCode.Length != 0) hash ^= RoutingCode.GetHashCode();
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
          if (RoutingCode.Length != 0) {
            output.WriteRawTag(82);
            output.WriteString(RoutingCode);
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
          if (RoutingCode.Length != 0) {
            output.WriteRawTag(82);
            output.WriteString(RoutingCode);
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
          if (RoutingCode.Length != 0) {
            size += 1 + pb::CodedOutputStream.ComputeStringSize(RoutingCode);
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
          if (other.RoutingCode.Length != 0) {
            RoutingCode = other.RoutingCode;
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
                RoutingCode = input.ReadString();
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
                RoutingCode = input.ReadString();
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
