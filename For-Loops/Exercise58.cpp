// 58. Product of the Digits of a Number

#include <iostream>

using namespace std;

bool prime(int n);
int length;
int main()
{
    cout << "Product of the digits of a number" << endl;
    cout << "-------------------------------" << endl;

    int number;
    int product = 1;

    cout << "Input a number: ";
    cin >> number;

    int tempNumber = number;

    while (number != 0) {
        int num = number % 10;
        product *= num;
        number /= 10;
    }

    cout << "The product of digits of " << tempNumber << " is: " << product << endl;

    return 0;
}
