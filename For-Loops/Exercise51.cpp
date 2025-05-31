// 51. Right-Justified Descending Pattern

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


    for (int i = rows; i >= 1; i--) {
        for (int k = 1; k <= rows - i; k++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
