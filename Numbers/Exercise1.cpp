// 1. Ugly Number Check

#include <iostream>
#include <string>
using namespace std;

bool ugly_number(int num) {
    if (num == 2) {
        return true;
    }
    for (int i = num - 1; i >= 2; --i) {
        if ((num % i == 0 && i != 5) && (num % i == 0 && i != 3) && (num % i == 0 && i != 2)){
            return false;
        }
    }
    return true;
}



int main() {
    cout << "Dynamically allocate two two-dimensional arrays of floating values and strings" << endl;
    cout << "-------------------------------------------" << endl;

    cout << ugly_number(15) << endl;



    return 0;
}
