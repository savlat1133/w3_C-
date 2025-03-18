// Cylinder Volume


#include <iostream>

using namespace std;

int main() {
    cout << "Calculate the volume of a cone : " << endl;
    cout << "----------------------------------------------" << endl;
    int rad1, hgt; // Declaring variables to store cylinder's radius and height
    float volcy;
    cout << " Input the radius of the cylinder : ";
    cin >> rad1; // Reading the radius input from the user
    cout << " Input the height of the cylinder : ";
    cin >> hgt; // Reading the height input from the user

    // Calculating the volume of the cylinder using the formula: volume = π * radius^2 * height
    volcy = (3.14 * rad1 * rad1 * hgt);

    // Outputting the calculated volume of the cylinder
    cout << " The volume of a cylinder is : " << volcy << endl;
    cout << endl;

    return 0;
}
