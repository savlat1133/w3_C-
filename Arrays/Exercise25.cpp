
// 25. Common Elements in Three Sorted Arrays
#include <iostream>
using namespace std;



int main() {
    cout << "Find unique element where others" << endl;
    cout << "-------------------------------------------" << endl;

    int array1[] = {1, 5, 7, 8, 9, 11};
    int array2[] = {6, 8, 10, 11, 12, 16};
    int array3[] = {1, 3, 5, 6, 8, 10, 11, 17};

    int size1 = sizeof(array1) / sizeof(int);
    int size2 = sizeof(array2) / sizeof(int);
    int size3 = sizeof(array3) / sizeof(int);

    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2 && k < size3) {

        if (array1[i] == array2[j] && array1[i] == array3[k]) {
            cout << array1[i] << " ";
            i++;
            j++;
            k++;
        }else if (array1[i] < array2[j]) {
            i++;
        }else if (array2[j] < array3[k]) {
            j++;
        }else {
            k++;
        }
    }

    return 0;
}
