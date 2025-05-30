// 46. Pascal's Triangle as Right-Angle Triangle

#include <iostream>

using namespace std;

bool prime(int n);
int length;
int main()
{
    cout << "Display a square pattern with '#' character" << endl;
    cout << "-------------------------------" << endl;

    int rows;

    cout << "Input number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        // for (int space = 0; space < rows - i - 1; space++) {
        //     cout << " ";
        // }

        int val = 1;
        for (int j = 0; j <= i; j++) {
            cout << val << " ";
            val = val * (i - j) / (j + 1);  // Binomial coefficient logic
        }

        cout << endl;
    }
    return 0;
}
