// 2. Abundant Number Check
#include <iostream>
#include <string>
using namespace std;

bool abundant_number(int number) {
    int sum = 0;

    for (int i = number - 1; i >= 1; --i) {
        if (number % i == 0) {
            sum += i;
        }
    }
    if (sum > number) {
        return true;
    }
    return false;
}




int main() {
    cout << "Dynamically allocate two two-dimensional arrays of floating values and strings" << endl;
    cout << "-------------------------------------------" << endl;

    cout << abundant_number(21) << endl;



    return 0;
}
