// 73. Binary to Decimal Conversion

#include <iostream>
#include <cmath>

using namespace std;

int digits(int n);

int main() {
    cout << "Binary to decimal conversion" << endl;
    cout << "-------------------------------" << endl;

    string binary;
    int decimal = 0;

    cout << "Input binary number: ";
    cin >> binary;

    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[binary.length() - i - 1] == '1') {
            decimal += pow(2, i);
        }
    }

    cout << "The decimal number: " << decimal << endl;
    

    return 0;
}
