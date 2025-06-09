// 13. Toggle Case of Each Character in a String

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Toggle case of each character in a string" << endl;
    cout << "-------------------------------------------" << endl;

    string input;
    cout << "Enter the input: ";
    cin >> input;

    cout << "The output: ";
    for (int i = 0; i < input.length(); i++) {
        char c = input[i];
        if (islower(c)){
            cout << static_cast<char>(toupper(c));
        }else {
            cout << static_cast<char>(tolower(c));
        }
    }

    return 0;
}
