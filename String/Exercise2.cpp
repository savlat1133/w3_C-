// 2. Replace Each Letter with the Next in the Alphabet

#include <iostream>

using namespace std;

int main()
{
    cout << "Reverse a given string" << endl;
    cout << "-------------------------------" << endl;

    string str;

    cout << "Input the string: ";
    cin >> str;

    for (char c : str) {
        char ch = c;
        if ( c >= 65 && c <= 90 || c >= 97 && c <= 122) {
            ch = c + 1;
        }
        cout << ch;
    }

    return 0;
}
