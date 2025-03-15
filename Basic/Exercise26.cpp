// Fahrenheit to Kelvin Conversion

#include <iostream>

using namespace std;

int main() {
    cout << "Convert temperature in Fahrenheit to Kelvin :" << endl;
    cout << "----------------------------------------------" << endl;

    double fahrenheit;
    cout << "Input the temperature in Fahrenheit: : ";
    cin >> fahrenheit;

    double kelvin = (((fahrenheit - 32) * (5.0 / 9.0)) + 273.15);

    cout << "The temperature in Fahrenheit : " << fahrenheit << endl;
    cout << "The temperature in Kelvin : " << kelvin << endl;


    return 0;
}
