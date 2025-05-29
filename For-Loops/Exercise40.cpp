// 40. Pyramid Pattern with Asterisks

#include <iostream>

using namespace std;

bool prime(int n);
int length;
int main()
{
    cout << "Display a square pattern with '#' character" << endl;
    cout << "-------------------------------" << endl;

    int n;

    cout << "Input number of rows: ";
    cin >> n;

    int columns = n;

    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= columns; k++) {
            cout << " ";
        }
        columns--;
        for (int j = 1; j <= i; j++) {
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}
