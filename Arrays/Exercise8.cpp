// 8. Next Greater Element for Every Array Element

#include <iostream>
using namespace std;



int main() {
    cout << "Nexr greater element of every array" << endl;
    cout << "-------------------------------------------" << endl;

    int nums[] = {4, 1, 5, 9, 12, 9, 22, 45, 7};

    int size = sizeof(nums) / sizeof(int);

    vector<int> lowerElements;
    vector<int> greaterElements;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] < nums[j]) {
                lowerElements.push_back(nums[i]);
                greaterElements.push_back(nums[j]);
                break;
            }
        }
    }

    sort(lowerElements.begin(), lowerElements.end());
    sort(greaterElements.begin(), greaterElements.end());

    for (int i = 0; i < lowerElements.size(); i++) {
        cout << lowerElements[i] << " : " << greaterElements[i] << endl;
    }

    return 0;
}
