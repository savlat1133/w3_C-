// 14. Check if Integers are in Range 100?200

#include <iostream>
using namespace std;

bool checkRange(int num1, int num2, int min, int max) {
    if (num1 >= min && num1 <= max && num2 >= min && num2 <= max) {
        return true;
    }
    return false;
}


int main() {
    cout << "Check if integers are in range 100 and 200" << endl;
    cout << "-------------------------------------------" << endl;
    cout << checkRange(100, 199, 100, 200) << endl;
    cout << checkRange(250, 300, 100, 200) << endl;
    cout << checkRange(105, 190, 100, 200) << endl;

    return 0;
}
