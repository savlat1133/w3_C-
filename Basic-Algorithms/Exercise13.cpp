// 13. Temperature Less than 0 or Greater than 100

#include <iostream>
#include <string>
using namespace std;

bool checkTempreature(int temp1, int temp2);

int main() {
    cout << "Temperature less than 0 or greater than 100" << endl;
    cout << "-------------------------------------------" << endl;

    cout << checkTempreature(120, -1) << endl;
    cout << checkTempreature(-1, 120) << endl;
    cout << checkTempreature(2, 120) << endl;

    return 0;
}

bool checkTempreature(int temp1, int temp2) {
    if ((temp1 >= 100 || temp1 <= 0) && (temp2 >= 100 || temp2 <= 0)) {
        return true;
    }
    return false;
}
