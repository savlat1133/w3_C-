// Polygon Area Calculation


#include <iostream>

using namespace std;

int main() {
    float ar, s, n; // Declaration of variables 'ar', 's', and 'n' to store area, side length, and number of sides respectively

    cout << "\n\n Print the area of a polygon:\n"; // Displaying the purpose of the program
    cout << "---------------------------------\n";
	
    cout << " Input the number of sides of the polygon: "; // Prompting user to input the number of sides
    cin >> n; // Taking input from user and storing it in variable 'n'
	
    cout << " Input the length of each side of the polygon: "; // Prompting user to input the side length
    cin >> s; // Taking input from user and storing it in variable 's'
	
    // Calculating the area of the polygon using the formula: n * s^2 / (4 * tan(π / n))
    ar = (n * (s * s)) / (4.0 * tan((M_PI / n))); // M_PI represents the value of π
	
    cout << " The area of the polygon is: " << ar << "\n"; // Displaying the calculated area
	
    return 0;
}
