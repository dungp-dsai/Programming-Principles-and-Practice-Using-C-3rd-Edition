#include "../../PPPHeaders.h"

struct Point {
    double x;
    double y;
};

Point get_cordinates(const string& s) {
    istringstream is{s};
    Point xy;
    char left_paren, ch, right_paren;
    is >> left_paren >> xy.x >> ch >> xy.y >> right_paren;
    if(!is)
        error("Something wrong with input stream ", s);
    else if(left_paren != '(')
        error("Left Paren is wrong: ", left_paren);
    else if(ch != ',')
        error("ch is not a comma: ", ch);
    else if(right_paren != ')')
        error("Right Paren is wrong: ", right_paren);
    return xy;
}

int main() {
    auto c1 = get_cordinates("(2,3)");
    auto c2 = get_cordinates("( 200, 300 )");
    cout << c2.x << ' ' << c2.y << '\n';
    auto c3 = get_cordinates("100, 400");
    return 0;
}