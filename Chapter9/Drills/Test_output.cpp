#include "../../PPPHeaders.h"

int main() {
    int birth_year = 1998;
    cout << showbase;
    cout << "Birth year decimal:" << '\t' <<dec << birth_year << '\n';
    cout << "Birth year hexadecimal:" << '\t' <<hex << birth_year << '\n';
    cout << "Birth year octal:" << '\t' <<oct << birth_year << '\n';
    cout << "My age:" << '\t' <<dec << 28 << '\n';
    return 0;
}
