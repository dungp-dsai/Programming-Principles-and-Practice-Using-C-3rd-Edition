#include "../../PPPHeaders.h"

struct Date {
    int y;
    int m;
    int d;
};

int main() {
    Date today;
    today.y = 2026;
    today.m = 2;
    today.d = 5;
    cout << "(" << today.y << "," << today.m << ","  << today.d << ")" << '\n';
    return 0;
}