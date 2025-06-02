// 4. Within 10 of 100 or 200

#include <iostream>

using namespace std;

int main() {
    cout << "Within 10 of 100 or 200" << endl;
    cout << "-------------------------------" << endl;

    int number;

    cout << "Input: " << endl;

    while (cin >> number) {
        if (abs(number - 100) <= 10 || abs(number - 200) <= 10) {
            cout << 1 << endl;
        }else {
            cout << 0 << endl;
        }
    }

    return 0;
}
