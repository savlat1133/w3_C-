// Swap Two Numbers


#include <iostream>

using namespace std;

int main() {
    cout << "Swap of two numbers : " << endl;
    cout << "----------------------" << endl;

    int num1, num2, temp;
    cout << "Input 1st number : ";
    cin >> num1;
    cout << "Input 2nd number : ";
    cin >> num2;

    temp = num1;
    num1 = num2;
    num2 = temp;
    
    cout << "After swapping the 1st number is : " << num1 << endl;
    cout << "After swapping the 2nd number is : " << num2 << endl;
    return 0;
}
