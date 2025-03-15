// Fahrenheit to Celsius Conversion

#include <iostream>

using namespace std;

int main() {
    cout << "Convert temperature in Fahrenheit to Celsius :" << endl;
    cout << "----------------------------------------------" << endl;
    float celsius, fahrenheit;

    cout << "Input the temperature in Fahrenheit : ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) / 1.8;
    cout << "The temperature in Celsius is: " << celsius << endl;

    return 0;
}
