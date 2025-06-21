// 26. Count 'aa' in String

#include <iostream>
using namespace std;

int count(string s, string p);

int main() {
    cout << "Copies of string" << endl;
    cout << "-------------------------------------------" << endl;

    cout << count("bbaaccaag", "aa") << endl;
    cout << count("jjkiaaasew", "aa") << endl;
    cout << count("JSaaakoiaa", "aa") << endl;

    return 0;
}

int count(string s, string p) {
    int count = 0;

    for (int i = 0; i < s.length(); i++) {
        string temp = s.substr(i, 2);
        if (temp == p) {
            count++;
        }
    }
    return count;
}
