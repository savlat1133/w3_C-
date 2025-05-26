// 4. Find Perfect Numbers Between 1 and 500



#include <iostream>

using namespace std;

int main()
{
    cout << "Find Perfect Numbers" << endl;
    cout << "-------------------------------" << endl;

    int sum = 0;

    cout << "The perfect numbers are" << endl;
    for (int i = 1; i <= 500; i++) {
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            cout << sum << endl;
        }
        sum = 0;

    }


    return 0;
}
