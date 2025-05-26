// 2. Sum of First 10 Natural Numbers

#include <iostream>

using namespace std;

int main()
{
    cout << "First 10 Natural Numbers" << endl;
    cout << "-------------------------------" << endl;

    cout << "The natural numbers are: " << endl;

    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
        sum += i;
    }
    cout << endl;

    cout << "The sum of first 10 natural numbers: " << sum << endl;

    return 0;
}
