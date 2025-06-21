// 11. Update Array Elements by Multiplying Neighbors

#include <iostream>
using namespace std;



int main() {
    cout << "Smallest missing number" << endl;
    cout << "-------------------------------------------" << endl;

    int nums[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};

    int size = sizeof(nums) / sizeof(int);

    vector<int> newArray;;

    for (int i = 0; i < size; i++) {
        int num;
        if (i == 0) {
            num = nums[i] * nums[i + 1];
        }else if (i == size - 1) {
            num = nums[i - 1] * nums[i];
        }else {
            num = nums[i - 1] * nums[i + 1];
        }
        newArray.push_back(num);
    }

    for (int num : newArray) {
        cout << num << " ";
    }

    return 0;
}
