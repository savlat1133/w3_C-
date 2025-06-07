// 79. Hexadecimal to Decimal Conversion

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Hex to decimal conversion" << endl;
    cout << "-------------------------------------------" << endl;

    string hexadecimal = "0123456789ABCDEF";

    string hex;
    cout << "Input any 32-bit hexadecimal number: ";
    cin >> hex;

    int decimal = 0;
    int power = hex.length() - 1;

    for (int i = 0; i < hex.length(); i++) {
        int c = hexadecimal.find(hex[i]);
        decimal += c * pow(16, power);
        power--;
    }

    cout << decimal << endl;


    return 0;
}
