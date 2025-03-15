// Kelvin to Fahrenheit Conversion
#include <iostream>

using namespace std;

int main() {
    cout << "Convert temperature in Kelvin to Fahrenheit :" << endl;
    cout << "----------------------------------------------" << endl;

    float fahrenheit, kelvin;
    cout << "Input the temperature in Kelvin : ";
    cin >> kelvin;

    fahrenheit = (kelvin - 273.15) * 1.8 + 32;

    cout << "The temperature in Kelvin : " << kelvin << endl;
    cout << "The temperature in Fahrenheit : " << fahrenheit << endl;




    return 0;
}
