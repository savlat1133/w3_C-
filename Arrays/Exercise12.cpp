// 12. Zig-Zag Array Rearrangement

#include <iostream>
using namespace std;



int main() {
    cout << "Smallest missing number" << endl;
    cout << "-------------------------------------------" << endl;

    int nums[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};

    int size = sizeof(nums) / sizeof(int);

    for(int i = 1; i < size; i+=2) {
        int temp = nums[i];
        nums[i] = nums[i + 1];
        nums[i + 1] = temp;
    }

    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
