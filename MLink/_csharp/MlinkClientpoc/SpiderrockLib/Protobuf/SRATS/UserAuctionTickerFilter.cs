// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: Protobuf/SRATS/UserAuctionTickerFilter.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021, 8981
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Spiderrock.Protobuf {

  /// <summary>Holder for reflection information generated from Protobuf/SRATS/UserAuctionTickerFilter.proto</summary>
  public static partial class UserAuctionTickerFilterReflection {

    #region Descriptor
    /// <summary>File descriptor for Protobuf/SRATS/UserAuctionTickerFilter.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static UserAuctionTickerFilterReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "CixQcm90b2J1Zi9TUkFUUy9Vc2VyQXVjdGlvblRpY2tlckZpbHRlci5wcm90",
            "bxITc3BpZGVycm9jay5wcm90b2J1ZhoXc3BpZGVycm9ja19jb21tb24ucHJv",
            "dG8aH2dvb2dsZS9wcm90b2J1Zi90aW1lc3RhbXAucHJvdG8i6QIKF1VzZXJB",
            "dWN0aW9uVGlja2VyRmlsdGVyEjMKBV9tZXRhGAEgASgLMiQuc3BpZGVycm9j",
            "ay5wcm90b2J1Zi5NZXNzYWdlTWV0YWRhdGESPwoEcGtleRgCIAEoCzIxLnNw",
            "aWRlcnJvY2sucHJvdG9idWYuVXNlckF1Y3Rpb25UaWNrZXJGaWx0ZXIuUEtl",
            "eRITCgtjbGllbnRfZmlybRhkIAEoCRI0CgdpbmNsdWRlGGUgASgOMiMuc3Bp",
            "ZGVycm9jay5wcm90b2J1Zi5JbmNsdWRlRXhjbHVkZRItCgl0aW1lc3RhbXAY",
            "ZiABKAsyGi5nb29nbGUucHJvdG9idWYuVGltZXN0YW1wGl4KBFBLZXkSEQoJ",
            "dXNlcl9uYW1lGAogASgJEhMKC2ZpbHRlcl9uYW1lGAsgASgJEi4KBnRpY2tl",
            "chgMIAEoCzIeLnNwaWRlcnJvY2sucHJvdG9idWYuVGlja2VyS2V5YgZwcm90",
            "bzM="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Spiderrock.Protobuf.SpiderrockCommonReflection.Descriptor, global::Google.Protobuf.WellKnownTypes.TimestampReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Spiderrock.Protobuf.UserAuctionTickerFilter), global::Spiderrock.Protobuf.UserAuctionTickerFilter.Parser, new[]{ "Meta", "Pkey", "ClientFirm", "Include", "Timestamp" }, null, null, null, new pbr::GeneratedClrTypeInfo[] { new pbr::GeneratedClrTypeInfo(typeof(global::Spiderrock.Protobuf.UserAuctionTickerFilter.Types.PKey), global::Spiderrock.Protobuf.UserAuctionTickerFilter.Types.PKey.Parser, new[]{ "UserName", "FilterName", "Ticker" }, null, null, null, null)})
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class UserAuctionTickerFilter : pb::IMessage<UserAuctionTickerFilter>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<UserAuctionTickerFilter> _parser = new pb::MessageParser<UserAuctionTickerFilter>(() => new UserAuctionTickerFilter());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pb::MessageParser<UserAuctionTickerFilter> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Spiderrock.Protobuf.UserAuctionTickerFilterReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public UserAuctionTickerFilter() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public UserAuctionTickerFilter(UserAuctionTickerFilter other) : this() {
      Meta_ = other.Meta_ != null ? other.Meta_.Clone() : null;
      pkey_ = other.pkey_ != null ? other.pkey_.Clone() : null;
      clientFirm_ = other.clientFirm_;
      include_ = other.include_;
      timestamp_ = other.timestamp_ != null ? other.timestamp_.Clone() : null;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public UserAuctionTickerFilter Clone() {
      return new UserAuctionTickerFilter(this);
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
    private global::Spiderrock.Protobuf.UserAuctionTickerFilter.Types.PKey pkey_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Spiderrock.Protobuf.UserAuctionTickerFilter.Types.PKey Pkey {
      get { return pkey_; }
      set {
        pkey_ = value;
      }
    }

    /// <summary>Field number for the "client_firm" field.</summary>
    public const int ClientFirmFieldNumber = 100;
    private string clientFirm_ = "";
    /// <summary>
    /// client firm of the user this filter belongs to
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public string ClientFirm {
      get { return clientFirm_; }
      set {
        clientFirm_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "include" field.</summary>
    public const int IncludeFieldNumber = 101;
    private global::Spiderrock.Protobuf.IncludeExclude include_ = global::Spiderrock.Protobuf.IncludeExclude.Unspecified;
    /// <summary>
    /// include or exclude this ticker
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Spiderrock.Protobuf.IncludeExclude Include {
      get { return include_; }
      set {
        include_ = value;
      }
    }

    /// <summary>Field number for the "timestamp" field.</summary>
    public const int TimestampFieldNumber = 102;
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
      return Equals(other as UserAuctionTickerFilter);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public bool Equals(UserAuctionTickerFilter other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (!object.Equals(Meta, other.Meta)) return false;
      if (!object.Equals(Pkey, other.Pkey)) return false;
      if (ClientFirm != other.ClientFirm) return false;
      if (Include != other.Include) return false;
      if (!object.Equals(Timestamp, other.Timestamp)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override int GetHashCode() {
      int hash = 1;
      if (Meta_ != null) hash ^= Meta.GetHashCode();
      if (pkey_ != null) hash ^= Pkey.GetHashCode();
      if (ClientFirm.Length != 0) hash ^= ClientFirm.GetHashCode();
      if (Include != global::Spiderrock.Protobuf.IncludeExclude.Unspecified) hash ^= Include.GetHashCode();
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
      if (ClientFirm.Length != 0) {
        output.WriteRawTag(162, 6);
        output.WriteString(ClientFirm);
      }
      if (Include != global::Spiderrock.Protobuf.IncludeExclude.Unspecified) {
        output.WriteRawTag(168, 6);
        output.WriteEnum((int) Include);
      }
      if (timestamp_ != null) {
        output.WriteRawTag(178, 6);
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
      if (ClientFirm.Length != 0) {
        output.WriteRawTag(162, 6);
        output.WriteString(ClientFirm);
      }
      if (Include != global::Spiderrock.Protobuf.IncludeExclude.Unspecified) {
        output.WriteRawTag(168, 6);
        output.WriteEnum((int) Include);
      }
      if (timestamp_ != null) {
        output.WriteRawTag(178, 6);
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
      if (ClientFirm.Length != 0) {
        size += 2 + pb::CodedOutputStream.ComputeStringSize(ClientFirm);
      }
      if (Include != global::Spiderrock.Protobuf.IncludeExclude.Unspecified) {
        size += 2 + pb::CodedOutputStream.ComputeEnumSize((int) Include);
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
    public void MergeFrom(UserAuctionTickerFilter other) {
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
          Pkey = new global::Spiderrock.Protobuf.UserAuctionTickerFilter.Types.PKey();
        }
        Pkey.MergeFrom(other.Pkey);
      }
      if (other.ClientFirm.Length != 0) {
        ClientFirm = other.ClientFirm;
      }
      if (other.Include != global::Spiderrock.Protobuf.IncludeExclude.Unspecified) {
        Include = other.Include;
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
              Pkey = new global::Spiderrock.Protobuf.UserAuctionTickerFilter.Types.PKey();
            }
            input.ReadMessage(Pkey);
            break;
          }
          case 802: {
            ClientFirm = input.ReadString();
            break;
          }
          case 808: {
            Include = (global::Spiderrock.Protobuf.IncludeExclude) input.ReadEnum();
            break;
          }
          case 818: {
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
              Pkey = new global::Spiderrock.Protobuf.UserAuctionTickerFilter.Types.PKey();
            }
            input.ReadMessage(Pkey);
            break;
          }
          case 802: {
            ClientFirm = input.ReadString();
            break;
          }
          case 808: {
            Include = (global::Spiderrock.Protobuf.IncludeExclude) input.ReadEnum();
            break;
          }
          case 818: {
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
    /// <summary>Container for nested types declared in the UserAuctionTickerFilter message type.</summary>
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
          get { return global::Spiderrock.Protobuf.UserAuctionTickerFilter.Descriptor.NestedTypes[0]; }
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
          userName_ = other.userName_;
          filterName_ = other.filterName_;
          ticker_ = other.ticker_ != null ? other.ticker_.Clone() : null;
          _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public PKey Clone() {
          return new PKey(this);
        }

        /// <summary>Field number for the "user_name" field.</summary>
        public const int UserNameFieldNumber = 10;
        private string userName_ = "";
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public string UserName {
          get { return userName_; }
          set {
            userName_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
          }
        }

        /// <summary>Field number for the "filter_name" field.</summary>
        public const int FilterNameFieldNumber = 11;
        private string filterName_ = "";
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public string FilterName {
          get { return filterName_; }
          set {
            filterName_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
          }
        }

        /// <summary>Field number for the "ticker" field.</summary>
        public const int TickerFieldNumber = 12;
        private global::Spiderrock.Protobuf.TickerKey ticker_;
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public global::Spiderrock.Protobuf.TickerKey Ticker {
          get { return ticker_; }
          set {
            ticker_ = value;
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
          if (UserName != other.UserName) return false;
          if (FilterName != other.FilterName) return false;
          if (!object.Equals(Ticker, other.Ticker)) return false;
          return Equals(_unknownFields, other._unknownFields);
        }

        [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
        [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
        public override int GetHashCode() {
          int hash = 1;
          if (UserName.Length != 0) hash ^= UserName.GetHashCode();
          if (FilterName.Length != 0) hash ^= FilterName.GetHashCode();
          if (ticker_ != null) hash ^= Ticker.GetHashCode();
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
          if (UserName.Length != 0) {
            output.WriteRawTag(82);
            output.WriteString(UserName);
          }
          if (FilterName.Length != 0) {
            output.WriteRawTag(90);
            output.WriteString(FilterName);
          }
          if (ticker_ != null) {
            output.WriteRawTag(98);
            output.WriteMessage(Ticker);
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
          if (UserName.Length != 0) {
            output.WriteRawTag(82);
            output.WriteString(UserName);
          }
          if (FilterName.Length != 0) {
            output.WriteRawTag(90);
            output.WriteString(FilterName);
          }
          if (ticker_ != null) {
            output.WriteRawTag(98);
            output.WriteMessage(Ticker);
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
          if (UserName.Length != 0) {
            size += 1 + pb::CodedOutputStream.ComputeStringSize(UserName);
          }
          if (FilterName.Length != 0) {
            size += 1 + pb::CodedOutputStream.ComputeStringSize(FilterName);
          }
          if (ticker_ != null) {
            size += 1 + pb::CodedOutputStream.ComputeMessageSize(Ticker);
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
          if (other.UserName.Length != 0) {
            UserName = other.UserName;
          }
          if (other.FilterName.Length != 0) {
            FilterName = other.FilterName;
          }
          if (other.ticker_ != null) {
            if (ticker_ == null) {
              Ticker = new global::Spiderrock.Protobuf.TickerKey();
            }
            Ticker.MergeFrom(other.Ticker);
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
                UserName = input.ReadString();
                break;
              }
              case 90: {
                FilterName = input.ReadString();
                break;
              }
              case 98: {
                if (ticker_ == null) {
                  Ticker = new global::Spiderrock.Protobuf.TickerKey();
                }
                input.ReadMessage(Ticker);
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
                UserName = input.ReadString();
                break;
              }
              case 90: {
                FilterName = input.ReadString();
                break;
              }
              case 98: {
                if (ticker_ == null) {
                  Ticker = new global::Spiderrock.Protobuf.TickerKey();
                }
                input.ReadMessage(Ticker);
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
