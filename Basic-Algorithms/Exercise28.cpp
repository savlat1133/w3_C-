// 28. String with Every Other Character

#include <iostream>
using namespace std;

void everyOther(string s);

int main() {
    cout << "Copies of string" << endl;
    cout << "-------------------------------------------" << endl;

    everyOther("bbaaccaag");
    everyOther("jjkiaaasew");
    everyOther("JSaaakoiaa");

    return 0;
}

void everyOther(string s) {
    for (int i = 0; i < s.length(); i+=2) {
        cout << s[i];
    }
    cout << endl;
}
