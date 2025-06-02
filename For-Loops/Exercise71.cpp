// 71. Decimal to Hexadecimal Conversion


#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Decimal to binary conversion" << endl;
    cout << "-------------------------------" << endl;

    string hex = "0123456789ABCDEF";

    int decimal;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    string hexa = "";

    while (decimal != 0) {
        int remainder = decimal % 16;
        hexa += hex[remainder];
        decimal /= 16;
    }

    reverse(hexa.begin(), hexa.end());

    cout << "The hexadecimal number is : " << hexa << endl;

    return 0;
}
