// 43. Floyd's Triangle

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

    int num = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1 + num; j <= i + num; j++) {
            if (j % 2 == 0) {
                cout << "1";
            }else {
                cout << "0";
            }
        }
        if (num == 1) {
            num = 0;
        }else {
            num = 1;
        }
        cout << endl;
    }


    return 0;
}
