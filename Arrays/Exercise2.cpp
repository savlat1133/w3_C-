// 2. Largest Three Elements in Array

#include <iostream>
#include <string>
using namespace std;


int main() {
    cout << "Largest three elements in array" << endl;
    cout << "-------------------------------------------" << endl;

    int evenArray[20] = {57, 13, 94, 62, 41, 6, 38, 29, 87, 73, 15, 31, 22, 96, 9, 55, 78, 4, 61, 44};

    // sorting
    for (int i = 0; i < 20 - 1; i++) {
        for (int j = i + 1; j < 20; j++) {
            if (evenArray[i] > evenArray[j]) {
                int temp = evenArray[i];
                evenArray[i] = evenArray[j];
                evenArray[j] = temp;
            }
        }
    }
    for (int i = 0; i < 20; i++) {
        cout << evenArray[i] << " ";
    }
    cout << endl;

    cout << "Three largest elements array: ";
    for (int i = 19; i > 16; i--) {
        cout << evenArray[i] << " ";
    }


    return 0;
}
