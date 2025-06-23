// 15. Rearrangement of Sorted Array in Max-Min Order

#include <iostream>
using namespace std;



int main() {
    cout << "Separate even and odd numbers in array" << endl;
    cout << "-------------------------------------------" << endl;

    int nums[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};
    int size = sizeof(nums) / sizeof(int);

    int large = size - 1;
    
    for (int i = 0; i < size; i+=2) {
        int temp = nums[large];
        for (int j = large; j > i; j--) {
            nums[j] = nums[j - 1];
        }
        nums[i] = temp;
    }



    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
