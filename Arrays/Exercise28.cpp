// 28. Arrange Numbers so that Sum of Some Equals Largest Number



#include <iostream>
using namespace std;



int main() {
    cout << "Find unique elements" << endl;
    cout << "-------------------------------------------" << endl;

    int nums1[] = {1, 3, 4, 2, 6, 0, 8};

    int size = sizeof(nums1) / sizeof(int);

    sort(nums1, nums1 + size);

    int largest = nums1[size - 1];

    bool end = false, found = false;

    int i = 1;
    int sum = 0;

    while (!end && i < size) {
        int currVal = nums1[size - i - 1];
        sum += currVal;
        if (sum == largest) {
            found = true;
            end = true;
        }
        int diff = largest - sum;
        if (diff > currVal) {
            i++;
            currVal = nums1[size - i - 1];
        }else {
            i++;
            sum += nums1[size - i - 1];
            if (sum == largest) {
                found = true;
            }else {
                end = true;
            }
        }
    }

    cout << found << endl;


    return 0;
}
