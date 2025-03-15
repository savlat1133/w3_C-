// Area and Circumference of Circle


#include <iostream>

using namespace std;

int main() {
    cout << "Find the area and circumference of any circle" << endl;
    cout << "----------------------------------------------" << endl;
    float radius, area, circumference;

    cout << "Input the radius(1/2 of diameter) of a circle:";
    cin >> radius;
    area = M_PI * radius * radius;
    circumference = 2 * M_PI * radius;
    cout << "The area of the circle is: " << area << endl;
    cout << "The circumference of the circle is: " << circumference;

    return 0;
}
