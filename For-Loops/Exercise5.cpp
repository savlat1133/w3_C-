// 5. Check Whether a Number is Prime or Not

#include <iostream>

using namespace std;

int main()
{
    cout << "Check prime number" << endl;
    cout << "-------------------------------" << endl;

    cout << "Input a number to check prime or not: ";
    int number;
    cin >> number;

    bool prime = true;
    for (int i = number - 1; i >= 2; i--) {
        if (number % i == 0) {
            prime = false;
        }
    }

    if (prime) {
        cout << "The entered number is a prime number.";
    }else {
        cout << "The entered number is not a prime number.";
    }
    
    return 0;
}
