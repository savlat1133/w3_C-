// Swap first and last digits of any number

#include <iostream>

using namespace std;

int digits(int number);

int main()
{
    cout << "Swap First and Last Digit: " << endl;
    cout << "-------------------------------" << endl;

    cout << "Input any number: " << endl;
    string input;

    cin >> input;

    char temp = input[input.length() - 1];

    input[input.length() - 1] = input[0];
    input[0] = temp;

    cout << input << endl;


    return 0;
}
