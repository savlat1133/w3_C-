
// 10. Check if a String is a Palindrome
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str);


int main() {
    cout << "Check equal occurrence of two characters" << endl;
    cout << "-------------------------------------------" << endl;

    string str;

    cout << "Enter a string: ";
    cin >> str;

    cout << isPalindrome(str) << endl;

    return 0;
}

bool isPalindrome(string str) {
    int start = 0, end = str.length() - 1;

    while (start != end) {
        if (str.length() % 2 == 0) {
            if (start == end + 1) {
                return true;
            }
        }
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
