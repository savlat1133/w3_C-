// 68. First N Numbers for a Specific Base

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "First n numbers for a specific base" << endl;
    cout << "-------------------------------" << endl;

    int base, term, quotient, remainder, num;

    cout << "Input the number of term: ";
    cin >> term;
    cout << "Input the base: ";
    cin >> base;



    for (int i = 1; i <= term; i++)
    {
        remainder = i % base; // Calculate remainder when 'i' is divided by 'bs' (base)
        quotient = i / base; // Calculate quotient when 'i' is divided by 'bs' (base)
        num = quotient * 10 + remainder; // Convert the number 'i' to the specified base and store it in 'num'
        cout << num << "  "; // Display the number in the specified base
    }
    cout << endl;

    return 0;
}
