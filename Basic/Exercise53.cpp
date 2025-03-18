
 // Equilateral Triangle Area

#include <iostream>

using namespace std;



int main() {
    float s1; // Declaring a variable to store the side length of the equilateral triangle
    float area; // Declaring a variable to store the area of the equilateral triangle

    cout << "\n\n Calculate the area of the Equilateral Triangle :\n"; // Displaying the purpose of the program
    cout << " ----------------------------------------------------\n"; 

    cout << " Input the value of the side of the equilateral triangle: "; // Prompting the user to input the side length
    cin >> s1; // Taking input of the side length from the user

    area = sqrt(3) / 4 * (s1 * s1); // Calculating the area of the equilateral triangle using the formula
    cout << " The area of the equilateral triangle is: " << area << endl; // Displaying the calculated area

    cout << endl;
    return 0;
}
