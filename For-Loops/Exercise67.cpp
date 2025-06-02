// 67. Sum of Series 1.2 + 2.3 + 3.4 + ...

#include <iostream>

using namespace std;

int main() {
    cout << "Sum of series" << endl;
    cout << "-------------------------------" << endl;

    int num;
    double sum = 0;

    cout << "Input the last integer between 1 to 98 without fraction you want to add: ";
    cin >> num;


    for (int i = 1; i <= 10; i++) {
        cout << i << "." << i + 1;
        if (i < 10) {
            cout << " + ";
        }
        sum += i + ( i + 1 < 10 ? (i + 1) / 10.0 : (i + 1) / 100.0 );
    }
    cout << endl;
    cout << "The sum of series = " << sum << endl;


    return 0;
}
