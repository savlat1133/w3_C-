// 54. Pyramid Pattern: Power of 2 Series

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
    int space = 1;
    int number = 1;

    for (int i = 1; i <= rows; i++) {
        space += 2;
    }


    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }
        space -= 2;

        for (int k = 1; k <= columns; k++) {
            if (k > 1) {
                if (k <= (columns + 1) / 2) {
                    number *= 2;
                }else {
                    number /= 2;
                }
            }
            cout << number << " ";
        }
        number = 1;
        columns += 2;
        cout << endl;
    }

    return 0;
