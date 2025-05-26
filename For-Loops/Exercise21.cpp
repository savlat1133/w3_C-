// 21. Sum of n Even Natural Numbers

#include <iostream>

using namespace std;

int main()
{
    cout << "Sum of n even natural numbers" << endl;
    cout << "-------------------------------" << endl;
    int terms;

    cout << "Input number of terms: ";
    cin >> terms;
    int sum = 0;

    cout << "The odd numbers are: ";
    for (int i = 2; i <= terms * 2; i+=2) {
        cout << i << " ";
        sum += i;
    }
    cout << endl;
    cout << "The sum of even natural numbers upto "<< terms << " terms: " << sum << endl;

    return 0;
}
