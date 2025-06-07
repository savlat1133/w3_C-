
// 9. Check Equal Occurrence of Two Characters
#include <iostream>
#include <string>
using namespace std;

bool checkOccurrence(string str, char c1, char c2);


int main() {
    cout << "Check equal occurrence of two characters" << endl;
    cout << "-------------------------------------------" << endl;

    string str;

    cout << "Enter a string: ";
    cin >> str;

    cout << checkOccurrence(str, 'a', 'e');


    return 0;
}

bool checkOccurrence(string str, char c1, char c2) {
    int ch1 = 0, ch2 = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == c1) {
            ch1++;
        }
        if (str[i] == c2) {
            ch2++;
        }
    }
    if (ch1 == ch2) {
        return true;
    }
    return false;
}
