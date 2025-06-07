// 78. Octal to Hexadecimal Conversion

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Octal to Hex conversion" << endl;
    cout << "-------------------------------------------" << endl;

    // Replace binary-looking integers with binary strings
    string oct[8] = {"000", "001", "010", "011", "100", "101", "110", "111"};
    string hex[16] = {"0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111",
                      "1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111"};
    string hexa = "0123456789ABCDEF";

    string octal, bin;

    cout << "Input any octal number: ";
    cin >> octal;

    for (int i = 0; i < octal.length(); i++) {
        char c = octal[i];
        bin += oct[c - '0'];
    }

    int size = bin.length();
    int digits = 0;
    string binary = "";
    string result = "";

    for (int i = bin.length() - 1; i >= 0; i--) {
        if (size > 4) {
            if (digits < 4) {
                binary = bin[i] + binary; // append to front to avoid reversal
                digits++;
            } else if (digits == 4) {
                size -= 4;
                digits = 0;
                // convert binary string to int
                int decimal = stoi(binary, nullptr, 2);
                result = hexa[decimal] + result; // prepend to keep order
                binary = "";
                i++; // recheck current bit (not yet used)
            }
        } else {
            binary = bin.substr(0, size); // last group (less than 4 bits)
            while (binary.length() < 4) binary = '0' + binary;
            int decimal = stoi(binary, nullptr, 2);
            result = hexa[decimal] + result;
            break;
        }
    }

    cout << result << endl;
    return 0;
}
