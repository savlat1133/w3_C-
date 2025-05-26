// 15. Process Positive Integers Until Termination Signal (-1)

#include <iostream>

using namespace std;


int main()
{
    cout << "Process positive integers" << endl;
    cout << "-------------------------------" << endl;

    int num;
    double sum = 0.0;
    int count = 0;
    int max = INT_MIN;
    int min = INT_MAX;


    while (cin >> num && num != -1) {
        if (num >= 0) {
            sum += num;
            count++;
            if (num > max) {
                max = num;
            }
            if (num < min) {
                min = num;
            }
        }
    }
    cout << "The maximum value is: " << max << endl;
    cout << "The minimum value is: " << min << endl;
    cout << "The average is: " << sum / count << endl;

    return 0;
}
