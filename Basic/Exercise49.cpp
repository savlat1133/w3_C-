// ASCII/Unicode of Character


#include <iostream>

using namespace std;



int main() {
    cout << "Print code (ASCII code / Unicode code etc.) of a given character : " << endl;
    cout << "----------------------------------------------" << endl;

    char c;

    cout << "Input a character : ";
    cin >> c;
    cout << endl;

    cout << "The ASCII code is : " << static_cast<int>(c)<< endl;
    cout << "The Unicode code is : " << static_cast<char>(static_cast<int>(c)) << endl;



    return 0;
}
