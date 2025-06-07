
// 86. Count Letters, Spaces, Numbers, and Others in a String

#include <iostream>
#include <string>
using namespace std;


int main() {
    cout << "Count letters, spaces, numbers, and others in a string" << endl;
    cout << "-------------------------------------------" << endl;

    string str;
    int count = 0, letters = 0, spaces = 0, numbers = 0, others = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        count++;
        if (isalpha(str[i])) {
            letters++;
        }else if (isdigit(str[i])) {
            numbers++;
        }else if (isspace(str[i])) {
            spaces++;
        }else {
            others++;
        }
    }

    cout << "The number of characters in the string is: " << count << endl;
    cout << "The number of alphabets are: " << letters << endl;
    cout << "The number of digits are: " << numbers << endl;
    cout << "The number of spaces are: " << spaces << endl;
    cout << "The number of other characters are: " << others << endl;

    return 0;
}
