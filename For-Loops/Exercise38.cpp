// 38. Right-Angle Triangle Pattern with Increasing Numbers

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

    int columns = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << columns << " ";
            columns++;
        }
        cout << endl;
    }

    return 0;
}
