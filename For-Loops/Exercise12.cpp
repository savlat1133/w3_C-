// 12. Sum of the Series (1*1) + (2*2) + ... + (n*n)

#include <iostream>

using namespace std;


int main()
{
    cout << "Sum of the series" << endl;
    cout << "-------------------------------" << endl;

    double sum = 0;
    int number;
    cout << "Input the value for nth term: ";
    cin >> number;

    for (int i = 1; i <= number; i++) {
        sum += i * i;
        cout << i << " * " << i << " = " << sum << endl;
    }

    cout << "The sum of the series is: " << sum << endl;

    return 0;
}
