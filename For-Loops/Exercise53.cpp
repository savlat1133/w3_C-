// 53. Right-Angle Triangle with Right-Justified Numbers

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

    int num = rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = i; j < rows; j++) {
            cout << " ";
            num--;
        }

        for (int j = num; j >= 1; j--) {
            cout << j;
        }
        num = rows;
        cout << endl;

    }

    return 0;
}
