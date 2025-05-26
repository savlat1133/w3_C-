// 16. List Non-Prime Numbers from 1 to Upper Bound
#include <iostream>

using namespace std;

bool prime(int n);

int main()
{
    cout << "List non prime number from 1 to upper bound" << endl;
    cout << "-------------------------------" << endl;

    int upLimit;

    cout << "Input the upperlimit: ";
    cin >> upLimit;

    cout << "The non-prime numbers are: " << endl;
    for (int i = 2; i <= upLimit; i++) {
        if (!prime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}

bool prime(int n) {
    if (n <= 1)return false;
    else if (n == 2)return true;
    else {
        for (int i = n - 1; i >= 2; i--) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
}
