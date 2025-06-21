// 25. n Copies of First 3 Characters

#include <iostream>
using namespace std;


void copies(string s, const int copies);

int main() {
    cout << "Copies of string" << endl;
    cout << "-------------------------------------------" << endl;

    copies("Python", 3);

    return 0;
}


void copies(string s, const int copies) {
    string temp = s.substr(0, 3);
    for (int i = 0; i < copies; i++) {
        cout << temp;
    }
}
