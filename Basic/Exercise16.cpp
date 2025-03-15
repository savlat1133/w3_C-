// Volume of a Cylinder


#include <iostream>

using namespace std;

int main() {
    int radius, height;
    cout << "Calculate the volume of a cylinder : " << endl;
    cout << "-----------------------------------" << endl;
    cout << "Input the radius of the cylinder : ";
    cin >> radius;


    cout << "Input the height of the cylinder : ";
    cin >> height;

    cout << "The volume of a cylinder is : ";
    cout << M_PI * pow(radius,2) * height << endl;

    return 0;
}
