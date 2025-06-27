// 6. Filter Strings Containing Numbers from a Vector

#include <iostream>
#include <vector>
using namespace std;



int main() {
    cout << "Consecutive arrangement" << endl;
    cout << "-------------------------------------------" << endl;



    vector<string> colors = {"red", "green23", "1black", "white"};

    for (string color : colors) {
        for (char c : color) {
            if (isdigit(c)) {
                cout << color << " ";
                break;
            }
        }
    }


    return 0;
}
