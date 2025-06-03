// 4. Find the Largest Word in a String

#include <iostream>
using namespace std;

int main() {
    cout << "Find the largest word in a string" << endl;
    cout << "-------------------------------------------" << endl;

    string symbols = ".,;:'\"?!-_()[]{}\\|@#$%^&*=+<>~` ";

    string word;

    cout << "Input a string: ";

    getline(cin, word);

    string result = "";
    string temp = "";

    for (char c : word) {
        if (symbols.find(c) != string::npos) {
            if (result.length() < temp.length()) {
                result = temp;
            }
            temp = "";
        }else {
            temp += c;
        }
    }

    if (temp.length() > result.length()) {
        result = temp;
    }


    cout << "Output: " << result << endl;


    return 0;
}
