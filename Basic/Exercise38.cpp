// Multiplication Table for Input Number


#include <iostream>

using namespace std;

int main() {
    cout << "Print the multiplication table of a number upto 10: " << endl;
    cout << "----------------------------------------------" << endl;
    int number;

    cout << "Input a number : ";
    cin >> number;

    for (int i = 1; i <= 10; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    
    return 0;
}
