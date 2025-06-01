// 59. Frequency of Each Digit in an Integer
#include <iostream>

using namespace std;

bool prime(int n);
int length;
int main()
{
    cout << "Frequency of each digit in an integer" << endl;
    cout << "-------------------------------" << endl;

    int number;

    cout << "Input any number: ";
    cin >> number;

    int temp = number;

    for (int i = 0; i <= 10; i++) {
        int count = 0;
        while (temp != 0) {
            int digit = temp % 10;
            if (i == digit) {
                count++;
            }
            temp /= 10;
        }
        temp = number;
        cout << "The frequency of " << i << " = " << count << endl;
    }

    return 0;
}
