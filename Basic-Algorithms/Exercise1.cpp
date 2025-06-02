// 1. Triple Sum for Same Values

#include <iostream>

using namespace std;

int main()
{
    cout << "Triple sum for same values" << endl;
    cout << "-------------------------------" << endl;

    int num1, num2;
    int sum = 0;

    cout << "Input: ";
    cin >> num1 >> num2;



    if (num1 == num2) {
        sum = num1 + num2;
        sum *= 3;
    }else {
        sum = num1 + num2;
    }

    cout << sum << endl;

    return 0;
}
