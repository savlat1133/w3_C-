// 33. Express a Number as the Sum of Two Primes

#include <iostream>

using namespace std;

bool prime(int n);

int main()
{
    cout << "Express a number as the sum of two primes" << endl;
    cout << "-------------------------------" << endl;

    int num;
    cout << "Input a positive integer: ";
    cin >> num;

    for (int i = 2; i < num; i++) {
        for (int j = num; j >= i; j--) {
            if (prime(i) && prime(j)) {
                if (i + j == num) {
                    cout << num << " = " << i << " + " << j << endl;
                }
            }
        }
    }



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

