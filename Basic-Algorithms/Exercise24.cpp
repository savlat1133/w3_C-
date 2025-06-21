// 24. n Copies of String

#include <iostream>
using namespace std;


void copies(string s, const int copies);

int main() {
    cout << "Copies of string" << endl;
    cout << "-------------------------------------------" << endl;

    copies("JS", 3);



    return 0;
}


void copies(string s, const int copies) {
    for (int i = 0; i < copies; i++) {
        cout << s;
    }
}
