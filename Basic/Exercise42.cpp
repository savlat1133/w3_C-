// Reverse First and Last Name


#include <iostream>

using namespace std;

int main() {
    cout << "Print the name in reverse where last name comes first : " << endl;
    cout << "----------------------------------------------" << endl;

    string fname, lname;

    cout << "Input the first name : " << endl;
    cin >> fname;
    cout << "Input the last name : " << endl;
    cin >> lname;

    cout << "Name in reverse : " << lname + " " + fname << endl;

    return 0;
}
