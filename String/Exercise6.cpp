// 6. Check Separation of 'e' and 'g' by Exactly 2 Characters

#include <iostream>
#include <string>
using namespace std;

int check(string str);


int main() {
    cout << "Check separation of 'e' and 'g' by exactly 2 characters" << endl;
    cout << "-------------------------------------------" << endl;

    cout << check("eagerer") << endl;



    return 0;
}

int check(string str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'e') {
            for (int j = i + 1; j < str.length(); j++) {
                if (str[j] == 'g') {
                    if (abs(i - j) == 2) {
                        count++;
                    }
                }
            }
        }
    }
    return count;
}
