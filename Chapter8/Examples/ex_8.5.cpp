#include "../../PPPHeaders.h"

enum class Month {
    jan, feb, mar
};

struct Year {
    int y;
};

class Date {
    public:
        Date() {};
        Date(Year y, Month m, int d);
        Date(Year y);
        int day() const { return d; };

    private:
        Year y {2001};
        Month m {Month::jan};
        int d = 1;

};

Date::Date(Year yy)
    :y{yy}
{
}

Date::Date(Year yy, Month mm, int dd)
    :y{yy}, m{mm}, d{dd}
{
}

int main() {
    const Date sample_date;
    int d = sample_date.day();

    return 0;
}