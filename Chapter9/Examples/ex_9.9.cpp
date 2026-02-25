#include <iostream>
#include <format>
using namespace std;

int main() {
    int a = 112;
    string ab = format("This is {}", a);
    cout << ab << '\n';

    // char x = 'a';
    int x = 1;
    cout << isalnum(x) << '\n';

    float f_a = 15.99999;
    cout << format("precision: {:.6f}", f_a) << '\n';
    return 0;
}