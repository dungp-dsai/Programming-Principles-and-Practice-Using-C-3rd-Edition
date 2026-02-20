#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string last_name, first_name, telephone_number, email;
    last_name = "Pham";
    first_name = "Dung";
    telephone_number = "03846561232";
    email = "dungpham290198@gmail.com";
    cout << left << setw(16) << "Last Name" << setw(16) << "First Name" << setw(30) << "Telephone Number" << setw(30) << "Email" << '\n';
    cout << left << setw(16) << last_name << setw(16) << first_name << setw(30) << telephone_number << setw(20) << email << '\n';
    return 0;
}