// 49. Digit Pyramid Pattern

#include <iostream>

using namespace std;

bool prime(int n);
int length;
int main()
{
    cout << "Number pyramid" << endl;
    cout << "-------------------------------" << endl;

    int rows;
    cout << "Input the number of rows: ";
    cin >> rows;

    int space = rows;
    int columns = 1;
    int number = 0;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }
        space--;

        for (int k = 1; k <= columns; k++) {
            if (k <= (columns + 1)/2) {
                number++;
            }else {
                number--;
            }
            cout << number;
        }
        columns += 2;
        cout << endl;
    }
    return 0;
}
