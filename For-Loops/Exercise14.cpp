// 14. Sum of Series 1 - X^2/2! + X^4/4! - ... up to nth Term

#include <iostream>

using namespace std;

double factorial(int n);

int main()
{
    cout << "Sum of the series" << endl;
    cout << "-------------------------------" << endl;

    double sum = 0;
    double x;
    int n;

    cout << "Input the value of X: ";
    cin >> x;
    cout << "Input the value of nth term: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int power = 2 * i;
        double term = pow(-1, i) * pow(x, power) / factorial(power);
        cout << "term " << (i + 1) << " value is: " << term << endl;
        sum += term;
    }
    cout << "The sum of the above series is: " << sum << endl;

    return 0;
}

double factorial(int n) {
    if (n == 1) return 1.0;
    return n * factorial(n - 1);
}
