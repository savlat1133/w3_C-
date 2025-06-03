// 77. Octal to Binary Conversion

#include <iostream>

using namespace std;

int main() {
    cout << "Octal conversion" << endl;
    cout << "-------------------------------" << endl;

    int bin[8] = {000, 001, 010, 011, 100, 101, 110, 111};

    string octal;

    cout << "Input any octal number: ";
    cin >> octal;

    string decimal = "";

    for (int i = 0; i < octal.length(); i++) {
        decimal += to_string(bin[octal[i] - '0']);
    }


    cout << "The equivalent binary number: " << decimal << endl;




    return 0;
}
