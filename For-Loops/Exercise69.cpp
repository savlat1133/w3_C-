// 69. Square Matrix with Diagonal Zero and Incrementing Off-Diagonals

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Square matrix with diagonal zero" << endl;
    cout << "-------------------------------" << endl;

    int row;

    cout << "Input the number of rows in the matrix: ";
    cin >> row;

    for (int i = 0; i < row; i++) {
        int num = i;
        for (int j = 0; j < row; j++) {
            cout << num << " ";
            if (i > j) {
                num--;
            }else {
                num++;
            }
        }
        cout << endl;
    }

    return 0;
}
