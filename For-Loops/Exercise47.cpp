// 47. Number Pyramid with 1 at Ends and Row Number in Middle

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
    int number = 1;
    int space = 1;

    for (int i = 1; i < rows; i++) {
        space += 2;
    }

    for (int i = 1; i <= rows; i++) {

        for (int k = space; k > 1; k--) {
            cout << " ";
        }
        space -= 2;

        for (int j = 1; j <= columns; j++) {
            cout << number << " ";
            if (columns > 1) {
                if ( j <= columns / 2) {
                    number++;
                }else if (j > columns / 2) {
                    number--;
                }
            }
        }
        number = 1;
        cout << endl;
        columns += 2;
    }

    return 0;
}
