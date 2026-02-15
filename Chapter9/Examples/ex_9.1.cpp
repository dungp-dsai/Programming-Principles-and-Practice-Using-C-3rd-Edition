#include "../../PPPHeaders.h" 

int main() {
    cout << "please input a file name \n";
    string iname;
    cin >> iname;
    ifstream ist {iname};
    if(! ist)
        error("can't open the file ", iname);
    return 0;
}