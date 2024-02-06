#pragma once
#include <cstdint>
#include <string>
#include <sstream>
#include <iomanip>
#include <ctime>
#include <iostream>
#include <locale>

namespace SRProtobufCPP {

    struct DateKeyLayout {

    private:
        int _year;
        int _month;
        int _day;

    public:
        DateKeyLayout() : _year(), _month(), _day() {}

        DateKeyLayout(int year, int month, int day) : _year(year), _month(month), _day(day) {}

        bool Equals(const DateKeyLayout& other) const {
            return _year == other._year && _month == other._month && _day == other._day;
        }

        bool operator==(const DateKeyLayout& other) const {
            return Equals(other);
        }

        bool operator!=(const DateKeyLayout& other) const {
            return !Equals(other);
        }

        int YYYYMMDD() const {
            return _year * 10'000 + _month * 100 + _day;
        }

        bool operator<(const DateKeyLayout& other) const {
            return YYYYMMDD() < other.YYYYMMDD();
        }

        bool operator<=(const DateKeyLayout& other) const {
            return YYYYMMDD() <= other.YYYYMMDD();
        }

        bool operator>(const DateKeyLayout& other) const {
            return YYYYMMDD() > other.YYYYMMDD();
        }

        bool operator>=(const DateKeyLayout& other) const {
            return YYYYMMDD() >= other.YYYYMMDD();
        }


        bool IsEmpty() const {
            return _year == 0 && _month == 0 && _day == 0;
        }

        int year() const {
            return _year;
        }

        int month() const {
            return _month;
        }

        int day() const {
            return _day;
        }
       
    };


} // namespace SRProtobufCPP
