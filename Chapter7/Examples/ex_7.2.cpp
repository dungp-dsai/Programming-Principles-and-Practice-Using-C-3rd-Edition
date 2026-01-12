#include "../../PPPHeaders.h"

struct Point {
    double x;
    double y;
};

constexpr double xscale = 10;
constexpr double yscale = 0.8;

constexpr Point scale(Point p) {return {xscale*p.x, yscale*p.y};}

int main() {
    Point p = {1,2};
    cout << p.x << '\n';

    constexpr Point p1 = {1,1}; // we dont know p1 values at the compile time
    constexpr Point p2 = {10,10}; // we know p2 values at the compile time.

    Point p3 = scale(p1);  // this is fine because 
    cout << "x=" << p3.x << " " << "y=" << p3.y << '\n';

    constexpr Point p4 = scale(p2);
    cout << "x=" << p4.x << " " << "y=" << p4.y << '\n';


    // constexpr Point p5 = scale(p1); // error because p1 is not known at the compile time.
    // cout << "x=" << p5.x << " " << "y=" << p5.y << '\n';
    return 0;
}