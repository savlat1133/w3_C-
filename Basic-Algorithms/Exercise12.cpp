// 12. Check If String Starts with 'C#'

#include <iostream>
#include <string>
using namespace std;


bool check(string str, string pt);

int main() {
    cout << "Check if string starts with 'C#'" << endl;
    cout << "-------------------------------------------" << endl;

    cout << check("C#", "C#") << endl;
    cout << check("C# Sharp", "C#") << endl;
    cout << check("C++", "C#") << endl;


    return 0;
}

bool check(string str, string pt) {
    for (int i = 0; i < pt.length(); i++) {
        if (pt[i] != str[i]) {
            return false;
        }
    }
    return true;
}
