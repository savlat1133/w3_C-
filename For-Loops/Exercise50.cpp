// 50. Descending Column Pattern

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


    for (int i = 1; i <= rows; i++) {
        for (int j = i; j <= rows; j++) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
