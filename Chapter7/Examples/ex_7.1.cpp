#include "../../PPPHeaders.h"

void test(int a, int b, int) {
    cout << a << b << '\n';
}

int main() {
    void test(int x, int y, int z);
    test(1,2,3);
    return 0;
}