// Centimeters to Meters and Kilometers

#include <iostream>

using namespace std;



int main() {
    cout << "Convert centimeter into meter and kilometer : " << endl;
    cout << "----------------------------------------------" << endl;
    int cm;
    cout << "Input the distance in centimeter : ";
    cin >> cm;

    cout << "The distance in meter : " << cm/100 << endl;
    cout << "The distance in kilometer : " << (double)cm/100000 << endl;

    return 0;
}
