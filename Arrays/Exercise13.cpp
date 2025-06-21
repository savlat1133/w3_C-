// 13. Separate Even and Odd Numbers in Array

#include <iostream>
using namespace std;



int main() {
    cout << "Separate even and odd numbers in array" << endl;
    cout << "-------------------------------------------" << endl;

    int nums[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};

    int size = sizeof(nums) / sizeof(int);

    int index = size - 1;

    for (int i = 0; i < size; i++) {
        if (nums[i] % 2 != 0) {
            if (nums[index] % 2 == 0) {
                int temp = nums[i];
                nums[i] = nums[index];
                nums[index] = temp;
                index--;
            }else {
                if (nums[i + 1] % 2 == 0) {
                    int temp = nums[i + 1];
                    nums[i + 1] = nums[i];
                    nums[i] = temp;
                }
            }
        }
    }

    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}

