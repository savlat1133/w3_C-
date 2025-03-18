// Sum of Even and Odd Numbers


#include <iostream>

using namespace std;

int* test(int arr[], int &size);

int main() {
    cout << "Sum of Even and Odd Numbers : " << endl;
    cout << "----------------------------------------------" << endl;

    int number[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *result;
    int size = sizeof(number) / sizeof(number[0]);

    cout << "Original Array : " << endl;
    for (int i = 0; i < size; i++) {
        cout << number[i] << " ";
    }
    cout << endl;

    result = test(number, size);
    cout << "Sum of Even and Odd Numbers : " + to_string(result[0]) + ", " << result[1] << endl;



    return 0;
}

int* test(int arr[], int &size) {
    static int result[2];

    for (int i = 0; i < size; i++) {
        arr[i] % 2 == 0 ? result[0] += arr[i] : result[1] += arr[i];
    }

    return result;
}
