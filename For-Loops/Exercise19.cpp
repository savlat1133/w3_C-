// 19. Display Multiplication Table Vertically from 1 to n

#include <iostream>

using namespace std;

int main()
{
    cout << "Display the cube of numbers up to an integer" << endl;
    cout << "-------------------------------" << endl;
    int number;

    cout << "Input the number of terms: ";
    cin >> number;
    cout << "Multiplication table from 1 to " << number << endl;

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= number; j++) {
            cout << j << "x" << i << "=" << j * i << " ";
        }
        cout << endl;
    }

    return 0;
}
