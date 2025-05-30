// 44. Diamond Pattern

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
        for (int j = 1; j <= columns; j++) {
            cout << " ";
        }
        columns--;
        for (int k = 1; k <= stars; k++) {
            cout << "*";
        }
        stars += 2;
        cout << endl;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << " ";
        }
        columns--;
        stars -= 2;
        for (int k = stars; k > 2; k--) {
            cout << "*";
        }

        cout << endl;
    }


    return 0;
}
