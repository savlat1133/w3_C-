// 22. Check 2?4 'z' Characters
#include <iostream>
using namespace std;

bool checkInput(string input);

int main() {
    cout << "Check 2, 4 'z' characters" << endl;
    cout << "-------------------------------------------" << endl;


    cout << checkInput("frizz") << endl;
    cout << checkInput("zane") << endl;
    cout << checkInput("Zazzz") << endl;
    cout << checkInput("false") << endl;




    return 0;
}

bool checkInput(string input) {
    for (int i = 1; i < 4; i++) {
        if (input[i] == 'z' || input[i] == 'Z') {
            return true;
        }
    }
    return false;
}
