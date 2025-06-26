// 23. Find Unique Element Where Others Appear Twice

#include <iostream>
using namespace std;



int main() {
    cout << "Find unique element where others" << endl;
    cout << "-------------------------------------------" << endl;

    int array1[] = {3, 1, 5, 1, 5, 7, 9, 7, 9};

    bool unique = true;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i != j) {
                if (array1[i] == array1[j]) {
                    unique = false;
                }
            }
        }
        if (unique) {
            cout << array1[i] << endl;
        }
    }


    return 0;
}
