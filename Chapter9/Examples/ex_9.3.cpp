#include <fstream>
#include <iostream>
#include <vector>
using namespace std;


void fill_vector(istream& ist, vector<int>& v, char terminator) {
    for(int x; ist >> x; )
        v.push_back(x);
    
    if(ist.eof())
        return; // ok expected to return
    
    ist.clear();
    char c = 0;
    ist >> c;
    if(c != terminator) {
        ist.unget();
        ist.clear(ios::failbit);
    }
    
}

int main() {
    fstream ist {"test_exception.txt"};
    if(!ist)
        cerr << "error with input file" << '\n';
    ist.exceptions(ist.exceptions() | ios::badbit);

    vector <int> v;
    fill_vector(ist, v, 'e');
    if(!ist)
        cout << "something wrong that make the input stream fail" << '\n';
}
