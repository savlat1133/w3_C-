// 39. Pyramid Pattern with Increasing Numbers

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

    int numbering = 1;
    int columns = n;

    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= columns; k++) {
            cout << " ";
        }
        columns--;
        for (int j = 1; j <= i; j++) {
            cout << numbering << " ";
            numbering++;
        }
        cout << endl;
    }

    return 0;
}
