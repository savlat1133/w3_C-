// 26. Distinct Elements in Array
#include <iostream>
using namespace std;



int main() {
    cout << "Find unique elements" << endl;
    cout << "-------------------------------------------" << endl;

    int array1[] = {1, 5, 7, 5, 8, 9, 11, 11, 2, 5, 6};
    int size = sizeof(array1) / sizeof(int);

    bool found = false;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i != j) {
                if (array1[i] == array1[j]) {
                    found = true;
                }
            }
        }
        if (!found) {
            cout << array1[i] << " ";
        }
        found = false;
    }


    return 0;
}
