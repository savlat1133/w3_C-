// Kelvin to Celsius Conversion


#include <iostream>

using namespace std;

int main() {
    cout << "Convert temperature in Kelvin to Celsius :" << endl;
    cout << "----------------------------------------------" << endl;

    float celsius, kelvin;
    cout << "Input the temperature in Kelvin : ";
    cin >> kelvin;

    celsius = (kelvin - 273.15);

    cout << "The temperature in Kelvin : " << kelvin << endl;
    cout << "The temperature in Celsius : " << celsius << endl;


    return 0;
}
