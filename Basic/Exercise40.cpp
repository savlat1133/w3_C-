// Area and Perimeter of Rectangle


#include <iostream>

using namespace std;

int main() {
    cout << "Print the following pattern: " << endl;
    cout << "----------------------------------------------" << endl;
    float ar, peri, width, height = 0;
    cout << " Input the width of the rectangle: ";
    cin >> width;
    cout << " Input the height of the rectangle: ";
    cin >> height;

    peri = 2 * (width + height); 
    ar = height * width;

    cout << "The area of the rectangle is: " << ar << "\n";
    cout << "The perimeter of the rectangle is: " << peri << "\n";


    return 0;
}
