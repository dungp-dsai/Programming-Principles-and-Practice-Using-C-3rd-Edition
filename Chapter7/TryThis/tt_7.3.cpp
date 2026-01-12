#include "../../PPPHeaders.h"

void conv1(double y)
{
         int x = narrow<int>(y);               // checked conversion
}


int main() {
    int a = 7.7;
    cout << a << '\n';
    double b = 9.8;
    int x = narrow<int>(b);
    cout << x << '\n';
    return 0;
}