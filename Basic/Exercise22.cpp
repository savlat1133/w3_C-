// Find Third Angle of Triangle


#include <iostream>

using namespace std;

int main() {
    cout << "Find the third angle of a triangle :" << endl;
    cout << "----------------------------------------------" << endl;

    int angle1, angle2;
    cout << "Input the 1st angle of the triangle :";
    cin >> angle1;
    cout << "Input the 2nd angle of the triangle :";
    cin >> angle2;
    cout << "The 3rd od the triangle is : " << 180 - angle1 - angle2 << endl;


    return 0;
}
