// 7. Swap First and Last Characters

#include <iostream>
#include <string>
using namespace std;

string swapFirstLast(string str);

int main() {
    cout << "Remove character from string" << endl;
    cout << "-------------------------------------------" << endl;

    string str = "Python";

    cout << swapFirstLast(str) << endl;

    return 0;
}

string swapFirstLast(string str) {
    string newStr = str;
    if (str.length() > 1) {
        for (int i = 0; i < str.length(); i++) {
            if (i == 0) {
                char temp = str[0];
                newStr[0] = str[str.length() - 1];
                newStr[str.length() - 1] = temp;
            }
        }
    }

    return newStr;
}
