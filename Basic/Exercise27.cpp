// Celsius to Kelvin Conversion


#include <iostream>

using namespace std;

int main() {
    cout << "Convert temperature in Celsius to Kelvin :" << endl;
    cout << "----------------------------------------------" << endl;

    double celsius, kelvin;
    cout << "Input the temperature in Celsius: : ";
    cin >> celsius;

    kelvin = celsius + 273.15;

    cout << "The temperature in Celsius : " << celsius << endl;
    cout << "The temperature in Kelvin : " << kelvin << endl;


    return 0;
}
