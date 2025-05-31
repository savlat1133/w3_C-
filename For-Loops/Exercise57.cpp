

#include <iostream>
// 57. Sum of First and Last Digits of a Number

using namespace std;

bool prime(int n);
int length;
int main()
{
    cout << "First and Last digit of a number" << endl;
    cout << "-------------------------------" << endl;

    int num;
    int lastNum = 0, firstNum = 0;
    int digit = 0;

    cout << "Input any number: ";
    cin >> num;
    int tempNum = num;

    while (num != 0) {
        int number = num % 10;
        if (digit == 0) {
            lastNum = number;
            digit++;
        }
        if (number != 0) {
            firstNum = number;
            digit++;
            num = num / 10;
        }
    }

    cout << "The first digit of " << tempNum << " is: " << firstNum << endl;
    cout << "The last digit of " << tempNum << " is: " << lastNum << endl;
    cout << "The sum of first and last digit of " << tempNum << " is: " << lastNum + firstNum << endl;


    return 0;
}
