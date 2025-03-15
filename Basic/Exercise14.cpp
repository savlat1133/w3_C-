// Volume of a Sphere


#include <iostream>

using namespace std;

int main() {
    double radius;
    cout << "Calculate the volume of a sphere : " << endl;
    cout << "-----------------------------------" << endl;
    cout << "Input the radius of the sphere : ";

    cin >> radius;
    cout << "The volume of the sphere : ";
    cout << (4 * M_PI * pow(radius, 3))/3 << endl;

    return 0;
}
