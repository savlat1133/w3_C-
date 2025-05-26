// 20. Sum of n Odd Natural Numbers

#include <iostream>

using namespace std;

int main()
{
    cout << "Sum of n odd natural numbers" << endl;
    cout << "-------------------------------" << endl;
    int terms;

    cout << "Input number of terms: ";
    cin >> terms;
    int sum = 0;

    cout << "The odd numbers are: ";
    for (int i = 1; i < terms * 2; i+=2) {
        cout << i << " ";
        sum += i;
    }
    cout << endl;
    cout << "The sum of odd natural numbers upto "<< terms << " terms: " << sum << endl;

    return 0;
}
