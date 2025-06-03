// 76. Octal to Decimal Conversion

#include <iostream>

using namespace std;

int main() {
    cout << "Octal conversion" << endl;
    cout << "-------------------------------" << endl;

    string octal;

    cout << "Input any octal number: ";
    cin >> octal;

    int len = octal.length();
    int sum = 0;

    for (int i = len - 1; i >= 0; i--) {
        int num = octal[len - i - 1] - '0';
        sum +=  num * pow(8, i);
    }

    cout << "The equivalent decimal number: " << sum << endl;



    return 0;
}
