// 7. Count Vowels in a String

#include <iostream>
#include <string>
using namespace std;

int countVowels(string str);

int main() {
    cout << "Count Vowels in a string" << endl;
    cout << "-------------------------------------------" << endl;

    cout << countVowels("hello") << endl;


    return 0;
}

int countVowels(string str) {
    int count = 0;
    string vowels = "aeiou";

    for (int i = 0; i < str.length(); i++) {
        if (vowels.find(str[i]) != string::npos) {
            count++;
        }
    }
    return count;
}
