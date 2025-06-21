// 23. Same Last Digit for Integers

#include <iostream>
using namespace std;

bool lastDigitCheck(int number1, int number2);

int main() {
    cout << "Same last digit for integer" << endl;
    cout << "-------------------------------------------" << endl;


    cout << lastDigitCheck(123, 456) << endl;
    cout << lastDigitCheck(12, 522) << endl;
    cout << lastDigitCheck(7, 87) << endl;
    cout << lastDigitCheck(12, 45) << endl;




    return 0;
}

bool lastDigitCheck(int number1, int number2) {
    int lastDigit1 = number1 % 10;
    int lastDigit2 = number2 % 10;
    if (lastDigit1 == lastDigit2) {
        return true;
    }
    return false;
}
