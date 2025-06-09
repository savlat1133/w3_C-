// 14. Sum of Numbers in a String
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "sum of numbers in a string" << endl;
    cout << "-------------------------------------------" << endl;

    string str;
    cout << "Enter an input: ";
    getline(cin, str);


    int sum = 0;

    string temp = "";

    for (char c : str) {
        if (isdigit(c)) {
            temp += c;
        }else if (!temp.empty()) {
            sum += stoi(temp);
            temp.clear();
        }
    }
    
    if (!temp.empty()) {
        sum += stoi(temp);
        temp.clear();
    }
    cout << sum << endl;


    return 0;
}
