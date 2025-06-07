// 16. Check if Either Integer is in Range 20?50

#include <iostream>
using namespace std;

bool checkRange(int num1, int num2, int min, int max) {
    if (num1 >= min && num1 <= max || num2 >= min && num2 <= max) {
        return true;
    }
    return false;
}


int main() {
    cout << "Check if integers are in range 20 and 50" << endl;
    cout << "-------------------------------------------" << endl;
    cout << checkRange(11, 20, 20, 50) << endl;
    cout << checkRange(30, 30, 20, 50) << endl;
    cout << checkRange(25, 35, 20, 50) << endl;

    return 0;
}
