// 9. Find the Greatest Common Divisor (GCD) of Two Numbers

#include <iostream>

using namespace std;

int main()
{
    cout << "Find gcd of two numbers" << endl;
    cout << "-------------------------------" << endl;

    int num1, num2;
    int gcd = 0;
    cout << "Input the first number: ";
    cin >> num1;
    cout << "Input the second number: ";
    cin >> num2;

    for (int i = 1; i <= num2; i++) {
        if ( num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }
    cout << "GCD of two numbers: " << gcd << endl;


    return 0;
}
