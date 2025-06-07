// 11. Add First 3 Characters to Front and Back

#include <iostream>
#include <string>
using namespace std;

string addChars(string str);


int main() {
    cout << "Add first 3 char to front and back" << endl;
    cout << "-------------------------------------------" << endl;

    cout << addChars("Python") << endl;
    cout << addChars("JS") << endl;
    cout << addChars("Code") << endl;


    return 0;
}

string addChars(string str) {
    string newStr = "";
    string temp = "";
    int size = 3;
    if (str.length() < 3) {
        size = str.length();
    }
    for (int i = 0; i < size; i++) {
        temp += str[i];
    }
    newStr += temp;
    newStr += str;
    newStr += temp;
    return newStr;
}
