// 84. Sum of the Digits of an Integer Using a Function

#include <iostream>
#include <string>
using namespace std;

int sumDigits(int n);

int main() {
    cout << "Sum of the digits of an integer using a function" << endl;
    cout << "-------------------------------------------" << endl;

    int number;
    cout << "input any number: ";
    cin >> number;

    cout << "The sum of the digits of the number " << number << " is: " << sumDigits(number) << endl;

    return 0;
}

int sumDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}
