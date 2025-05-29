// 30. Display the Number in Reverse Order

#include <iostream>

using namespace std;


int main()
{
    cout << "Display the number in reverse order" << endl;
    cout << "-------------------------------" << endl;

    int number;

    cout << "Input a number: ";
    cin >> number;

    int reverse = 0;

    while (number != 0) {
        int reminder = number % 10;
        reverse = reverse * 10 + reminder;
        number /= 10;
    }

    cout << "The reverse number is: " << reverse;


    return 0;
}
