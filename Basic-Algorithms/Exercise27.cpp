// 27. Check 'aa' Immediately After First 'a'

#include <iostream>
using namespace std;

bool count(string s);

int main() {
    cout << "Copies of string" << endl;
    cout << "-------------------------------------------" << endl;

    cout << count("bbaaccaag") << endl;
    cout << count("jjkiaaasew") << endl;
    cout << count("JSaaakoiaa") << endl;

    return 0;
}

bool count(string s) {
    for (int i = 0; i < s.length(); i++) {
        if ((s[i] == 'a' || s[i] == 'A') && (s[i + 1] == 'a' || s[i + 1] == 'A')) {
          return true;
        }
    }
    return false;
}
