#include "../../PPPHeaders.h"

enum class Month {
    jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};


int to_int(Month m)
{
    return static_cast<int>(m);
}

int main() {
    Month m3 = Month::dec;

    cout << to_int(m3) << '\n';
    return 0;
}