
// Quotient and Remainder Calculation

#include <iostream>

using namespace std;

int main() {
    cout << "Compute quotient and remainder :" << endl;
    cout << "----------------------------------------------" << endl;

    int dividend, divisor, quotient, remainder;
    cout << "Input the dividend : ";
    cin >> dividend;
    cout << "Input the divisor : ";
    cin >> divisor;
    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "The quotient of the visions is : " << quotient << endl;
    cout << "The remainder of the visions is : " << remainder << endl;

    return 0;
}
