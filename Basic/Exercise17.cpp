// Area and Perimeter of Rectangle


#include <iostream>

using namespace std;

int main() {
    cout << "Find the Area and Perimeter of a Rectangle : " << endl;
    cout << "----------------------------------------------" << endl;
    int width, length;

    cout << "Input the length of the rectangle : ";
    cin >> length;
    cout << "Input the width of the rectangle : ";
    cin >> width;

    cout << "Area of the rectangle is : " << length * width << endl;
    cout << "Perimeter of the rectangle is : " << 2*(length+width)<< endl;

    return 0;
}
