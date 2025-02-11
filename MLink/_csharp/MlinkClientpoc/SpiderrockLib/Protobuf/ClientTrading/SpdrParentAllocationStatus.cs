// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: Protobuf/ClientTrading/SpdrParentAllocationStatus.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021, 8981
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Spiderrock.Protobuf {

  /// <summary>Holder for reflection information generated from Protobuf/ClientTrading/SpdrParentAllocationStatus.proto</summary>
  public static partial class SpdrParentAllocationStatusReflection {

    #region Descriptor
    /// <summary>File descriptor for Protobuf/ClientTrading/SpdrParentAllocationStatus.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static SpdrParentAllocationStatusReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "CjdQcm90b2J1Zi9DbGllbnRUcmFkaW5nL1NwZHJQYXJlbnRBbGxvY2F0aW9u",
            "U3RhdHVzLnByb3RvEhNzcGlkZXJyb2NrLnByb3RvYnVmGhdzcGlkZXJyb2Nr",
            "X2NvbW1vbi5wcm90bxofZ29vZ2xlL3Byb3RvYnVmL3RpbWVzdGFtcC5wcm90",
            "byLqAwoaU3BkclBhcmVudEFsbG9jYXRpb25TdGF0dXMSMwoFX21ldGEYASAB",
            "KAsyJC5zcGlkZXJyb2NrLnByb3RvYnVmLk1lc3NhZ2VNZXRhZGF0YRJCCgRw",
            "a2V5GAIgASgLMjQuc3BpZGVycm9jay5wcm90b2J1Zi5TcGRyUGFyZW50QWxs",
            "b2NhdGlvblN0YXR1cy5QS2V5Ei8KB3NlY19rZXkYZCABKAsyHi5zcGlkZXJy",
            "b2NrLnByb3RvYnVmLk9wdGlvbktleRIyCghzZWNfdHlwZRhnIAEoDjIgLnNw",
            "aWRlcnJvY2sucHJvdG9idWYuU3BkcktleVR5cGUSNgoMYWxsb2Nfc3RhdHVz",
            "GGogASgOMiAuc3BpZGVycm9jay5wcm90b2J1Zi5BbGxvY1N0YXR1cxIUCgxh",
            "bGxvY19kZXRhaWwYbSABKAkSEwoLbW9kaWZpZWRfYnkYcCABKAkSOAoLbW9k",
            "aWZpZWRfaW4YcyABKA4yIy5zcGlkZXJyb2NrLnByb3RvYnVmLlN5c0Vudmly",
            "b25tZW50Ei0KCXRpbWVzdGFtcBh2IAEoCzIaLmdvb2dsZS5wcm90b2J1Zi5U",
            "aW1lc3RhbXAaIgoEUEtleRIaChJiYXNlX3BhcmVudF9udW1iZXIYCiABKANi",
            "BnByb3RvMw=="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Spiderrock.Protobuf.SpiderrockCommonReflection.Descriptor, global::Google.Protobuf.WellKnownTypes.TimestampReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Spiderrock.Protobuf.SpdrParentAllocationStatus), global::Spiderrock.Protobuf.SpdrParentAllocationStatus.Parser, new[]{ "Meta", "Pkey", "SecKey", "SecType", "AllocStatus", "AllocDetail", "ModifiedBy", "ModifiedIn", "Timestamp" }, null, null, null, new pbr::GeneratedClrTypeInfo[] { new pbr::GeneratedClrTypeInfo(typeof(global::Spiderrock.Protobuf.SpdrParentAllocationStatus.Types.PKey), global::Spiderrock.Protobuf.SpdrParentAllocationStatus.Types.PKey.Parser, new[]{ "BaseParentNumber" }, null, null, null, null)})
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class SpdrParentAllocationStatus : pb::IMessage<SpdrParentAllocationStatus>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<SpdrParentAllocationStatus> _parser = new pb::MessageParser<SpdrParentAllocationStatus>(() => new SpdrParentAllocationStatus());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pb::MessageParser<SpdrParentAllocationStatus> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Spiderrock.Protobuf.SpdrParentAllocationStatusReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public SpdrParentAllocationStatus() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public SpdrParentAllocationStatus(SpdrParentAllocationStatus other) : this() {
      Meta_ = other.Meta_ != null ? other.Meta_.Clone() : null;
      pkey_ = other.pkey_ != null ? other.pkey_.Clone() : null;
      secKey_ = other.secKey_ != null ? other.secKey_.Clone() : null;
      secType_ = other.secType_;
      allocStatus_ = other.allocStatus_;
      allocDetail_ = other.allocDetail_;
      modifiedBy_ = other.modifiedBy_;
      modifiedIn_ = other.modifiedIn_;
      timestamp_ = other.timestamp_ != null ? other.timestamp_.Clone() : null;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public SpdrParentAllocationStatus Clone() {
      return new SpdrParentAllocationStatus(this);
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
    private global::Spiderrock.Protobuf.SpdrParentAllocationStatus.Types.PKey pkey_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Spiderrock.Protobuf.SpdrParentAllocationStatus.Types.PKey Pkey {
      get { return pkey_; }
      set {
        pkey_ = value;
      }
    }

    /// <summary>Field number for the "sec_key" field.</summary>
    public const int SecKeyFieldNumber = 100;
    private global::Spiderrock.Protobuf.OptionKey secKey_;
    /// <summary>
    /// security key (stock, future, or option)
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Spiderrock.Protobuf.OptionKey SecKey {
      get { return secKey_; }
      set {
        secKey_ = value;
      }
    }

    /// <summary>Field number for the "sec_type" field.</summary>
    public const int SecTypeFieldNumber = 103;
    private global::Spiderrock.Protobuf.SpdrKeyType secType_ = global::Spiderrock.Protobuf.SpdrKeyType.Unspecified;
    /// <summary>
    /// security type
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Spiderrock.Protobuf.SpdrKeyType SecType {
      get { return secType_; }
      set {
        secType_ = value;
      }
    }

    /// <summary>Field number for the "alloc_status" field.</summary>
    public const int AllocStatusFieldNumber = 106;
    private global::Spiderrock.Protobuf.AllocStatus allocStatus_ = global::Spiderrock.Protobuf.AllocStatus.Unspecified;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Spiderrock.Protobuf.AllocStatus AllocStatus {
      get { return allocStatus_; }
      set {
        allocStatus_ = value;
      }
    }

    /// <summary>Field number for the "alloc_detail" field.</summary>
    public const int AllocDetailFieldNumber = 109;
    private string allocDetail_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public string AllocDetail {
      get { return allocDetail_; }
      set {
        allocDetail_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "modified_by" field.</summary>
    public const int ModifiedByFieldNumber = 112;
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
    public const int ModifiedInFieldNumber = 115;
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
    public const int TimestampFieldNumber = 118;
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
      return Equals(other as SpdrParentAllocationStatus);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public bool Equals(SpdrParentAllocationStatus other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (!object.Equals(Meta, other.Meta)) return false;
      if (!object.Equals(Pkey, other.Pkey)) return false;
      if (!object.Equals(SecKey, other.SecKey)) return false;
      if (SecType != other.SecType) return false;
      if (AllocStatus != other.AllocStatus) return false;
      if (AllocDetail != other.AllocDetail) return false;
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
      if (secKey_ != null) hash ^= SecKey.GetHashCode();
      if (SecType != global::Spiderrock.Protobuf.SpdrKeyType.Unspecified) hash ^= SecType.GetHashCode();
      if (AllocStatus != global::Spiderrock.Protobuf.AllocStatus.Unspecified) hash ^= AllocStatus.GetHashCode();
      if (AllocDetail.Length != 0) hash ^= AllocDetail.GetHashCode();
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
      if (secKey_ != null) {
        output.WriteRawTag(162, 6);
        output.WriteMessage(SecKey);
      }
      if (SecType != global::Spiderrock.Protobuf.SpdrKeyType.Unspecified) {
        output.WriteRawTag(184, 6);
        output.WriteEnum((int) SecType);
      }
      if (AllocStatus != global::Spiderrock.Protobuf.AllocStatus.Unspecified) {
        output.WriteRawTag(208, 6);
        output.WriteEnum((int) AllocStatus);
      }
      if (AllocDetail.Length != 0) {
        output.WriteRawTag(234, 6);
        output.WriteString(AllocDetail);
      }
      if (ModifiedBy.Length != 0) {
        output.WriteRawTag(130, 7);
        output.WriteString(ModifiedBy);
      }
      if (ModifiedIn != global::Spiderrock.Protobuf.SysEnvironment.Unspecified) {
        output.WriteRawTag(152, 7);
        output.WriteEnum((int) ModifiedIn);
      }
      if (timestamp_ != null) {
        output.WriteRawTag(178, 7);
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
      if (secKey_ != null) {
        output.WriteRawTag(162, 6);
        output.WriteMessage(SecKey);
      }
      if (SecType != global::Spiderrock.Protobuf.SpdrKeyType.Unspecified) {
        output.WriteRawTag(184, 6);
        output.WriteEnum((int) SecType);
      }
      if (AllocStatus != global::Spiderrock.Protobuf.AllocStatus.Unspecified) {
        output.WriteRawTag(208, 6);
        output.WriteEnum((int) AllocStatus);
      }
      if (AllocDetail.Length != 0) {
        output.WriteRawTag(234, 6);
        output.WriteString(AllocDetail);
      }
      if (ModifiedBy.Length != 0) {
        output.WriteRawTag(130, 7);
        output.WriteString(ModifiedBy);
      }
      if (ModifiedIn != global::Spiderrock.Protobuf.SysEnvironment.Unspecified) {
        output.WriteRawTag(152, 7);
        output.WriteEnum((int) ModifiedIn);
      }
      if (timestamp_ != null) {
        output.WriteRawTag(178, 7);
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
      if (secKey_ != null) {
        size += 2 + pb::CodedOutputStream.ComputeMessageSize(SecKey);
      }
      if (SecType != global::Spiderrock.Protobuf.SpdrKeyType.Unspecified) {
        size += 2 + pb::CodedOutputStream.ComputeEnumSize((int) SecType);
      }
      if (AllocStatus != global::Spiderrock.Protobuf.AllocStatus.Unspecified) {
        size += 2 + pb::CodedOutputStream.ComputeEnumSize((int) AllocStatus);
      }
      if (AllocDetail.Length != 0) {
        size += 2 + pb::CodedOutputStream.ComputeStringSize(AllocDetail);
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
    public void MergeFrom(SpdrParentAllocationStatus other) {
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
          Pkey = new global::Spiderrock.Protobuf.SpdrParentAllocationStatus.Types.PKey();
        }
        Pkey.MergeFrom(other.Pkey);
      }
      if (other.secKey_ != null) {
        if (secKey_ == null) {
          SecKey = new global::Spiderrock.Protobuf.OptionKey();
        }
        SecKey.MergeFrom(other.SecKey);
      }
      if (other.SecType != global::Spiderrock.Protobuf.SpdrKeyType.Unspecified) {
        SecType = other.SecType;
      }
      if (other.AllocStatus != global::Spiderrock.Protobuf.AllocStatus.Unspecified) {
        AllocStatus = other.AllocStatus;
      }
      if (other.AllocDetail.Length != 0) {
        AllocDetail = other.AllocDetail;
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
              Pkey = new global::Spiderrock.Protobuf.SpdrParentAllocationStatus.Types.PKey();
            }
            input.ReadMessage(Pkey);
            break;
          }
          case 802: {
            if (secKey_ == null) {
              SecKey = new global::Spiderrock.Protobuf.OptionKey();
            }
            input.ReadMessage(SecKey);
            break;
          }
          case 824: {
            SecType = (global::Spiderrock.Protobuf.SpdrKeyType) input.ReadEnum();
            break;
          }
          case 848: {
            AllocStatus = (global::Spiderrock.Protobuf.AllocStatus) input.ReadEnum();
            break;
          }
          case 874: {
            AllocDetail = input.ReadString();
            break;
          }
          case 898: {
            ModifiedBy = input.ReadString();
            break;
          }
          case 920: {
            ModifiedIn = (global::Spiderrock.Protobuf.SysEnvironment) input.ReadEnum();
            break;
          }
          case 946: {
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
              Pkey = new global::Spiderrock.Protobuf.SpdrParentAllocationStatus.Types.PKey();
            }
            input.ReadMessage(Pkey);
            break;
          }
          case 802: {
            if (secKey_ == null) {
              SecKey = new global::Spiderrock.Protobuf.OptionKey();
            }
            input.ReadMessage(SecKey);
            break;
          }
          case 824: {
            SecType = (global::Spiderrock.Protobuf.SpdrKeyType) input.ReadEnum();
            break;
          }
          case 848: {
            AllocStatus = (global::Spiderrock.Protobuf.AllocStatus) input.ReadEnum();
            break;
          }
          case 874: {
            AllocDetail = input.ReadString();
            break;
          }
          case 898: {
            ModifiedBy = input.ReadString();
            break;
          }
          case 920: {
            ModifiedIn = (global::Spiderrock.Protobuf.SysEnvironment) input.ReadEnum();
            break;
          }
          case 946: {
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
    /// <summary>Container for nested types declared in the SpdrParentAllocationStatus message type.</summary>
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
          get { return global::Spiderrock.Protobuf.SpdrParentAllocationStatus.Descriptor.NestedTypes[0]; }
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
          baseParentNumber_ = other.baseParentNumber_;
          _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public PKey Clone() {
          return new PKey(this);
        }

        /// <summary>Field number for the "base_parent_number" field.</summary>
        public const int BaseParentNumberFieldNumber = 10;
        private long baseParentNumber_;
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public long BaseParentNumber {
          get { return baseParentNumber_; }
          set {
            baseParentNumber_ = value;
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
          if (BaseParentNumber != other.BaseParentNumber) return false;
          return Equals(_unknownFields, other._unknownFields);
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public override int GetHashCode() {
          int hash = 1;
          if (BaseParentNumber != 0L) hash ^= BaseParentNumber.GetHashCode();
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
          if (BaseParentNumber != 0L) {
            output.WriteRawTag(80);
            output.WriteInt64(BaseParentNumber);
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
          if (BaseParentNumber != 0L) {
            output.WriteRawTag(80);
            output.WriteInt64(BaseParentNumber);
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
          if (BaseParentNumber != 0L) {
            size += 1 + pb::CodedOutputStream.ComputeInt64Size(BaseParentNumber);
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
          if (other.BaseParentNumber != 0L) {
            BaseParentNumber = other.BaseParentNumber;
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
              case 80: {
                BaseParentNumber = input.ReadInt64();
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
              case 80: {
                BaseParentNumber = input.ReadInt64();
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
