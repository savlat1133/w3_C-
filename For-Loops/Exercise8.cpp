// 8. Find the Last Prime Number Before a Given Number

#include <iostream>

using namespace std;

bool prime(int n);

int main()
{
    cout << "Find the last prime number before a given number" << endl;
    cout << "-------------------------------" << endl;
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int pr;

    for (int i = 2; i < number; i++) {
        if (prime(i)) {
            pr = i;
        }
    }

    cout << pr << " is the last prime number before " << number << endl;

    return 0;
}

bool prime(int n) {
    for (int i = n - 1; i >= 2; i--) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
