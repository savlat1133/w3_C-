Third Angle of Triangle


#include <iostream>

using namespace std;



int main() {
    cout << "Find the third angle of a triangle  : " << endl;
    cout << "----------------------------------------------" << endl;
    float ang1, ang2, ang3;
    cout << " Input the 1st angle of the triangle : "; // Prompting the user to input the 1st angle of the triangle
    cin >> ang1; // Taking input of the 1st angle from the user

    cout << " Input the 2nd angle of the triangle : "; // Prompting the user to input the 2nd angle of the triangle
    cin >> ang2; // Taking input of the 2nd angle from the user

    ang3 = 180 - (ang1 + ang2); // Calculating the 3rd angle of the triangle using the sum of angles
    cout << " The 3rd angle of the triangle is : " << ang3 << endl; // Displaying the calculated 3rd angle

    cout << endl;
    return 0;
}
