// 42. Pyramid Asterisk Pattern with Odd Numbers

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
    int stars = 1;

    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= columns; k++) {
            cout << " ";
        }
        columns--;


        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        stars += 2;
        cout << endl;
    }

    return 0;
}
