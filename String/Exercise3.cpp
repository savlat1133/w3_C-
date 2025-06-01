// 3. Capitalize the First Letter of Each Word

#include <iostream>

using namespace std;

int main()
{
    cout << "Reverse a given string" << endl;
    cout << "-------------------------------" << endl;

    string str;

    cout << "Input the string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (i == 0 || str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }
    }
    cout << str << endl;
    
    return 0;
}
