// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: Protobuf/ClientRisk/ClientBeta.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021, 8981
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Spiderrock.Protobuf {

  /// <summary>Holder for reflection information generated from Protobuf/ClientRisk/ClientBeta.proto</summary>
  public static partial class ClientBetaReflection {

    #region Descriptor
    /// <summary>File descriptor for Protobuf/ClientRisk/ClientBeta.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static ClientBetaReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "CiRQcm90b2J1Zi9DbGllbnRSaXNrL0NsaWVudEJldGEucHJvdG8SE3NwaWRl",
            "cnJvY2sucHJvdG9idWYaF3NwaWRlcnJvY2tfY29tbW9uLnByb3RvGh9nb29n",
            "bGUvcHJvdG9idWYvdGltZXN0YW1wLnByb3RvIoQDCgpDbGllbnRCZXRhEjMK",
            "BV9tZXRhGAEgASgLMiQuc3BpZGVycm9jay5wcm90b2J1Zi5NZXNzYWdlTWV0",
            "YWRhdGESMgoEcGtleRgCIAEoCzIkLnNwaWRlcnJvY2sucHJvdG9idWYuQ2xp",
            "ZW50QmV0YS5QS2V5EgwKBGJldGEYZCABKAISEwoLbW9kaWZpZWRfYnkYZyAB",
            "KAkSOAoLbW9kaWZpZWRfaW4YaiABKA4yIy5zcGlkZXJyb2NrLnByb3RvYnVm",
            "LlN5c0Vudmlyb25tZW50Ei0KCXRpbWVzdGFtcBhtIAEoCzIaLmdvb2dsZS5w",
            "cm90b2J1Zi5UaW1lc3RhbXAagAEKBFBLZXkSLwoHc2VjX2tleRgKIAEoCzIe",
            "LnNwaWRlcnJvY2sucHJvdG9idWYuRXhwaXJ5S2V5EjIKCHNlY190eXBlGAsg",
            "ASgOMiAuc3BpZGVycm9jay5wcm90b2J1Zi5TcGRyS2V5VHlwZRITCgtjbGll",
            "bnRfZmlybRgMIAEoCWIGcHJvdG8z"));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Spiderrock.Protobuf.SpiderrockCommonReflection.Descriptor, global::Google.Protobuf.WellKnownTypes.TimestampReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Spiderrock.Protobuf.ClientBeta), global::Spiderrock.Protobuf.ClientBeta.Parser, new[]{ "Meta", "Pkey", "Beta", "ModifiedBy", "ModifiedIn", "Timestamp" }, null, null, null, new pbr::GeneratedClrTypeInfo[] { new pbr::GeneratedClrTypeInfo(typeof(global::Spiderrock.Protobuf.ClientBeta.Types.PKey), global::Spiderrock.Protobuf.ClientBeta.Types.PKey.Parser, new[]{ "SecKey", "SecType", "ClientFirm" }, null, null, null, null)})
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class ClientBeta : pb::IMessage<ClientBeta>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<ClientBeta> _parser = new pb::MessageParser<ClientBeta>(() => new ClientBeta());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pb::MessageParser<ClientBeta> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Spiderrock.Protobuf.ClientBetaReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public ClientBeta() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public ClientBeta(ClientBeta other) : this() {
      Meta_ = other.Meta_ != null ? other.Meta_.Clone() : null;
      pkey_ = other.pkey_ != null ? other.pkey_.Clone() : null;
      beta_ = other.beta_;
      modifiedBy_ = other.modifiedBy_;
      modifiedIn_ = other.modifiedIn_;
      timestamp_ = other.timestamp_ != null ? other.timestamp_.Clone() : null;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public ClientBeta Clone() {
      return new ClientBeta(this);
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
    private global::Spiderrock.Protobuf.ClientBeta.Types.PKey pkey_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Spiderrock.Protobuf.ClientBeta.Types.PKey Pkey {
      get { return pkey_; }
      set {
        pkey_ = value;
      }
    }

    /// <summary>Field number for the "beta" field.</summary>
    public const int BetaFieldNumber = 100;
    private float beta_;
    /// <summary>
    /// client supplied beta (expected move of secKey relative to reference)
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public float Beta {
      get { return beta_; }
      set {
        beta_ = value;
      }
    }

    /// <summary>Field number for the "modified_by" field.</summary>
    public const int ModifiedByFieldNumber = 103;
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
    public const int ModifiedInFieldNumber = 106;
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
    public const int TimestampFieldNumber = 109;
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
      return Equals(other as ClientBeta);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public bool Equals(ClientBeta other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (!object.Equals(Meta, other.Meta)) return false;
      if (!object.Equals(Pkey, other.Pkey)) return false;
      if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(Beta, other.Beta)) return false;
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
      if (Beta != 0F) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(Beta);
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
      if (Beta != 0F) {
        output.WriteRawTag(165, 6);
        output.WriteFloat(Beta);
      }
      if (ModifiedBy.Length != 0) {
        output.WriteRawTag(186, 6);
        output.WriteString(ModifiedBy);
      }
      if (ModifiedIn != global::Spiderrock.Protobuf.SysEnvironment.Unspecified) {
        output.WriteRawTag(208, 6);
        output.WriteEnum((int) ModifiedIn);
      }
      if (timestamp_ != null) {
        output.WriteRawTag(234, 6);
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
      if (Beta != 0F) {
        output.WriteRawTag(165, 6);
        output.WriteFloat(Beta);
      }
      if (ModifiedBy.Length != 0) {
        output.WriteRawTag(186, 6);
        output.WriteString(ModifiedBy);
      }
      if (ModifiedIn != global::Spiderrock.Protobuf.SysEnvironment.Unspecified) {
        output.WriteRawTag(208, 6);
        output.WriteEnum((int) ModifiedIn);
      }
      if (timestamp_ != null) {
        output.WriteRawTag(234, 6);
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
      if (Beta != 0F) {
        size += 2 + 4;
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
    public void MergeFrom(ClientBeta other) {
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
          Pkey = new global::Spiderrock.Protobuf.ClientBeta.Types.PKey();
        }
        Pkey.MergeFrom(other.Pkey);
      }
      if (other.Beta != 0F) {
        Beta = other.Beta;
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
              Pkey = new global::Spiderrock.Protobuf.ClientBeta.Types.PKey();
            }
            input.ReadMessage(Pkey);
            break;
          }
          case 805: {
            Beta = input.ReadFloat();
            break;
          }
          case 826: {
            ModifiedBy = input.ReadString();
            break;
          }
          case 848: {
            ModifiedIn = (global::Spiderrock.Protobuf.SysEnvironment) input.ReadEnum();
            break;
          }
          case 874: {
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
              Pkey = new global::Spiderrock.Protobuf.ClientBeta.Types.PKey();
            }
            input.ReadMessage(Pkey);
            break;
          }
          case 805: {
            Beta = input.ReadFloat();
            break;
          }
          case 826: {
            ModifiedBy = input.ReadString();
            break;
          }
          case 848: {
            ModifiedIn = (global::Spiderrock.Protobuf.SysEnvironment) input.ReadEnum();
            break;
          }
          case 874: {
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
    /// <summary>Container for nested types declared in the ClientBeta message type.</summary>
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
          get { return global::Spiderrock.Protobuf.ClientBeta.Descriptor.NestedTypes[0]; }
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
          secKey_ = other.secKey_ != null ? other.secKey_.Clone() : null;
          secType_ = other.secType_;
          clientFirm_ = other.clientFirm_;
          _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public PKey Clone() {
          return new PKey(this);
        }

        /// <summary>Field number for the "sec_key" field.</summary>
        public const int SecKeyFieldNumber = 10;
        private global::Spiderrock.Protobuf.ExpiryKey secKey_;
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public global::Spiderrock.Protobuf.ExpiryKey SecKey {
          get { return secKey_; }
          set {
            secKey_ = value;
          }
        }

        /// <summary>Field number for the "sec_type" field.</summary>
        public const int SecTypeFieldNumber = 11;
        private global::Spiderrock.Protobuf.SpdrKeyType secType_ = global::Spiderrock.Protobuf.SpdrKeyType.Unspecified;
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public global::Spiderrock.Protobuf.SpdrKeyType SecType {
          get { return secType_; }
          set {
            secType_ = value;
          }
        }

        /// <summary>Field number for the "client_firm" field.</summary>
        public const int ClientFirmFieldNumber = 12;
        private string clientFirm_ = "";
        /// <summary>
        /// client firm of the uploading user
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
          if (!object.Equals(SecKey, other.SecKey)) return false;
          if (SecType != other.SecType) return false;
          if (ClientFirm != other.ClientFirm) return false;
          return Equals(_unknownFields, other._unknownFields);
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public override int GetHashCode() {
          int hash = 1;
          if (secKey_ != null) hash ^= SecKey.GetHashCode();
          if (SecType != global::Spiderrock.Protobuf.SpdrKeyType.Unspecified) hash ^= SecType.GetHashCode();
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
          if (secKey_ != null) {
            output.WriteRawTag(82);
            output.WriteMessage(SecKey);
          }
          if (SecType != global::Spiderrock.Protobuf.SpdrKeyType.Unspecified) {
            output.WriteRawTag(88);
            output.WriteEnum((int) SecType);
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
          if (secKey_ != null) {
            output.WriteRawTag(82);
            output.WriteMessage(SecKey);
          }
          if (SecType != global::Spiderrock.Protobuf.SpdrKeyType.Unspecified) {
            output.WriteRawTag(88);
            output.WriteEnum((int) SecType);
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
          if (secKey_ != null) {
            size += 1 + pb::CodedOutputStream.ComputeMessageSize(SecKey);
          }
          if (SecType != global::Spiderrock.Protobuf.SpdrKeyType.Unspecified) {
            size += 1 + pb::CodedOutputStream.ComputeEnumSize((int) SecType);
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
          if (other.secKey_ != null) {
            if (secKey_ == null) {
              SecKey = new global::Spiderrock.Protobuf.ExpiryKey();
            }
            SecKey.MergeFrom(other.SecKey);
          }
          if (other.SecType != global::Spiderrock.Protobuf.SpdrKeyType.Unspecified) {
            SecType = other.SecType;
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
                if (secKey_ == null) {
                  SecKey = new global::Spiderrock.Protobuf.ExpiryKey();
                }
                input.ReadMessage(SecKey);
                break;
              }
              case 88: {
                SecType = (global::Spiderrock.Protobuf.SpdrKeyType) input.ReadEnum();
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
                if (secKey_ == null) {
                  SecKey = new global::Spiderrock.Protobuf.ExpiryKey();
                }
                input.ReadMessage(SecKey);
                break;
              }
              case 88: {
                SecType = (global::Spiderrock.Protobuf.SpdrKeyType) input.ReadEnum();
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
