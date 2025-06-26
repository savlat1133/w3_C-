
// 20. Count Occurrences of a Given Number in Sorted Array
#include <iostream>
using namespace std;



int main() {
    cout << "Find element occurring odd number of times" << endl;
    cout << "-------------------------------------------" << endl;

    int nums[] = {5, 7, 8, 8, 5, 8, 7, 7};

    int size = sizeof(nums) / sizeof(int);

    int num = nums[0];
    int prevNum;
    int count = 0;
    int prevCount = 0;
    sort(nums, nums + size);
    for (int i = 0; i < size; i++) {
        if (nums[i] == num) {
            count++;
        }else {
            if (prevCount < count) {
                prevNum = num;
                prevCount = count;
                num = nums[i];
                count = 1;
            }
        }
    }

    cout << num << endl;
    cout << count << endl;

    return 0;
}
