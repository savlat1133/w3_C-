// 7. Most Frequent Element in Array

#include <iostream>
#include <string>
using namespace std;

string longestPrefix(string arr[], int n);


int main() {
    cout << "k largest element" << endl;
    cout << "-------------------------------------------" << endl;

    int nums[] = {7, 12, 9, 15, 19, 32, 56, 70, 32};
    int len = sizeof(nums) / sizeof(*nums);

    int count = 0;
    int num = 0;

    for (int i = 0; i < len; i++) {
        int currentCount = 0;
        for (int j = i; j < len; j++) {
            if (nums[i] == nums[j]) {
                currentCount++;
            }
        }
        if (currentCount > count) {
            count = currentCount;
            num = nums[i];
        }
    }

    cout << num << endl;
    return 0;
}
