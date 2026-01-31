#include "../../PPPHeaders.h"

void swap_v(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_r(int&a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// void swap_cr(const int& a, const int& b) {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

int main() {
    int x = 7;
    int y = 9;
    swap_v(x, y);
    swap_v(7,9);
    cout << "x=" << x << ";" << "y=" << y << '\n';

    int cx = 7;
    int cy = 9;
    swap_r(cx,cy);
    // swap_r(7.7,9.9); 
    cout << "cx=" << cx << ";" << "cy=" << cy << '\n';
    return 0;
}


/*
This function can't be compiled because const reference is read only. We cannot swap its value
void swap_cr(const int& a, const int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
DOES NOT WORK CASES:
1.
swap_r(7.7,9.9); error because only pass literal in case const reference. In that case the compiler creates temporary for the ref

2.
const int cx = 7;
const int cy = 9;
swap_r(cx,cy);

cx, cy are defined as const so its blocked changing their values

*/