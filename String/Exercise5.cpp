// 5. Sort Letters in a String

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Sort letters in a string" << endl;
    cout << "-------------------------------------------" << endl;

    string str;

    cout << "Input a string: ";
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        for (int j = i; j < str.length(); j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    cout << str << endl;

    return 0;
}
