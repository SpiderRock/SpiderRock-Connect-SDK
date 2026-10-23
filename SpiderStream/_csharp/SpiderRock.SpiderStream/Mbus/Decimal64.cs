using System;
using System.Globalization;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace SpiderRock.SpiderStream.Mbus;

/// <summary>
/// Lossless fixed-point decimal: value = raw x 10^-9 stored in one long (the mbus wire form).
/// Mirrors the platform's SRTraits.Decimal64.
/// </summary>
[StructLayout(LayoutKind.Sequential, Pack = 1)]
public readonly struct Decimal64 : IEquatable<Decimal64>, IComparable<Decimal64>
{
    public const int Scale = 9;
    public const long ScaleFactor = 1_000_000_000;

    private readonly long raw;

    private Decimal64(long raw) => this.raw = raw;

    public long Raw
    {
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        get => raw;
    }

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public static Decimal64 FromRaw(long raw) => new(raw);

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public static explicit operator double(Decimal64 value) => (double)value.raw / ScaleFactor;

    public static explicit operator decimal(Decimal64 value)
    {
        ulong magnitude = value.raw >= 0 ? (ulong)value.raw : (ulong)unchecked(-value.raw);
        return new decimal((int)(uint)magnitude, (int)(uint)(magnitude >> 32), 0, value.raw < 0, Scale);
    }

    public (long Whole, long Frac) Parts
    {
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        get => (raw / ScaleFactor, raw % ScaleFactor);
    }

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public bool Equals(Decimal64 other) => raw == other.raw;

    public override bool Equals(object obj) => obj is Decimal64 other && Equals(other);

    public override int GetHashCode() => raw.GetHashCode();

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public int CompareTo(Decimal64 other) => raw.CompareTo(other.raw);

    public static bool operator ==(Decimal64 a, Decimal64 b) => a.raw == b.raw;
    public static bool operator !=(Decimal64 a, Decimal64 b) => a.raw != b.raw;
    public static bool operator <(Decimal64 a, Decimal64 b) => a.raw < b.raw;
    public static bool operator >(Decimal64 a, Decimal64 b) => a.raw > b.raw;
    public static bool operator <=(Decimal64 a, Decimal64 b) => a.raw <= b.raw;
    public static bool operator >=(Decimal64 a, Decimal64 b) => a.raw >= b.raw;

    // Same text as SRTraits.Decimal64: trailing fraction zeros trimmed, "0" for zero
    public override string ToString() => ((decimal)this).ToString("0.#########", CultureInfo.InvariantCulture);
}
