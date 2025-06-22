// 14. Separate 0s and 1s from an Array

#include <iostream>
using namespace std;



int main() {
    cout << "Separate even and odd numbers in array" << endl;
    cout << "-------------------------------------------" << endl;

    int nums[] = {0, 1, 0, 0, 1, 1, 1, 0, 1, 0};

    int size = sizeof(nums) / sizeof(int);

    int index = size - 1;

    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;
    for (int i = 0; i < size; i++) {
        if (nums[i] == 1) {
            if (nums[index] == 0) {
                nums[index] = 1;
                nums[i] = 0;
                index--;
            }
        }else if (nums[index] == 1) {
            index--;
        }
    }



    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
