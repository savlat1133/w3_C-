// 10. Smallest Missing Element in a Sorted Array

#include <iostream>
using namespace std;



int main() {
    cout << "Smallest missing number" << endl;
    cout << "-------------------------------------------" << endl;

    int nums[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};

    int size = sizeof(nums) / sizeof(int);

    vector<int> missingNumbers;

    for (int i = 0; i < size; i++) {
        int diff = nums[i + 1] - nums[i];
        if (diff > 1) {
            missingNumbers.push_back(nums[i] + 1);
        }
    }

    for (int i = 0; i < missingNumbers.size(); i++) {
        cout << missingNumbers[i] << " ";
    }

    return 0;
}
