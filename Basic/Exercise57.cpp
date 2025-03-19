// Hexagon Area Calculation

include <iostream>

using namespace std;

int main() {
    cout << "Print the area of a hexagon : " << endl;
    cout << "------------------------------------" << endl;

    float s, ar;
    cout << "Input the side of the hexagon: ";
    cin >> s;
    ar = (6 * (s * s)) / (4 * tan(M_PI / 6));

    cout << "The area of the hexagon is: " << ar << endl;


    return 0;
}
