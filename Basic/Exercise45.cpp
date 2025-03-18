// Cone Volume

#include <iostream>

using namespace std;

int main() {
    cout << "Calculate the volume of a cone : " << endl;
    cout << "----------------------------------------------" << endl;

    float V, R, H;
    cout << "Input Cone's radius: "; // Outputting a message to prompt the user to input the cone's radius
    cin >> R;

    cout << "Input Cone's height: "; // Outputting a message to prompt the user to input the cone's height
    cin >> H;

    V = (1.0 / 3.0) * M_PI * (R * R) * H;

    cout << "The volume of the cone : " << V << endl;

    return 0;
}
