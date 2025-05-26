// 13. Sum of the Series (1) + (1+2) + ... + (1+2+...+n)

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
        for (int j = 1; j <= i; j++) {
            if (i > 1 && j < i){ cout << j << " + ";}
            else {
                cout << j;
            }
        }
        sum += i;
        cout << " = " << sum << endl;
    }

    cout << "The sum of the series is: " << sum << endl;

    return 0;
}
