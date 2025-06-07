// 80. Hexadecimal to Binary Conversion

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Hex to Binary conversion" << endl;
    cout << "-------------------------------------------" << endl;

    string hexa = "0123456789ABCDEF";
    string hex[16] = {"0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111",
                      "1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111"};

    string input;
    string binary = "";

    cout << "Input any 32-bit hexadecimal number: ";
    cin >> input;

    for (int i = 0; i < input.length(); i++) {
        binary += hex[hexa.find(toupper(input[i]))];
    }
    cout << "The equivalent binary number is: " << stoi(binary) << endl;

    return 0;
}
