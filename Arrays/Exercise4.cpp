// 4. k Largest Elements in Array

#include <iostream>
#include <string>
using namespace std;

string longestPrefix(string arr[], int n);


int main() {
    cout << "k largest element" << endl;
    cout << "-------------------------------------------" << endl;

    int nums[] = {7, 12, 9, 15, 19, 32, 56, 70};
    int len = sizeof(nums) / sizeof(*nums);

    sort(nums, nums + len);
    int k = 3;

    cout << nums[len  - k] << endl;

    return 0;
}
