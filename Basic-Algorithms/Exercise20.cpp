// 20. Check Two Integers in Ranges 40?50 or 50?60
#include <iostream>
using namespace std;

bool twoIntegers(int num1, int num2);

int main() {
    cout << "Check two integers in ranges 40, 50 or 50, 60" << endl;
    cout << "-------------------------------------------" << endl;

    cout << twoIntegers(78, 95) << endl;
    cout << twoIntegers(25, 35) << endl;
    cout << twoIntegers(40, 50) << endl;
    cout << twoIntegers(55, 60) << endl;





    return 0;
}

bool twoIntegers(int num1, int num2) {
    if (num1 <= 50 && num1 >= 40 || num2 <= 50 && num2 >= 40){
        return true;
    }else if (num1 <= 60 && num1 >= 50 && num2 <= 60 && num2 >= 50) {
        return true;
    }else {
        return false;
    }
}
