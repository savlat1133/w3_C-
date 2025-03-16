// Rectangular Pattern of Single Digit


#include <iostream>

using namespace std;

int main() {
    cout << "Make a rectangular shape by a single digit number :" << endl;
    cout << "----------------------------------------------" << endl;

    int number;
    cout << "Input a number : ";
    cin >> number;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            if (j == 0 || j == 3 || i == 0 || i == 5) {
                cout << number;
            }else {
                cout << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}
