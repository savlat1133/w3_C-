

// Test Type Casting in C++
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Formatting the output using type casting: " << endl;
    cout << "----------------------------------------------" << endl;
    cout << fixed << setprecision(1);
    cout << "Test explicit type casting :" << endl;

    int i1 = 4, i2 = 8;

    cout << i1/i2 << endl;
    cout << (double)i1/i2 << endl;
    cout << i1 / (double) i2 << endl;
    cout << (double)(i1/i2) << endl;

    cout << "Test explicit type casting :" << endl;

    double d1 = 5.5, d2 = 6.6;

    cout << (int)d1/d2 << endl;
    cout << (int)(d1/d2) << endl;

    cout << "int implicitly casts to double :" << endl;
    d1 = i1;
    cout << d1 <<endl;

    cout << "double truncates to int!: " << endl;
    i2 = d2;

    cout << i2 <<endl;


    return 0;
}
