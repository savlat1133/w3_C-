// Sphere Volume


#include <iostream>

using namespace std;

int main() {
    cout << "Calculate the volume of a sphere : " << endl;
    cout << "----------------------------------------------" << endl;
    int rad1;
    float volsp;
    cout << "Enter the radius of the sphere : ";
    cin >> rad1;

    volsp = (4 * 3.14 * rad1 * rad1 * rad1) / 3;

    cout << "The volume of the sphere : " << volsp << endl;

    return 0;
}
