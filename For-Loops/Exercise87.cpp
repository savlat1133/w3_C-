// 87. Generate Three-Digit Numbers from {1,2,3,4} and Count Them
#include <iostream>
#include <string>
using namespace std;


int main() {
    cout << "Generate three-digit numbers from {1,2,3,4} and count them" << endl;
    cout << "-------------------------------------------" << endl;

    int numbers[] = {1,2,3,4};
    int size = sizeof(numbers) / sizeof(int);
    cout << "The three-digit numbers are: " << endl;

    int count = 0;




    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {
                if (i != j && j != k && k != i) {
                    cout << numbers[i] << " " << numbers[j] << " " << numbers[k] << endl;
                    count++;
                }
            }
        }
    }

    cout << "Total number of the three-digit-number is: " << count << endl;


    return 0;
}
