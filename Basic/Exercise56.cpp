// String Manipulation Examples


#include <iostream>

using namespace std;

int main() {
    cout << "String manipulation : " << endl;
    cout << "------------------------------------" << endl;

    string str = "welcome, w3resource";

    cout << "The string is: " << str << endl;
    cout << "The length of the string is: " << str.length() << endl;
    cout << "The char at index 1 of the string is: " << str.at(1) << endl;
    cout << "The char at index 1 of the string using [brackets] " << str[1] << endl;
    cout << "Is the string empty? " << str.empty() << endl;
    cout << "Retrieve the sub-string from 3rd position for 4 characters: " << str.substr(3, 4) << endl;
    cout << "The sub-string replace by 'went' : " << str.replace(3, 4, "went") << endl;
    cout << "Append a string 'end' at last of the string : " << str.append(" end") << endl;
    cout << "The string 'insert' inserting at 3rd position of the string : " << str.insert(3, " went") << endl;

    return 0;
}
