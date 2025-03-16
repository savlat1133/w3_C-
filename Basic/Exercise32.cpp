// Check Number Sign (Positive, Negative, Zero)




#include <iostream>

using namespace std;

int main() {
    cout << "Check whether a number is positive, negative or zero :" << endl;
    cout << "----------------------------------------------" << endl;

    int number;
    cout << "Input a number: ";
    cin >> number;

    if (number > 0) {
        cout << "The entered number is positive." << endl;
    } else if (number < 0) {
        cout << "The entered number is negative." << endl;
    } else {
        cout << "The entered number is zero." << endl;
    }

    return 0;
}
