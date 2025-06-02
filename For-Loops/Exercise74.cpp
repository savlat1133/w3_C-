// 74. Binary to Hexadecimal Conversion
#include <iostream>

using namespace std;

int digits(int n);

int main() {
    cout << "Binary to decimal conversion" << endl;
    cout << "-------------------------------" << endl;

    string binary;
    string hex = "0123456789ABCDEF";
    int decimal = 0;

    cout << "Input binary number: ";
    cin >> binary;

    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[binary.length() - i - 1] == '1') {
            decimal += pow(2, i);
        }
    }

    string hexa = "";

    while (decimal != 0) {
        int reminder = decimal % 16;
        hexa += hex[reminder];
        decimal = decimal / 16;
    }

    reverse(hexa.begin(), hexa.end());

    cout << "The hexadecimal value: " << hexa << endl;


    return 0;
}
