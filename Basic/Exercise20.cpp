// Celsius to Fahrenheit Conversion

#include <iostream>

using namespace std;

int main() {
    cout << "Convert temperature in Celsius to Fahrenheit :" << endl;
    cout << "----------------------------------------------" << endl;
    float celsius, fahrenheit;

    cout << "Input the temperature in Celsius : ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;
    cout << "The temperature in Fahrenheit is: " << fahrenheit << endl;
    
    return 0;
}
