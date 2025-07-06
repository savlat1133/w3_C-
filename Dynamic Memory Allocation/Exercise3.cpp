// 3. Dynamically Allocate Two Two-Dimensional Arrays of Floating Values and Strings

#include <iostream>
#include <string>
using namespace std;



int main() {
    cout << "Dynamically allocate two two-dimensional arrays of floating values and strings" << endl;
    cout << "-------------------------------------------" << endl;

    const int size = 5;
    float** arr = new float*[size];

    for (int i = 0; i < size; ++i) {
        arr[i] = new float[size];
        for (int j = 0; j < size; ++j) {
            arr[i][j] = 1.1;
        }
    }

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    delete[] arr;


    string** arr2 = new string*[size];
    for (int i = 0; i < size; ++i) {
        arr2[i] = new string[size];
        for (int j = 0; j < size; ++j) {
            arr2[i][j] = "*";
        }
    }

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    delete[] arr2;


    return 0;
}
