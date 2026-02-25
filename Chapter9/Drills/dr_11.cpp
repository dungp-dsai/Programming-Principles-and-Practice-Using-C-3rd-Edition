#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

struct Point {
    int x;
    int y;
};

void end_of_loop(istream& is, char term, const string& message) {
    if(is.fail()) {
        is.clear();
        char ch = 0;
        if(is>>ch && ch==term) {
            cerr << message;
            return;
        }
        char extra;
        if(is>>extra) {
            cerr << "Formatting error \n";
        }
    }
}

istream& operator>>(istream& is, Point& p) {
    char ch;
    is >> p.x >> ch >> p.y;
    if(!is || (ch != ',')) {
        is.clear(ios::failbit);
        cerr << "Input formar error \n";
        return is;
    }
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
    for(Point p; is >>p ;)
        points.push_back(p);

    end_of_loop(is, '|', "Bad termination of file \n");

    if (!os)
        cerr << "Something wrong when open the output file: " << oname << '\n';

    for(Point p: points)
        os << p << '\n';

    return 0;
}