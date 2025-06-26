// 27. Count Pairs with Sum Equal to Specified Number

#include <iostream>
using namespace std;



int main() {
    cout << "Find unique elements" << endl;
    cout << "-------------------------------------------" << endl;

    int array1[] = {1, 5, 7, 5, 8, 9, 11, 12};

    int size = sizeof(array1) / sizeof(int);

    int count = 0;
    for (int i = 0; i < size; i++) {
        int sum;
        for (int j = i + 1; j < size; j++) {
            sum = array1[i] + array1[j];
            if (sum == 12) {
                cout << array1[i] << ", " << array1[j] << endl;
                count++;
            }
        }
    }

    cout << "Number of pairs whose sum equal to 12: "<< count << endl;
    


    return 0;
}
