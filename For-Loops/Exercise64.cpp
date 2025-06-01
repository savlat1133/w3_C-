// 64. One's Complement of a Binary Number
#include <iostream>

using namespace std;

int main()
{
    cout << "One's complement of a binary number" << endl;
    cout << "-------------------------------" << endl;

    int bitBinary;

    cout << "Input a 8 bit binary value: ";
    cin >> bitBinary;
    cout << "The original binary = " << bitBinary << endl;

    cout << "After ones complement the number = ";

    string strBinary = to_string(bitBinary);

    for (char c : strBinary) {
        if (c == '1') {
            cout << '0';
        }else {
            cout << '1';
        }
    }
