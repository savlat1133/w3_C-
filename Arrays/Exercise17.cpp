// 17. Descending Order Sorting by Absolute Difference

#include <iostream>
using namespace std;



int main() {
    cout << "Descending order sorting by absolute difference" << endl;
    cout << "-------------------------------------------" << endl;

    int nums[] = {0, 9, 7, 2, 12, 11, 20};

    int size = sizeof(nums) / sizeof(int);


    int min = INT_MAX;

    for (int index = 0; index < size; index+=2) {
        for ( int i = index; i < size; i++) {
            for ( int j = index; j < size; j++) {
                if (i != j) {
                    int diff = abs(nums[i] - nums[j]);
                    if (diff > min) {
                        min = diff;
                        int temp1 = nums[i];
                        int temp2 = nums[j];
                        nums[i] = nums[index];
                        nums[j] = nums[index + 1];
                        nums[index] = temp1;
                        nums[index + 1] = temp2;
                    }
                }
            }
        }
        min = INT_MAX;

    }

    for ( int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }


    return 0;
}
