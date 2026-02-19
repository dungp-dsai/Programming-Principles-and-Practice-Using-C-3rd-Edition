#include "../../PPPHeaders.h"

int get_value(const string& s){
    istringstream is{s};
    int x = 0;
    is >> x;
    if(!is)
        error("Something wrong in cin man \n");
    return x;
}

int main() {
    int x = 0;
    x = get_value("123abc");
    cout << x << '\n';
    return 0;
}