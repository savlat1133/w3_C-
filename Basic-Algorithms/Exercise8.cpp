// 8. 4 Copies of First 2 Characters

#include <iostream>
#include <string>
using namespace std;

string fourCopies(string s);

int main() {
    cout << "4 copies of first 2 characters" << endl;
    cout << "-------------------------------------------" << endl;

    cout << fourCopies("C Sharp") << endl;
    cout << fourCopies("JS") << endl;
    cout << fourCopies("a") << endl;

    return 0;
}

string fourCopies(string s) {
    string copy = "";
    if (s.length() >= 2) {
        for (int i = 0; i < 4; i++) {
            copy += s.substr(0, 2);
        }
        return copy;
    }
    return s;

}
