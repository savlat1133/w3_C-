// 3. Create an n x n Matrix from Input
#include <iostream>
#include <vector>
using namespace std;



int main() {
    cout << "Consecutive arrangement" << endl;
    cout << "-------------------------------------------" << endl;


    int num;
    cout << "Input: ";
    cin >> num;

    vector<vector<int>> arr(num, vector<int>(num, num));


    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
