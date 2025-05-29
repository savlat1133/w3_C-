// 31. Sum of an A.P. Series

#include <iostream>

using namespace std;


int main()
{
    cout << "Sum of an a.p. series" << endl;
    cout << "-------------------------------" << endl;

    int startNum, items, diff;
    int sum = 0;

    cout << "Input the starting number of the A.P. series: ";
    cin >> startNum;
    cout << "Input the number of items for the A.P. series: ";
    cin >> items;
    cout << "Input the common difference of A.P. series: ";
    cin >> diff;


    cout << "The sum of the A.P. series is: " << endl;
    for (int i = 1; i <= items; i++) {
        cout << startNum;
        sum += startNum;
        startNum += diff;
        if (i >= 1 && i < items) {
            cout << " + ";
        }
    }
    cout << " = " << sum << endl;

    return 0;
}
