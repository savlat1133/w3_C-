// 29. Create Sequence String

#include <iostream>
using namespace std;

void printSequence(string s);

int main() {
    cout << "Copies of string" << endl;
    cout << "-------------------------------------------" << endl;

    printSequence("abcd");
    printSequence("abc");
    printSequence("a");

    return 0;
}

void printSequence(string s) {
    for (int i = 1; i <= s.length(); i++) {
        cout << s.substr(0, i);
    }
    cout << endl;
}
