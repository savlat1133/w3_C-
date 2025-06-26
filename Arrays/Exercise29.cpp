// 29. Second Lowest and Highest Numbers in Array



#include <iostream>
using namespace std;



int main() {
    cout << "Find unique elements" << endl;
    cout << "-------------------------------------------" << endl;

    int arr[] = { 1, 12, 12, 9, 9, 5, 5 };

    int size = sizeof(arr) / sizeof(arr[0]);

    int index = 0;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                arr[j] = -1;
            }
        }
    }

    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] != -1) {
            arr[index] = arr[i];
            index++;
        }else {
            count++;
        }
    }

    size -= count;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    sort(arr, arr + size);

    cout << endl;

    cout << "Second Highest: " << arr[size - 2] << endl;
    cout << "Second Lowest: " << arr[1] << endl;



    return 0;
}
