// Scalene Triangle Area Calculation

#include <iostream>

using namespace std;

int main() {
    cout << "Find the area of Scalene Triangle :" << endl;
    cout << "----------------------------------------------" << endl;
    double area, side1, side2, side3;

    cout << "Input the length of a side of the triangle : ";
    cin >> side1;
    cout << "Input the length of another side of the triangle : ";
    cin >> side2;
    cout << "Input the angle between these sides of the triangle : ";
    cin >> side3;

    area = (side1 * side2 * sin((M_PI/180.0) * side3 ))/2;

    cout << "The area of the Scalene Triangle is " << area << endl;

    return 0;
}
