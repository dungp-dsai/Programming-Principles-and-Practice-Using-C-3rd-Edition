#include "../../PPPHeaders.h"

class Date {
    public:
        Date();
        Date(int yy, int mm, int dd);
    private:
        int y, m, d;
};

Date::Date(int yy, int mm, int dd)
    :y{yy}, m{mm}, d{dd}
{
}

Date::Date()
{
}

int main() {
    Date today {2029,10,1};
    Date tmr;
    return 0;
}