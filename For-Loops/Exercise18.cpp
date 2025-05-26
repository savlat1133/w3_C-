// 18. Display the Cube of Numbers Up to an Integer

#include <iostream>

using namespace std;

int main()
{
    cout << "Display the cube of numbers up to an integer" << endl;
    cout << "-------------------------------" << endl;
    int number;

    cout << "Input the number of terms: ";
    cin >> number;

    for (int i = 1; i <= number; i++) {
        cout << "Number is : " << i << " and the of " << i << " is: " << pow(i, 3) << endl;
    }

    return 0;
}
