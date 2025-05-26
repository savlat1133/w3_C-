// 10. Sum of the Digits of a Given Number

#include <iostream>

using namespace std;


int main()
{
    cout << "Sum of digits" << endl;
    cout << "-------------------------------" << endl;

    int sum = 0;
    int number;
    cout << "Enter a number: ";
    cin >> number;

    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    cout << "Sum of digits: " << sum << endl;

    return 0;
}
