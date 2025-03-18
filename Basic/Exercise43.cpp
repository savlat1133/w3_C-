// Circle Area and Circumference


#include <iostream>

using namespace std;

int main() {
    cout << "Find the area and circumference of any circle : " << endl;
    cout << "----------------------------------------------" << endl;
    float radius, area, circum;
    cout << " Input the radius(1/2 of diameter) of a circle : "; // Prompting the user to input the radius of the circle
    cin >> radius; // Reading the radius from the user

    circum = 2 * M_PI * radius; // Calculating the circumference of the circle using the formula: 2 * PI * radius
    area = M_PI * (radius * radius); // Calculating the area of the circle using the formula: PI * (radius^2)

    cout << " The area of the circle is : " << area << endl; // Outputting the calculated area of the circle
    cout << " The circumference of the circle is : " << circum << endl; // Outputting the calculated circumference of the circle

    cout << endl;
    return 0;
}
