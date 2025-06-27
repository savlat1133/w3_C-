// 2. Elements Smaller Than Adjacent Neighbours

#include <iostream>
#include <vector>
using namespace std;



int main() {
    cout << "Consecutive arrangement" << endl;
    cout << "-------------------------------------------" << endl;

    vector<int> arr = {1, 2 ,5, 0, 3, 2, 7};

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]) {
            cout << arr[i] << " ";
        }
    }
    

    return 0;
}
