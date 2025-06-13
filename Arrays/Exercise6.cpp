// 6. Elements with At Least Two Significant Neighbors

#include <iostream>
#include <string>
using namespace std;

string longestPrefix(string arr[], int n);


int main() {
    cout << "k largest element" << endl;
    cout << "-------------------------------------------" << endl;

    int nums[] = {7, 12, 9, 15, 19, 32, 56, 70};
    int len = sizeof(nums) / sizeof(*nums);

    int count = 0;

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            if (nums[i] < nums[j]) {
                count++;
            }
        }
        if (count >= 2) {
            cout << nums[i] << " ";
            count = 0;
        }
    }
    return 0;
}
