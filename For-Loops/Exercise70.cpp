// 70. Decimal to Binary Conversion

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Decimal to binary conversion" << endl;
    cout << "-------------------------------" << endl;

    int decimal;

    cout << "Input a decimal number: ";
    cin >> decimal;

    string binary = "";

    while (decimal != 0) {
        int remainder = decimal % 2;
        binary += (remainder ? '1' : '0');
        decimal /= 2;
    }
    reverse(binary.begin(), binary.end());

    cout << "The binary number is: " << binary << endl;

    return 0;
}
