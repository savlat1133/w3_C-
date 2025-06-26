// 22. Find Missing Element from Two Arrays
#include <iostream>
using namespace std;



int main() {
    cout << "Find two repeating elements in array" << endl;
    cout << "-------------------------------------------" << endl;

    int array1[] = {3, 1, 5, 7, 9};
    int array2[] = {3, 7, 5, 9};

    int size1 = sizeof(array1) / sizeof(int);
    int size2 = sizeof(array2) / sizeof(int);

    bool found = false;
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (array1[i] == array2[j]) {
                found = true;
            }
        }
        if (!found) {
            cout << array1[i] << endl;
        }
        found = false;
    }

    return 0;
}
