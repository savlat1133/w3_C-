// 81. Hexadecimal to Octal Conversion

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Hex to Octa conversion" << endl;
    cout << "-------------------------------------------" << endl;

    string hexa = "0123456789ABCDEF";
    string hex[16] = {"0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111",
                      "1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111"};
    string octa[8] = {"000", "001", "010", "011", "100", "101", "110", "111"};


    string input;
    string binHex = "";
    string octal = "";

    cout << "Input any 32-bit hexadecimal number: ";
    cin >> input;

    for (int i = 0; i < input.length(); i++) {
        binHex += hex[hexa.find(toupper(input[i]))];
    }
    while(binHex.length() % 3 != 0) {
        binHex = '0' + binHex;
    }

    for (int i = 0; i < binHex.length(); i += 3) {
        for (int j = 0; j < 8; j++) {
            string digits = binHex.substr(i, 3);
            if (digits == octa[j]) {
                octal += to_string(j);
            }
        }
    }
    cout << octal << endl;

    return 0;
}
