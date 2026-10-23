using System;
using System.Buffers.Binary;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace SpiderRock.SpiderStream.Mbus;

/// <summary>
/// Tagged 16-byte content key: a 1-byte ContentKeyType tag followed by a 15-byte payload
/// (the mbus wire form). Mirrors the platform's SRTraits.ContentKey; canonical text is
/// "Tag:XX-XXXX-XXXX-XXXX-XXXX-XXXX-XXXX-XXXX" (payload as uppercase hex, HexLong-style
/// dash groups). Ordering is tag, then payload bytes (memcmp).
/// </summary>
[StructLayout(LayoutKind.Sequential, Pack = 1)]
public readonly struct ContentKey : IEquatable<ContentKey>, IComparable<ContentKey>
{
    public const int PayloadLength = 15;
    public const int PayloadTextLength = 37;   // 30 hex chars + 7 dashes

    // The 16 wire bytes as two words (x64 little-endian view): the tag is wire byte 0 = the
    // low byte of w0; ReverseEndianness gives the big-endian halves whose unsigned compare is
    // the wire's memcmp order.
    private readonly ulong w0;
    private readonly ulong w1;

    /// <summary>Payload bytes are right-aligned (leading zeros) so numeric ids keep memcmp order.</summary>
    public ContentKey(ContentKeyType ct, ReadOnlySpan<byte> payload)
    {
        if (payload.Length > PayloadLength)
            throw new ArgumentOutOfRangeException(nameof(payload), payload.Length, $"payload must be at most {PayloadLength} bytes");
        Span<byte> bytes = stackalloc byte[16];
        bytes.Clear();
        bytes[0] = (byte)ct;
        payload.CopyTo(bytes.Slice(16 - payload.Length));
        w0 = BinaryPrimitives.ReadUInt64LittleEndian(bytes);
        w1 = BinaryPrimitives.ReadUInt64LittleEndian(bytes.Slice(8));
    }

    private ContentKey(ulong w0, ulong w1)
    {
        this.w0 = w0;
        this.w1 = w1;
    }

    public ContentKeyType Ct
    {
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        get => (ContentKeyType)(byte)w0;
    }

    public ReadOnlySpan<byte> Payload
    {
        get
        {
            var bytes = new byte[16];
            BinaryPrimitives.WriteUInt64LittleEndian(bytes, w0);
            BinaryPrimitives.WriteUInt64LittleEndian(bytes.AsSpan(8), w1);
            return new ReadOnlySpan<byte>(bytes, 1, PayloadLength);
        }
    }

    /// <summary>Id keys: the id occupies the last 8 payload bytes big-endian, so ids sort numerically.</summary>
    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public static ContentKey FromId(ContentKeyType ct, long id) =>
        new ContentKey((byte)ct, BinaryPrimitives.ReverseEndianness((ulong)id));

    public long Id
    {
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        get => (long)BinaryPrimitives.ReverseEndianness(w1);
    }

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public bool Equals(ContentKey other) => w0 == other.w0 && w1 == other.w1;

    public override bool Equals(object obj) => obj is ContentKey other && Equals(other);

    public override int GetHashCode() =>
        unchecked((int)(w0 ^ (w0 >> 32)) * 397 ^ (int)(w1 ^ (w1 >> 32)));

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public int CompareTo(ContentKey other)
    {
        var a = BinaryPrimitives.ReverseEndianness(w0);
        var b = BinaryPrimitives.ReverseEndianness(other.w0);
        if (a != b) return a < b ? -1 : 1;
        a = BinaryPrimitives.ReverseEndianness(w1);
        b = BinaryPrimitives.ReverseEndianness(other.w1);
        return a == b ? 0 : a < b ? -1 : 1;
    }

    public static bool operator ==(ContentKey a, ContentKey b) => a.Equals(b);
    public static bool operator !=(ContentKey a, ContentKey b) => !a.Equals(b);
    public static bool operator <(ContentKey a, ContentKey b) => a.CompareTo(b) < 0;
    public static bool operator >(ContentKey a, ContentKey b) => a.CompareTo(b) > 0;

    public override string ToString()
    {
        var src = Payload;
        var text = new char[PayloadTextLength];
        var pos = 0;
        for (var i = 0; i < PayloadLength; i++)
        {
            if (pos > 0 && (pos == 2 || (pos - 2) % 5 == 0)) text[pos++] = '-';
            text[pos++] = ToHexUpper(src[i] >> 4);
            text[pos++] = ToHexUpper(src[i] & 0xF);
        }
        return $"{Ct}:{new string(text)}";
    }

    private static char ToHexUpper(int nibble) => (char)(nibble < 10 ? '0' + nibble : 'A' + nibble - 10);
}
