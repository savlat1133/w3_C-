18. Move Negative Elements to the End

#include <iostream>
using namespace std;



int main() {
    cout << "Descending order sorting by absolute difference" << endl;
    cout << "-------------------------------------------" << endl;

    int nums[] = {0, 9, -7, 2, -12, 11, -20};

    int size = sizeof(nums) / sizeof(int);

    int end = size - 1;
    for (int i = end; i > 1; i--) {
        if (nums[i] >= 0) {
            for (int j = i - 1; j >= 0; j--) {
                if (nums[j] < 0) {
                    int temp = nums[j];
                    nums[j] = nums[i];
                    nums[i] = temp;
                    break;
                }
            }
        }

    }


    for ( int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }


    return 0;
}
