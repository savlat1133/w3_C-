// 85. Reverse a String

#include <iostream>
#include <string>
using namespace std;

int sumDigits(int n);

int main() {
    cout << "Reverse a string" << endl;
    cout << "-------------------------------------------" << endl;

    string str;
    cout << "Enter a string: ";
    cin >> str;
    string temp = str;

    for (int i = 0; i < str.length(); i++) {
        str[i] = temp[str.length() - i - 1];
    }
    cout << "The string in reverse are: " << str << endl;

    return 0;
}
