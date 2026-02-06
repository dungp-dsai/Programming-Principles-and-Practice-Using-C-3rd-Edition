#include "../../PPPHeaders.h"

struct Date {
    public:
        Date(int y, int m, int d);
        void add_day(int n);
        int month();
        int year();
        int day();

    private:
        int y, m, d;
};

Date::Date(int yy, int mm, int dd) 
    :y{yy}, m{mm}, d{dd} 
{
}

int Date::month() {
    return m;
}

int Date::year() {
    return y;
}

int Date::day() {
    return d;
}

void add_day(int n) {

}

ostream& operator<<(ostream& os, Date d)
{
    return os << d.year() << '/' << d.month() << '/' << d.day();
}

int main() {
    Date today {2026, 2, 6};
    cout << today << '\n';
    return 0;
}