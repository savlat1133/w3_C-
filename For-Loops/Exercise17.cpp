// 17. Print a Square Pattern with '#' Character



#include <iostream>

using namespace std;

int main()
{
    cout << "Print a square pattern with # character" << endl;
    cout << "-------------------------------" << endl;
    int side;

    cout << "Input the number of characters for a side: ";
    cin >> side;

    for (int i = 1; i <= side; i++) {
        for (int j = 1; j <= side; j++) {
            cout << "# ";
        }
        cout << endl;
    }

    return 0;
}
