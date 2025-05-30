// 48. Alphabet Pyramid
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

    int letter = 65;
    int columns = 1;
    int space = 1;

    for (int i = 1; i < rows; i++) {
        space += 2;
    }

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j < space; j++) {
            cout << " ";
        }
        space -= 2;

        for (int k = 1; k <= columns; k++) {
            if (k > 1) {
                if (k <= columns/2 + 1) {
                    letter++;
                }else if ( k > columns/2 + 1) {
                    letter--;
                }
            }
            char c = letter;
            cout << c << " ";
        }
        cout << endl;
        columns += 2;
        letter = 65;
    }


    return 0;
}
