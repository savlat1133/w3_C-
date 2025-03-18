// Kilometers to Miles Conversion


#include <iostream>

using namespace std;



int main() {
    cout << "Convert kilometers per hour to miles per hour : " << endl;
    cout << "----------------------------------------------" << endl;
    float kmph, miph;
    cout << " Input the distance in kilometer : "; // Prompting the user to input distance in kilometers
    cin >> kmph; // Taking input of distance in kilometers from the user

    miph = (kmph * 0.6213712); // Converting kilometers per hour to miles per hour using the conversion factor
    // Displaying the converted values
    cout << " The " << kmph << " Km./hr. means " << miph << " Miles/hr." << endl;

    cout << endl;
    return 0;
}
