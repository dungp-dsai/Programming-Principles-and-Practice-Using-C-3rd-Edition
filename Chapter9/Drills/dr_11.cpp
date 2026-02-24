#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

struct Point {
    int x;
    int y;
};

istream& operator>>(istream& is, Point& p) {
    char ch;
    int x=-1111, y=-111;
    is >> x >> ch >> y;
    cout << "Debug: " << x << ' ' << ch << ' ' << y << '\n';
    // is >> p.x >> ch >> p.y;
    if(is.fail() || ch != ',')
        cerr << "Input formar error \n";
    return is;
}

ostream& operator<<(ostream& os, Point& p) {
    return os << '(' << p.x << ',' << p.y << ')';
}

int main() {
    string iname, oname;
    cout << "Please input the input file name \n";
    cin >> iname;

    cout << "Please input the output file name \n";
    cin >> oname;

    ifstream is{iname};
    ofstream os{oname};

    if (!is)
        cerr << "Something wrong when open the input file: " << iname << '\n';
    
    vector <Point> points;
    // for(Point p; is >>p ;)
    //     points.push_back(p);
    Point p;
    while(is>>p) 
        points.push_back(p);
    if (!os)
        cerr << "Something wrong when open the output file: " << oname << '\n';

    for(Point p: points)
        os << p;

    return 0;
}