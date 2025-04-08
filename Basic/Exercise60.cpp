// Write a C++ program to add two binary numbers.


#include <iostream>

using namespace std;

int countDigits(int number);

int main() {

    cout << "Addition of two binary numbers: " << endl;
    cout << "--------------------------------" << endl;

    int binary1, binary2;
    int i = 0, carry = 0;
    int sum[20];

    cout << "Input the 1st binary number: ";
    cin >> binary1;
    cout << "Input the 2nd binary number: ";
    cin >> binary2;

    while (binary1 != 0 || binary2 != 0) {
        int bit1 = binary1 % 10;
        int bit2 = binary2 % 10;

        sum[i] = (bit1 + bit2 + carry) % 2;
        carry = (bit1 + bit2 + carry) / 2;

        binary1 = binary1 / 10;
        binary2 = binary2 / 10;
        i++;
    }

    if (carry != 0) {
        sum[i] = carry;
        i++;
    }

    if (carry != 0) {
        sum[i] = carry % 2;
        i++;
    }

    cout << "The sum of the two binary numbers is: " << endl;
    for (int j = i - 1; j >= 0; j--) {
        cout << sum[j];
    }

    cout << endl;

    return 0;
    
}
