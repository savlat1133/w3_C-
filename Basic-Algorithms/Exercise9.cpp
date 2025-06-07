// 9. Add Last Character to Front and Back

#include <iostream>
#include <string>
using namespace std;

string addChar(string str);

int main() {
    cout << "Add last character to front and back" << endl;
    cout << "-------------------------------------------" << endl;

    cout << addChar("Red") << endl;
    cout << addChar("Green") << endl;
    cout << addChar("1") << endl;

    return 0;
}

string addChar(string str) {
    string newStr = "";
    newStr += str[str.length() - 1];
    for (int i = 0; i < str.length(); i++) {
        newStr += str[i];
    }
    newStr += str[str.length() - 1];
    return newStr;
}
