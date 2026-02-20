#include "../../PPPHeaders.h"

int main() {
    double d = 1234567.89;
    cout <<defaultfloat <<  d << '\n';
    cout <<fixed << d << '\n';
    cout <<scientific << d << '\n';
    return 0;
}