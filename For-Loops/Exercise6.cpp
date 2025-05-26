// 6. Find Prime Numbers Within a Range

#include <iostream>

using namespace std;

bool prime(int n);

int main()
{
    cout << "Check prime number within a range" << endl;
    cout << "-------------------------------" << endl;

    int start, end;
    int count = 0;

    cout << "Input number for starting range: ";
    cin >> start;
    cout << "Input number for ending range: ";
    cin >> end;

    cout << "The prime numbers between " << start << " and " << end << " are:"<< endl;
    for (int i = start; i <= end; i++) {
        if (i > 2) {
            if (prime(i)) {
                cout << i << " ";
                count++;
            }
        }else if (i == 2) {
            cout << i << " ";
            count++;
        }
    }
    cout << endl;
    cout << "The total number of prime numbers between " << start << " and " << end << " is: " << count << endl;

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
