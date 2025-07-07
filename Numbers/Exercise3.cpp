// 3. Find Abundant Numbers Between 1 and 1000
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
    cout << "find abundant numbers between 1 and 1000" << endl;
    cout << "-------------------------------------------" << endl;

    int end = 50;
    for (int i = 1; i <= 1000; ++i) {
        if (abundant_number(i)) {
            cout << i << " ";
        }
        if (i == end) {
            cout << endl;
            end += 50;
        }
    }



    return 0;
}
