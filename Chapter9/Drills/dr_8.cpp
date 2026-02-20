#include "../../PPPHeaders.h"

int main() {
    int a, b, c, d;
    cin >> a >>oct >> b >>hex >> c >> d;
    cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';
    return 0;
}

/*
- for a: we input 1234 and it outputs 1234 because decimal base in default 
- for b: we use oct manipulator which mean 1234 is in octal base. But in cout we dont use any manipulator,
 so default to decimal. 1234 in oct is converted into decimal base which is 668
- for c: we use hexadecimal base, so 1234 in hexadecimal is 4660 in decimal base
- for d: because the input stream sticks with the manipulator hexadecimal so d and c is the same.
*/