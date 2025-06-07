// 6. Remove Character from String

#include <iostream>
#include <string>
using namespace std;

string removeChar(string str, int n);

int main() {
    cout << "Remove character from string" << endl;
    cout << "-------------------------------------------" << endl;

    string str = "Python";

    cout << removeChar(str, 1) << endl;
    cout << removeChar(str, 0) << endl;
    cout << removeChar(str, 4) << endl;

    return 0;
}

string removeChar(string str, int n) {
    string newStr = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != str[n]) {
            newStr += str[i];
        }
    }
    return newStr;
}
