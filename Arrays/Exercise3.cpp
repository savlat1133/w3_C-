// 3. Second Largest Element in Array
#include <iostream>
#include <string>
using namespace std;

string longestPrefix(string arr[], int n);


int main() {
    cout << "second largest element" << endl;
    cout << "-------------------------------------------" << endl;

    int nums[] = {7, 12, 9, 15, 19, 32, 56, 70};
    int len = sizeof(nums) / sizeof(*nums);

    int first = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < len; i++) {
        if (nums[i] > first) {
            second = first;
            first = nums[i];
        }
    }

    cout << first << " " << second << endl;

    return 0;
}
