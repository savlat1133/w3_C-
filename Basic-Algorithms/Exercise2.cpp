// 2. Absolute Difference with 51

#include <iostream>

using namespace std;

int main()
{
    cout << "Triple sum for same values" << endl;
    cout << "-------------------------------" << endl;

    int num1;

    cout << "Input: ";
    cin >> num1;

    int absolute = abs(num1 - 51);

    if (num1 > 51) {
        absolute *= 3;
    }

    cout << absolute << endl;

    return 0;
}
