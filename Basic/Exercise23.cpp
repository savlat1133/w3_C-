// Kilometers to Miles Conversion

#include <iostream>

using namespace std;

int main() {
    cout << "Convert kilometers per hour to miles per hour :" << endl;
    cout << "----------------------------------------------" << endl;

    float kilometers, miles;

    cout << "Enter the kilometers per hour : ";
    cin >> kilometers;
    miles = kilometers * 0.621371;

    cout << "The " << kilometers << " Km/hr means " << miles << " Miles/hr"<< endl;

    return 0;
}
