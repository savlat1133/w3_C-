// Volume of a Cube

#include <iostream>

using namespace std;

int main() {
    int side;
    cout << "Calculate the volume of a cube : " << endl;
    cout << "-----------------------------------" << endl;
    cout << "Input the side of a cube : ";

    cin >> side;
    cout << "The volume of a cube is : ";
    cout << pow(side, 3) << endl;

    return 0;
}
