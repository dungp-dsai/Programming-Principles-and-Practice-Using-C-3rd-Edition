#include "../../PPPHeaders.h"

class Date {
    public:
        Date(int y, int m, int d);
        class Invalid {};
        bool is_valid();

    private:
        int y, m, d;
};

Date::Date(int yy, int mm, int dd)
    :y{yy}, m{mm}, d{dd}
{
    if (!is_valid()) {
        throw Invalid();
    }
}

bool Date::is_valid() {
    return 0<m && m <13;
}

void f(int x, int y) {
    try {
        Date dx{2024,x,y};
    } catch(Date::Invalid) {
        error("f(): invalid date");
    }
}
int main() {
    Date today {2024,13,2};
    return 0;
}