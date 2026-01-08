#include "../../PPPHeaders.h"

// int main() {
//     std::cout << f(i) << '\n';
//     return 0;
// }

int f(int i) {
    return i;
}

int f(int);

int main() {
    int i = 7;
    // int i = 4; // error because definition also happens once for a name.
    cout << f(i) << '\n';
    return 0;
}