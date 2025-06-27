// 1. Consecutive Rearrangement in Vector

#include <iostream>
#include <vector>
using namespace std;



int main() {
    cout << "Consecutive arrangement" << endl;
    cout << "-------------------------------------------" << endl;

    vector<int> arr = {1, 2 ,5, 0, 3, 6, 7};

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] + 1 != arr[i + 1]) {
            cout << "False";
            break;
        }
    }



    return 0;
}
