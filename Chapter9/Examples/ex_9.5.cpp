#include "../../PPPHeaders.h"

const int not_a_reading = -7777;
const int not_a_month = -1;

struct Day {
    vector<double> temp = vector<double>(24, not_a_reading);
};

struct Month {
    int month = not_a_month;
    vector<Day> day = vector<Day>(32);
};

struct Year {
    int year;
    vector<Month> month = vector<Month>(12);
}

struct Reading {
    int day;
    int hour;
    double temperature;
}

istream& operator>>(istream&is, Reading& r) {
    char ch1;
    if(is>>ch1 && ch1!= '(') {
        is.unget();
        is.clear(ios::failbit);
        return is;
    }

    char ch2;
    if((is>>r.day >> r.hour >> r.temperature >> ch2) && (ch2!= ')'))
        error("bad reading");
    return is;
}

int main() {
    return 0;
}