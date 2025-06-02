// 75. Binary to Octal Conversion

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

    string octa = "";

    while (decimal != 0) {
        int reminder = decimal % 8;
        octa += to_string(reminder);
        decimal = decimal / 8;
    }

    reverse(octa.begin(), octa.end());

    cout << "The octa value: " << octa << endl;


    return 0;
}
