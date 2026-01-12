#include "../../PPPHeaders.h"

consteval double half(double d) { return d/2; }

int main() {

    double x1 = half(7);           // OK: 7 is a constant
    const double test = 10;
    double x2 = half(test); 
    cout << x2 << '\n';

    return 0;
}