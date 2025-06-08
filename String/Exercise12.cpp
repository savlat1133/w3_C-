// 12. Insert Dash Between Two Odd Numbers in a String

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Insert dash between two odd numbers in a string" << endl;
    cout << "-------------------------------------------" << endl;

    string input;

    cout << "Insert the input: ";
    cin >> input;

    for (int i = 0; i < input.length(); i++) {
        int num1 = input[i] - '0';
        int num2 = input[i + 1] - '0';

        cout << input[i];
        if (num1 % 2 != 0 && num2 % 2 != 0 ) {
            cout << "-";
        }
    }
    return 0;
}
