// 23. Sum of the Series [9 + 99 + 999 + ...]

#include <iostream>

using namespace std;

int main()
{
    cout << "Sum of the series" << endl;
    cout << "-------------------------------" << endl;
    int terms;

    cout << "Input number of terms: ";
    cin >> terms;
    int sum = 0;

    int number = 10;

    for (int i = 1; i <= terms; i++) {
        int value = pow(number, i) - 1;
        sum += value;
        cout << value << " ";
    }
    cout << endl;

    cout << "The sum of the series " << sum << endl;

    return 0;
}
