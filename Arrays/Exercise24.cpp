// 24. Find the First Repeating Element in Array



#include <iostream>
using namespace std;



int main() {
    cout << "Find unique element where others" << endl;
    cout << "-------------------------------------------" << endl;

    int array1[] = {3, 1, 5, 1, 5, 7, 9, 7, 9};

    int size = sizeof(array1) / sizeof(int);

    bool repeating = false;

    int i = 0;
    while (!repeating && i < size) {
        for (int j = 0; j < size; j++) {
            if (i != j) {
                if (array1[j] == array1[i]) {
                    cout << array1[j] << endl;
                    repeating = true;
                    break;
                }
            }
        }
        i++;
    }


    return 0;
}
