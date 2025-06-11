// 16. Longest Common Prefix from an Array of Strings

#include <iostream>
#include <string>
using namespace std;

string longestPrefix(string arr[], int n);


int main() {
    cout << "Find the longest common prefix from an array of strings" << endl;
    cout << "-------------------------------------------" << endl;
    const int size = 10;
    string arr[size] = {
        "apple", "apricot", "ape", "application", "appetite",
        "append", "approve", "apt", "apex", "apology"
    };

    cout << longestPrefix(arr, size) << endl;


    return 0;
}

string longestPrefix(string arr[], int n) {
    if (n == 0) {
        return "";
    }

    string word = arr[0];
    for (int i = 1; i < n; i++) {
        string str = arr[i];
        string prefix = "";
        for (int j = 0; j < str.length(); j++) {
            if (str[j] == word[j]) {
                prefix += str[j];
            }else {
                break;
            }
        }
        word = prefix;

        if (word.empty()) {
            break;
        }
    }
    return word;
}

