// 60. Convert a Number to Words (Digit by Digit)

#include <iostream>

using namespace std;

int main()
{
    cout << "Convert a number to words" << endl;
    cout << "-------------------------------" << endl;

    int number;

    cout << "Input any number: ";
    cin >> number;

    string numberString = to_string(number);

    for (char num : numberString) {
        switch (num) {
            case '0': cout << "Zero "; break;
            case '1': cout << "One "; break;
            case '2': cout << "Two "; break;
            case '3': cout << "Three "; break;
            case '4': cout << "Four "; break;
            case '5': cout << "Five "; break;
            case '6': cout << "Six "; break;
            case '7': cout << "Seven "; break;
            case '8': cout << "Eight "; break;
            case '9': cout << "Nine "; break;
            default: cout << "Error "; break;

        }
    }

    return 0;
}
