// 18. Largest of Three Integers

#include <iostream>
using namespace std;

int largestInt(int array[], int size);

int main() {
    cout << "Largest of Three Integers" << endl;
    cout << "-------------------------------------------" << endl;

    int array[] = {1, 2, 3};
    int size = sizeof(array) / sizeof(array[0]);
    cout << largestInt(array, size) << endl;


    return 0;
}

int largestInt(int array[], int size) {
    int max = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}
