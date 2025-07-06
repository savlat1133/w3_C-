// 4. Dynamically Allocate Memory for a Character and a String with User Input

#include <iostream>
#include <string>
using namespace std;



int main() {
    cout << "Dynamically allocate two two-dimensional arrays of floating values and strings" << endl;
    cout << "-------------------------------------------" << endl;

    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    char** arr = new char*[size];
    for (int i = 0; i < size; i++) {
        arr[i] = new char[size];
        for (int j = 0; j < size; j++) {
            arr[i][j] = '_';
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    delete[] arr;

    string** arr2 = new string*[size];

    for (int i = 0; i < size; i++) {
        arr2[i] = new string[size];
        for (int j = 0; j < size; j++) {
            arr2[i][j] = '_';
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    delete[] arr2;


    return 0;
}
