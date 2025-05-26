// 22. Display n Terms of a Harmonic Series and Their Sum

#include <iostream>

using namespace std;

int main()
{
    cout << "Display n terms of a harmonic series and their sum" << endl;
    cout << "-------------------------------" << endl;
    int terms;

    cout << "Input number of terms: ";
    cin >> terms;
    double sum = 0.0;

    for (int i = 1; i <= terms; i++) {
        cout << "1/" << i;
        sum += 1.0/i;
        if (i < terms) {
            cout << " + ";
        }
    }

    cout << endl;

    cout << "The sum of the series upto 5 terms: " << sum << endl;

    return 0;
}
