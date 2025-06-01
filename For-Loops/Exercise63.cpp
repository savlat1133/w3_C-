// 63. Print All Factors of a Number

#include <iostream>

using namespace std;

int main()
{
    cout << "Print all factors of a number" << endl;
    cout << "-------------------------------" << endl;

    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "The factors are: ";
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            cout << i << " ";
        }
    }
    
    return 0;
}
