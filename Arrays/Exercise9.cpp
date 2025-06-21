// 9. Wave Form Sorting of an Array

#include <iostream>
using namespace std;



int main() {
    cout << "Next greater element of every array" << endl;
    cout << "-------------------------------------------" << endl;

    int nums[] = {4, 1, 5, 9, 12, 9, 22, 45, 7};

    int size = sizeof(nums) / sizeof(int);

    sort(nums, nums + size);

    for (int i = 0; i < size - 1; i+=2) {
        int temp = nums[i + 1];
        nums[i + 1] = nums[i];
        nums[i] = temp;
    }

    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }


    return 0;
}

