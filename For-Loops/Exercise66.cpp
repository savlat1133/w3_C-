// 66. Checkerboard Pattern with "black" and "white"

#include <iostream>

using namespace std;

int main()
{
    cout << "Checkerboard pattern" << endl;
    cout << "-------------------------------" << endl;

    int rows;

    cout << "Input number of rows: ";
    cin >> rows;

    int change = 0;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            if (change == 0) {
                cout << "black";
                change = 1;
            }else {
                cout << "white";
                change = 0;
            }
            if (j >= 1 && j < rows) {
                cout << "-";
            }
        }
        cout << endl;
    }


    return 0;
}
