using System;
using System.Globalization;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;


namespace SpiderRock.SpiderStream.Mbus.Layouts;

[StructLayout(LayoutKind.Sequential, Pack = 1, Size = 8)]
unsafe internal struct DateTimeLayout : IEquatable<DateTimeLayout>
{
    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public bool Equals(DateTimeLayout other) => Ticks == other.Ticks;

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public override bool Equals(object obj) => obj is DateTimeLayout dtl && Equals(dtl);

    public override int GetHashCode() => _data.GetHashCode();

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public static bool operator ==(DateTimeLayout left, DateTimeLayout right) => left.Equals(right);

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public static bool operator !=(DateTimeLayout left, DateTimeLayout right) => !left.Equals(right);

    private readonly long _data;

    unsafe public DateTimeLayout(long ticks)
    {
        var dttm = new DateTime(ticks, DateTimeKind.Unspecified);
        _data = *(long*)&dttm;
    }

    public long Ticks => ((DateTime)this).Ticks;

    public bool IsEmpty => _data == 0;

    public int Microseconds
    {
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        get => (int)unchecked(Ticks / 10L % 1000000L);
    }


    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public static implicit operator DateTimeLayout(DateTime value) => *(DateTimeLayout*)&value;

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public static implicit operator DateTime(DateTimeLayout value) => *(DateTime*)&value;

    public override string ToString()
    {
        return ((DateTime)this).ToString(CultureInfo.InvariantCulture);
    }
}

internal static class DateTimeLayoutTabRecordExtensions
{
    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public static void AppendInTabRecordFormat(this StringBuilder builder, DateTimeLayout value)
    {
        var dttm = (DateTime)value;
        builder.AppendFormat("{0:D4}-{1:D2}-{2:D2} {3:D2}:{4:D2}:{5:D2}.{6:D3}", dttm.Year, dttm.Month, dttm.Day, dttm.Hour,
                             dttm.Minute, dttm.Second, dttm.Millisecond);
    }
}