// 25. Sum of the Series [x - x^3 + x^5 - ...]

#include <iostream>

using namespace std;


int main()
{
    cout << "Sum of the series" << endl;
    cout << "-------------------------------" << endl;

    int sum = 0;
    int x, terms;

    cout << "Input the value of x: ";
    cin >> x;
    cout << "Input number of terms: ";
    cin >> terms;
    bool sign = true;

    for (int i = 1; i < terms * 2; i+=2) {
        int value = static_cast<int>(pow(x, i));
        if (!sign) {
            value = -value;
        }
        sum += value;
        cout << value << endl;

        sign = !sign;
    }

    cout << "The sum of the series is upto: " << terms << " is: " << sum << endl;


    return 0;
}
