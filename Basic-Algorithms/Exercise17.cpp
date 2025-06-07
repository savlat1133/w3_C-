// 17. Remove 'yt' at Index 1

#include <iostream>
using namespace std;


string removePattern(string str);


int main() {
    cout << "Remove 'yt' at index 1" << endl;
    cout << "-------------------------------------------" << endl;

    cout << removePattern("Python") << endl;
    cout << removePattern("ytade") << endl;
    cout << removePattern("jsues") << endl;

    return 0;
}

string removePattern(string str) {
    string pattern = "yt";
    string newStr = "";

    if (str.substr(1, 2) == pattern) {
        for (int i = 0; i < str.length(); i++) {
            if (i < 1 || i > 2) {
                newStr += str[i];
            }
        }
        return newStr;
    }
    return str;
}
