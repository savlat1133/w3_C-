// 5. Add 'if' to String

#include <iostream>

using namespace std;

int main() {
    cout << "Add 'if' to string" << endl;
    cout << "-------------------------------" << endl;

    string str;

    cout << "Enter string: ";
    getline(cin, str);


    if (str.length() > 2 && str.substr(0, 2) != "if") {
        cout << "if " << str << endl;
    }

    return 0;
}
