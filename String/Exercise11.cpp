// 11. Find the Word with the Most Repeated Letters

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Find the word with the most repeated letters" << endl;
    cout << "-------------------------------------------" << endl;

    string word;

    cout << "Enter a word: ";
    getline(cin, word);

    int wordCount = 0;
    int index = 0;
    int maxLength = 0;
    string maxLetters;

    for (int i = 0; i < word.length(); i++) {
        if (isspace(word[i])) {
            if (wordCount > 0) {
                string prev = word.substr(index, wordCount);
                if (prev.length() > maxLength) {
                    maxLength = prev.length();
                    maxLetters = prev;
                }
            }
            wordCount = 0;
            index = i + 1;
        }else {
            wordCount++;
        }
    }

    cout << "Word which has the highest number of repeated letters: " << maxLetters << endl;

    return 0;
}
