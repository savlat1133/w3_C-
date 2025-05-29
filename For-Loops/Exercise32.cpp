// 32. Sum of a G.P. Series

#include <iostream>

using namespace std;


int main()
{
    cout << "Sum of an g.p. series" << endl;
    cout << "-------------------------------" << endl;

    int startNum, items, ratio;
    int sum = 0;

    cout << "Input the starting number of the G.P series: ";
    cin >> startNum;
    cout << "Input the number of items for the G.P series: ";
    cin >> items;
    cout << "Input the common ratio of the G.P series: ";
    cin >> ratio;

    cout << "The numbers for the G.P series: " << endl;
    for (int i = 1; i <= items; i++) {
        cout << startNum << " ";
        sum += startNum;
        startNum *= ratio;
    }
    cout << endl;

    cout << "The sum of the G.P series is: " << sum << endl;

    return 0;
}
