// 62. Power Calculation Using a For Loop

#include <iostream>

using namespace std;

int main()
{
    cout << "Power calculation using a for loop" << endl;
    cout << "-------------------------------" << endl;

    int base, exponent;
    int result = 1;

    cout << "Input base: ";
    cin >> base;
    cout << "Input exponent: ";
    cin >> exponent;

    cout << base << " ^ " << exponent << " = ";

    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }
    cout << result << endl;

    return 0;
}
