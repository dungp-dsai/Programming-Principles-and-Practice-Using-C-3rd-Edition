#include <fstream>
#include <iostream>
using namespace std;

int main() {
    cout << "please input a file name \n";
    string iname;
    cin >> iname;
    ifstream input_stream_name {"haha.txt"};
    if(! input_stream_name)
        cerr << "can't open the file " << iname << '\n';
    return 0;
}