// 10. Multiple of 3 or 7

#include <iostream>
#include <string>
using namespace std;

bool multipleOfTwoNumbers(int num, int multiple1, int multiple2);

int main() {
    cout << "Multiple of 3 or 7" << endl;
    cout << "-------------------------------------------" << endl;


    cout << multipleOfTwoNumbers(3, 3, 7) << endl;
    cout << multipleOfTwoNumbers(14, 3, 7) << endl;
    cout << multipleOfTwoNumbers(12, 3, 7) << endl;
    cout << multipleOfTwoNumbers(37, 3, 7) << endl;

    return 0;
}

bool multipleOfTwoNumbers(int num, int multiple1, int multiple2) {
    if (num % multiple1 == 0 || num % multiple2 == 0) {
        return true;
    }
    return false;
}
