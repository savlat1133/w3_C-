// 4. Capitalize First Letter of Each Vector String

#include <iostream>
#include <vector>
using namespace std;



int main() {
    cout << "Consecutive arrangement" << endl;
    cout << "-------------------------------------------" << endl;



    vector<string> colors = {"red", "green", "black", "white", "Pink"};

    for (int i = 0; i < colors.size(); i++) {
        colors[i][0] = toupper(colors[i][0]);
        cout << colors[i] << " ";
    }




    return 0;
}
