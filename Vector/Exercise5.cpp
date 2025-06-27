// 5. Verify Letters of Second String in First String



#include <iostream>
#include <vector>
using namespace std;



int main() {
    cout << "Consecutive arrangement" << endl;
    cout << "-------------------------------------------" << endl;



    vector<string> strs = {"Python", "Py"};

    for (char ch : strs.at(1)) {
        if (strs.at(0).find(toupper(ch)) != string::npos && strs.at(0).find(tolower(ch)) != string::npos) {
            cout << "False";
        }
    }

    
    return 0;
}
