// 55. Odd Number Symmetric Pyramid with Row Count



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

    int columns = 1;
    int number = 0;

    for (int i = 1; i < rows; i++) {
        columns += 2;
    }

    for (int i = 1; i <= rows; i++) {

        for (int k = 1; k <= i; k++) {
            cout << " ";
        }

        for (int j = 1; j <= columns; j++) {
            if (j <= (columns + 1) / 2) {
                number++;
            }else {
                number--;
            }
            cout << number;
        }
        number = 0;
        cout << endl;
        columns -= 2;
    }

    return 0;
}

