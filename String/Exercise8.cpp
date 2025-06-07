// 8. Count the Words in a String

#include <iostream>
#include <string>
using namespace std;

int countWords(string str);

int main() {
    cout << "Count words in a string" << endl;
    cout << "-------------------------------------------" << endl;

    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "The number of words: "<< countWords(str) << endl;


    return 0;
}

int countWords(string str) {
    int count = 0;
    int index = 0;
    for(int i = 0; i < str.length(); i++) {
        if (isalnum(str[i])) {
            index++;
            if (index != i) {
                count++;
                index = i;
            }
        }
    }

    return count;
}
