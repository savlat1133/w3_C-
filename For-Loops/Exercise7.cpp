
// 7. Find the Factorial of a Number
#include <iostream>

using namespace std;

int factorial(int n);

int main()
{
    cout << "Find factorial" << endl;
    cout << "-------------------------------" << endl;

    int number;

    cout << "Input a number to find the factorial: ";
    cin >> number;

    cout << "The factorial of the given number is: " << factorial(number) << endl;

    return 0;
}

int factorial(int n) {
    if (n == 1) return 1;
    else return n * factorial(n - 1);
}
