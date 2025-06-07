// 19. Closest to 100

#include <iostream>
using namespace std;

int closetToHundred(int num1, int num2);

int main() {
    cout << "Closest to 100" << endl;
    cout << "-------------------------------------------" << endl;

    cout << closetToHundred(78, 95) << endl;
    cout << closetToHundred(95, 95) << endl;
    cout << closetToHundred(99, 70) << endl;





    return 0;
}


int closetToHundred(int num1, int num2) {
    if (num1 == num2) {
        return 0;
    }
    int absNum1 = abs(100 - num1);
    int absNum2 = abs(100 - num2);

    return (absNum1 < absNum2) ? num1 : num2;
}
