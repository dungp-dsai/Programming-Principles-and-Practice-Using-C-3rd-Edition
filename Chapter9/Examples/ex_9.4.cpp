#include "../../PPPHeaders.h"

void skip_to_int() {
    if(cin.fail()) {
        cin.clear();
        for(char ch; cin>> ch;) {
            if(isdigit(ch) || ch=='-') {
                cin.unget();
                return;
            }
        }
    }
    cerr << "something wrong inside skip_to_int" << '\n';
}

int get_int() {
    int n = 0;
    while(true) {
        if(cin >> n) {
            return n;
        }
        cout << "Sorry thats not a number";
        skip_to_int();
    }
}

int get_int(int low, int high, const string& greeting, const string& sorry) {
    cout << "Please input " << greeting << " between " << low << " and " << high << '\n';
    while(true) {
        int n = get_int();
        if(low<=n && n<=high)
            return n;
        cout << sorry << '\n';
    }
}

int main() {
    int n = get_int(10,20, "your height", "your height input is not valid, type again in range");
    cout << "n: " << n << '\n';

    n = get_int(0,500, "your score", "your score is unvalid, type again in range");
    cout << "n: " << n << '\n';
    return 0;
}