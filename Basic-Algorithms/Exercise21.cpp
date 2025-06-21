// 21. Larger Value in Range 20?30

#include <iostream>
using namespace std;

int twoIntegers(int num1, int num2);

int main() {
    cout << "Check two integers in ranges 20, 30" << endl;
    cout << "-------------------------------------------" << endl;

    cout << twoIntegers(78, 95) << endl;
    cout << twoIntegers(20, 30) << endl;
    cout << twoIntegers(21, 25) << endl;
    cout << twoIntegers(28, 28) << endl;





    return 0;
}

int twoIntegers(int num1, int num2) {
    if (num1 >= 20 && num1 <= 30 || num2 >= 20 && num2 <= 30) {
        if (num1 < num2) {
            return num2;
        }else {
            return num1;
        }
    }else {
        return 0;
    }
}
