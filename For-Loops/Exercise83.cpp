// 83. Sum of the Digits of an Integer

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Sum of the digits of an integer" << endl;
    cout << "-------------------------------------------" << endl;

    int number;
    cout << "input any number: ";
    cin >> number;

    int temp = number;

    int sum = 0;

    while (number != 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    cout << "The sum of the digits of the number " << temp << " is: " << sum << endl;

    return 0;
}
