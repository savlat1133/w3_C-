// 16. Sort Array of 0s, 1s, and 2s
#include <iostream>
using namespace std;



int main() {
    cout << "Separate even and odd numbers in array" << endl;
    cout << "-------------------------------------------" << endl;

    int nums[] = {0, 1, 2, 2, 1, 1, 0, 0, 1};
    int size = sizeof(nums) / sizeof(int);

    sort(nums, nums + size);




    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
