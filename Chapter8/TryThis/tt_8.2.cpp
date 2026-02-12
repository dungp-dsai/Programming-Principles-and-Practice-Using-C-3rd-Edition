#include "../../PPPHeaders.h"

enum class Month {
    jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

int to_int(Month m) {
    return static_cast<int>(m);
}

Month operator++(Month& m) {
    m = (m == Month::dec) ? Month::jan : Month{to_int(m) + 1};
    return m;
}

vector<string> month_tbl = {"Not a month", "Jan", "Feb", "Mar", "Apr", "May", "June", "July", "Aug", "Sep", "Oct", "Nov", "Dec"};

ostream& operator<<(ostream& os, Month& m) {
    return os << month_tbl[to_int(m)];
}

int main() {
    Month m = Month::aug;
    cout << m << '\n';

    ++m;
    cout << m << '\n';

    Month dec = Month::dec;
    ++dec;
    cout << dec << '\n';
    return 0;
}