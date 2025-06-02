// 3. Check 30 or Sum 30

#include <iostream>

using namespace std;

int main() {
    cout << "Check 30 or sum 30" << endl;
    cout << "-------------------------------" << endl;

    int num1, num2;

    cout << "Input: ";
    cin >> num1 >> num2;

    if (num1 == 30 || num2 == 30 || num1 + num2 == 30) {
        cout << 1 << endl;
    }else {
        cout << 0 << endl;
    }

    return 0;
}
