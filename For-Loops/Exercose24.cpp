// 24. Sum of the Series [1 + x + x^2/2! + x^3/3! + ...]

#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 1) return 1;
    else return n * factorial(n - 1);
}

int main()
{
    cout << "Sum of the series" << endl;
    cout << "-------------------------------" << endl;

    double sum = 1;
    int x, terms;

    cout << "Input the value of x: ";
    cin >> x;
    cout << "Input number of terms: ";
    cin >> terms;

    for (int i = 1; i < terms; i++) {
        sum += pow(x, i)/factorial(i);
    }
    cout << "The sum is : " << sum << endl;

    return 0;
}
