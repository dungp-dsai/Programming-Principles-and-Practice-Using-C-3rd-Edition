#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

struct Reading {
    int hour;
    double temperature;
};

int main() {
    fstream ist {"temp_in.txt"};
    if(!ist)
        cerr << "cannot open the file " << "temp_in.txt" << '\n';

    fstream ost {"temp_out.txt"};
    if(!ost)
        cerr << "cannot open the file to write \n";

    int hour;
    double temperature;
    vector <Reading> temps;
    while(ist >> hour >> temperature) {
        if(hour < 0 || 23 < hour)
            cerr << "hour is out of range";
        temps.push_back(Reading{hour, temperature});
    }

    for(Reading x: temps) {
        ost << "(" << x.hour << " " << x.temperature << ")" << '\n';
    }
    return 0;
}
